#include "Protocol/HorizonWebSocketProtocol.h"
#include "Core/Horizon.h"
#include "Misc/SecureHash.h"
#include "Misc/Base64.h"

namespace Horizon
{
namespace Protocol
{

FString FWebSocketProtocol::GenerateWebSocketKey()
{
    // Generate a random 16-byte value
    uint8 KeyBytes[16];
    for (int32 i = 0; i < 16; ++i)
    {
        KeyBytes[i] = static_cast<uint8>(FMath::RandRange(0, 255));
    }

    // Base64 encode the key
    return FBase64::Encode(KeyBytes, 16);
}

FString FWebSocketProtocol::CreateHandshakeRequest(
    const FString& Host,
    int32 Port,
    bool bIsSecure,
    const FString& Path,
    const FString& Key,
    const FString& Protocol,
    const TArray<FString>& Extensions)
{
    FString Request = FString::Printf(TEXT("GET %s HTTP/1.1\r\n"), *Path);
    
    // Add Host header with port if not standard
    if ((bIsSecure && Port != 443) || (!bIsSecure && Port != 80))
    {
        Request += FString::Printf(TEXT("Host: %s:%d\r\n"), *Host, Port);
    }
    else
    {
        Request += FString::Printf(TEXT("Host: %s\r\n"), *Host);
    }
    
    // Add required headers
    Request += TEXT("Upgrade: websocket\r\n");
    Request += TEXT("Connection: Upgrade\r\n");
    Request += FString::Printf(TEXT("Sec-WebSocket-Key: %s\r\n"), *Key);
    Request += TEXT("Sec-WebSocket-Version: 13\r\n");
    
    // Add optional protocol header
    if (!Protocol.IsEmpty())
    {
        Request += FString::Printf(TEXT("Sec-WebSocket-Protocol: %s\r\n"), *Protocol);
    }
    
    // Add optional extensions
    if (Extensions.Num() > 0)
    {
        Request += TEXT("Sec-WebSocket-Extensions: ");
        for (int32 i = 0; i < Extensions.Num(); ++i)
        {
            Request += Extensions[i];
            if (i < Extensions.Num() - 1)
            {
                Request += TEXT(", ");
            }
        }
        Request += TEXT("\r\n");
    }
    
    // Add additional headers for compatibility
    Request += TEXT("Pragma: no-cache\r\n");
    Request += TEXT("Cache-Control: no-cache\r\n");
    Request += TEXT("User-Agent: Horizon-WebSocket-Client\r\n");
    
    // Finalize request
    Request += TEXT("\r\n");
    
    return Request;
}

bool FWebSocketProtocol::ValidateHandshakeResponse(const FString& Response, const FString& Key)
{
    // Check for HTTP/1.1 101 status code
    if (!Response.Contains(TEXT("HTTP/1.1 101")))
    {
        UE_LOG(LogHorizon, Warning, TEXT("WebSocket handshake failed: Invalid status code"));
        return false;
    }
    
    // Check for required headers
    if (!Response.Contains(TEXT("Upgrade: websocket")) && 
        !Response.Contains(TEXT("upgrade: websocket")))
    {
        UE_LOG(LogHorizon, Warning, TEXT("WebSocket handshake failed: Missing Upgrade header"));
        return false;
    }
    
    if (!Response.Contains(TEXT("Connection: Upgrade")) && 
        !Response.Contains(TEXT("connection: upgrade")))
    {
        UE_LOG(LogHorizon, Warning, TEXT("WebSocket handshake failed: Missing Connection header"));
        return false;
    }
    
    // Extract Sec-WebSocket-Accept header
    FString AcceptHeader;
    int32 AcceptStart = Response.Find(TEXT("Sec-WebSocket-Accept: "), ESearchCase::IgnoreCase);
    if (AcceptStart != INDEX_NONE)
    {
        AcceptStart += 22; // Length of "Sec-WebSocket-Accept: "
        int32 AcceptEnd = Response.Find(TEXT("\r\n"), ESearchCase::IgnoreCase, ESearchDir::FromStart, AcceptStart);
        if (AcceptEnd != INDEX_NONE)
        {
            AcceptHeader = Response.Mid(AcceptStart, AcceptEnd - AcceptStart);
            
            // Compute expected accept value
            FString CombinedKey = Key + TEXT("258EAFA5-E914-47DA-95CA-C5AB0DC85B11");
            uint8 SHA1Digest[20];
            FSHA1::HashBuffer(TCHAR_TO_ANSI(*CombinedKey), CombinedKey.Len(), SHA1Digest);
            FString ExpectedAccept = FBase64::Encode(SHA1Digest, 20);
            
            // Verify accept value
            if (AcceptHeader != ExpectedAccept)
            {
                UE_LOG(LogHorizon, Warning, TEXT("WebSocket handshake failed: Invalid Sec-WebSocket-Accept value"));
                return false;
            }
        }
        else
        {
            UE_LOG(LogHorizon, Warning, TEXT("WebSocket handshake failed: Malformed Sec-WebSocket-Accept header"));
            return false;
        }
    }
    else
    {
        UE_LOG(LogHorizon, Warning, TEXT("WebSocket handshake failed: Missing Sec-WebSocket-Accept header"));
        return false;
    }
    
    return true;
}

FString FWebSocketProtocol::ExtractAcceptedProtocol(const FString& Response)
{
    int32 ProtocolStart = Response.Find(TEXT("Sec-WebSocket-Protocol: "), ESearchCase::IgnoreCase);
    if (ProtocolStart != INDEX_NONE)
    {
        ProtocolStart += 24; // Length of "Sec-WebSocket-Protocol: "
        int32 ProtocolEnd = Response.Find(TEXT("\r\n"), ESearchCase::IgnoreCase, ESearchDir::FromStart, ProtocolStart);
        if (ProtocolEnd != INDEX_NONE)
        {
            return Response.Mid(ProtocolStart, ProtocolEnd - ProtocolStart);
        }
    }
    
    return FString();
}

TArray<FString> FWebSocketProtocol::ExtractAcceptedExtensions(const FString& Response)
{
    TArray<FString> Extensions;
    
    int32 ExtensionsStart = Response.Find(TEXT("Sec-WebSocket-Extensions: "), ESearchCase::IgnoreCase);
    if (ExtensionsStart != INDEX_NONE)
    {
        ExtensionsStart += 26; // Length of "Sec-WebSocket-Extensions: "
        int32 ExtensionsEnd = Response.Find(TEXT("\r\n"), ESearchCase::IgnoreCase, ESearchDir::FromStart, ExtensionsStart);
        if (ExtensionsEnd != INDEX_NONE)
        {
            FString ExtensionsHeader = Response.Mid(ExtensionsStart, ExtensionsEnd - ExtensionsStart);
            ExtensionsHeader.ParseIntoArray(Extensions, TEXT(","), true);
            
            // Trim whitespace
            for (FString& Extension : Extensions)
            {
                Extension = Extension.TrimStartAndEnd();
            }
        }
    }
    
    return Extensions;
}

bool FWebSocketProtocol::ProcessWebSocketFrame(TArray<uint8>& InOutFrameBuffer, bool& bOutIsFinal, uint8& OutOpcode, TArray<uint8>& OutPayload)
{
    if (InOutFrameBuffer.Num() < 2)
    {
        return false; // Not enough data for a frame header
    }

    // Parse frame header
    uint8 FrameByte1 = InOutFrameBuffer[0];
    uint8 FrameByte2 = InOutFrameBuffer[1];

    bOutIsFinal = (FrameByte1 & 0x80) != 0;
    OutOpcode = FrameByte1 & 0x0F;
    
    bool bIsMasked = (FrameByte2 & 0x80) != 0;
    uint64 PayloadLength = FrameByte2 & 0x7F;
    
    int32 HeaderSize = 2; // Start with 2 bytes for the header
    
    // Extended payload length
    if (PayloadLength == 126)
    {
        if (InOutFrameBuffer.Num() < 4)
        {
            return false; // Not enough data for extended payload length
        }
        
        PayloadLength = (InOutFrameBuffer[2] << 8) | InOutFrameBuffer[3];
        HeaderSize += 2;
    }
    else if (PayloadLength == 127)
    {
        if (InOutFrameBuffer.Num() < 10)
        {
            return false; // Not enough data for extended payload length
        }
        
        PayloadLength = 0;
        for (int32 i = 0; i < 8; ++i)
        {
            PayloadLength = (PayloadLength << 8) | InOutFrameBuffer[2 + i];
        }
        HeaderSize += 8;
    }
    
    // Masking key
    uint8 MaskingKey[4] = {0};
    if (bIsMasked)
    {
        if (InOutFrameBuffer.Num() < HeaderSize + 4)
        {
            return false; // Not enough data for masking key
        }
        
        MaskingKey[0] = InOutFrameBuffer[HeaderSize];
        MaskingKey[1] = InOutFrameBuffer[HeaderSize + 1];
        MaskingKey[2] = InOutFrameBuffer[HeaderSize + 2];
        MaskingKey[3] = InOutFrameBuffer[HeaderSize + 3];
        
        HeaderSize += 4;
    }
    
    // Ensure we have the full payload
    if (InOutFrameBuffer.Num() < HeaderSize + PayloadLength)
    {
        return false; // Not enough data for full payload
    }
    
    // Extract payload
    OutPayload.SetNumUninitialized(PayloadLength);
    FMemory::Memcpy(OutPayload.GetData(), InOutFrameBuffer.GetData() + HeaderSize, PayloadLength);
    
    // Apply mask if needed
    if (bIsMasked)
    {
        ApplyWebSocketMask(OutPayload.GetData(), OutPayload.Num(), MaskingKey);
    }
    
    // Remove processed frame from buffer
    InOutFrameBuffer.RemoveAt(0, HeaderSize + PayloadLength);
    
    return true;
}

bool FWebSocketProtocol::ProcessWebSocketFrameZeroCopy(
    const uint8* Data,
    int32 DataSize,
    int32& OutBytesProcessed,
    FFrameHeader& OutFrameInfo,
    const uint8*& OutPayloadPtr,
    int32& OutPayloadSize)
{
    OutBytesProcessed = 0;
    OutPayloadPtr = nullptr;
    OutPayloadSize = 0;
    
    if (DataSize < 2)
    {
        return false; // Not enough data for a frame header
    }
    
    // Parse frame header
    uint8 FrameByte1 = Data[0];
    uint8 FrameByte2 = Data[1];
    
    OutFrameInfo.Fin = (FrameByte1 & 0x80) != 0 ? 1 : 0;
    OutFrameInfo.Rsv1 = (FrameByte1 & 0x40) != 0 ? 1 : 0;
    OutFrameInfo.Rsv2 = (FrameByte1 & 0x20) != 0 ? 1 : 0;
    OutFrameInfo.Rsv3 = (FrameByte1 & 0x10) != 0 ? 1 : 0;
    OutFrameInfo.OpCode = FrameByte1 & 0x0F;
    
    OutFrameInfo.Mask = (FrameByte2 & 0x80) != 0 ? 1 : 0;
    OutFrameInfo.PayloadLen = FrameByte2 & 0x7F;
    
    int32 HeaderSize = 2; // Start with 2 bytes for the header
    uint64 PayloadLength = OutFrameInfo.PayloadLen;
    
    // Extended payload length
    if (PayloadLength == 126)
    {
        if (DataSize < 4)
        {
            return false; // Not enough data for extended payload length
        }
        
        PayloadLength = (Data[2] << 8) | Data[3];
        HeaderSize += 2;
    }
    else if (PayloadLength == 127)
    {
        if (DataSize < 10)
        {
            return false; // Not enough data for extended payload length
        }
        
        PayloadLength = 0;
        for (int32 i = 0; i < 8; ++i)
        {
            PayloadLength = (PayloadLength << 8) | Data[2 + i];
        }
        HeaderSize += 8;
    }
    
    // Masking key
    if (OutFrameInfo.Mask)
    {
        if (DataSize < HeaderSize + 4)
        {
            return false; // Not enough data for masking key
        }
        
        HeaderSize += 4;
    }
    
    // Ensure we have the full payload
    if (DataSize < HeaderSize + PayloadLength)
    {
        return false; // Not enough data for full payload
    }
    
    // Set output parameters
    OutPayloadPtr = Data + HeaderSize;
    OutPayloadSize = PayloadLength;
    OutBytesProcessed = HeaderSize + PayloadLength;
    
    return true;
}

TArray<uint8> FWebSocketProtocol::CreateWebSocketFrame(const FString& Message, bool bUseMask)
{
    // Convert message to UTF-8
    FTCHARToUTF8 UTF8Message(*Message);
    
    // Create payload array
    TArray<uint8> Payload;
    Payload.Append(reinterpret_cast<const uint8*>(UTF8Message.Get()), UTF8Message.Length());
    
    // Create frame
    TArray<uint8> FrameData;
    EncodeWebSocketFrame(FrameData, true, EOpcode::Text, Payload, bUseMask);
    
    return FrameData;
}

TArray<uint8> FWebSocketProtocol::CreateBinaryFrame(const TArray<uint8>& Data, bool bUseMask)
{
    // Create frame
    TArray<uint8> FrameData;
    EncodeWebSocketFrame(FrameData, true, EOpcode::Binary, Data, bUseMask);
    
    return FrameData;
}

TArray<uint8> FWebSocketProtocol::CreatePingFrame(const TArray<uint8>& Data, bool bUseMask)
{
    // Create frame (ping frames should be small)
    TArray<uint8> FrameData;
    EncodeWebSocketFrame(FrameData, true, EOpcode::Ping, Data, bUseMask);
    
    return FrameData;
}

TArray<uint8> FWebSocketProtocol::CreatePongFrame(const TArray<uint8>& Data, bool bUseMask)
{
    // Create frame (pong frames should be small)
    TArray<uint8> FrameData;
    EncodeWebSocketFrame(FrameData, true, EOpcode::Pong, Data, bUseMask);
    
    return FrameData;
}

TArray<uint8> FWebSocketProtocol::CreateCloseFrame(uint16 Code, const FString& Reason, bool bUseMask)
{
    // Create payload with status code and reason
    TArray<uint8> Payload;
    
    // Add status code (network byte order)
    Payload.Add((Code >> 8) & 0xFF);
    Payload.Add(Code & 0xFF);
    
    // Add reason if provided
    if (!Reason.IsEmpty())
    {
        // Convert reason to UTF-8
        FTCHARToUTF8 UTF8Reason(*Reason);
        Payload.Append(reinterpret_cast<const uint8*>(UTF8Reason.Get()), UTF8Reason.Length());
    }
    
    // Create frame
    TArray<uint8> FrameData;
    EncodeWebSocketFrame(FrameData, true, EOpcode::Close, Payload, bUseMask);
    
    return FrameData;
}

void FWebSocketProtocol::EncodeWebSocketFrame(
    TArray<uint8>& OutBuffer,
    bool bFinal,
    EOpcode Opcode,
    const TArray<uint8>& Payload,
    bool bUseMask)
{
    // Generate masking key if needed
    uint8 MaskingKey[4] = {0};
    if (bUseMask)
    {
        GenerateWebSocketMask(MaskingKey);
    }
    
    // Encode header
    EncodeWebSocketFrameHeader(OutBuffer, bFinal, Opcode, MaskingKey, Payload.Num(), bUseMask);
    
    // Add payload
    int32 PayloadOffset = OutBuffer.Num();
    OutBuffer.Append(Payload);
    
    // Apply masking if needed
    if (bUseMask && Payload.Num() > 0)
    {
        ApplyWebSocketMask(OutBuffer.GetData() + PayloadOffset, Payload.Num(), MaskingKey);
    }
}

void FWebSocketProtocol::EncodeWebSocketFrameHeader(
    TArray<uint8>& OutBuffer,
    bool bFinal,
    EOpcode Opcode,
    const uint8 MaskingKey[4],
    int32 PayloadSize,
    bool bUseMask)
{
    // First byte: FIN bit and Opcode
    uint8 FirstByte = static_cast<uint8>(Opcode) & 0x0F;
    if (bFinal)
    {
        FirstByte |= 0x80;
    }
    OutBuffer.Add(FirstByte);
    
    // Second byte: MASK bit and payload length
    uint8 SecondByte = bUseMask ? 0x80 : 0x00;
    
    if (PayloadSize < 126)
    {
        // Small payload, length fits in 7 bits
        SecondByte |= PayloadSize & 0x7F;
        OutBuffer.Add(SecondByte);
    }
    else if (PayloadSize <= 0xFFFF)
    {
        // Medium payload, length is 16 bits
        SecondByte |= 126;
        OutBuffer.Add(SecondByte);
        
        // Add extended payload length (16 bits, network byte order)
        OutBuffer.Add((PayloadSize >> 8) & 0xFF);
        OutBuffer.Add(PayloadSize & 0xFF);
    }
    else
    {
        // Large payload, length is 64 bits
        SecondByte |= 127;
        OutBuffer.Add(SecondByte);
        
        // Add extended payload length (64 bits, network byte order)
        // Note: We only support 32-bit length, upper 32 bits are all zero
        OutBuffer.Add(0);
        OutBuffer.Add(0);
        OutBuffer.Add(0);
        OutBuffer.Add(0);
        OutBuffer.Add((PayloadSize >> 24) & 0xFF);
        OutBuffer.Add((PayloadSize >> 16) & 0xFF);
        OutBuffer.Add((PayloadSize >> 8) & 0xFF);
        OutBuffer.Add(PayloadSize & 0xFF);
    }
    
    // Add masking key if needed
    if (bUseMask)
    {
        OutBuffer.Append(MaskingKey, 4);
    }
}

void FWebSocketProtocol::GenerateWebSocketMask(uint8* OutMask)
{
    for (int32 i = 0; i < 4; ++i)
    {
        OutMask[i] = static_cast<uint8>(FMath::RandRange(0, 255));
    }
}

void FWebSocketProtocol::ApplyWebSocketMask(uint8* Data, int32 DataSize, const uint8* Mask)
{
    for (int32 i = 0; i < DataSize; ++i)
    {
        Data[i] ^= Mask[i % 4];
    }
}

} // namespace Protocol
} // namespace Horizon 