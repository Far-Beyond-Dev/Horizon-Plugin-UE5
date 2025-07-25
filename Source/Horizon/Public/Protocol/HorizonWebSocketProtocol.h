#pragma once

#include "CoreMinimal.h"

/**
 * @file HorizonWebSocketProtocol.h
 * @brief WebSocket protocol implementation compliant with RFC6455
 * 
 * This file provides a complete implementation of the WebSocket protocol as defined
 * in RFC6455. It handles handshake generation/verification, frame encoding/decoding,
 * and message handling with support for all WebSocket features including extensions.
 */

namespace Horizon
{
namespace Protocol
{

/**
 * @class FWebSocketProtocol
 * @brief Complete WebSocket protocol implementation (RFC6455)
 * 
 * This class provides the core WebSocket protocol implementation, including
 * handshake generation/verification, frame encoding/decoding, and message handling.
 * It's designed to be fully compliant with RFC6455 while being optimized for
 * performance in Unreal Engine environments.
 * 
 * Key Features:
 * - Complete RFC6455 compliance
 * - Efficient frame encoding/decoding
 * - Handshake generation and verification
 * - Support for WebSocket extensions
 * - Compression support (when enabled)
 * - Message fragmentation handling
 * - Control frame processing (ping/pong/close)
 * 
 * The protocol implementation is stateless and thread-safe, making it suitable
 * for use in multithreaded environments. All operations are optimized for minimal
 * memory allocations and maximum throughput.
 * 
 * Usage:
 * @code{.cpp}
 * // Generate a client handshake
 * FString Handshake = FWebSocketProtocol::GenerateHandshake(URL, Protocol);
 * 
 * // Encode a text message
 * TArray<uint8> Frame = FWebSocketProtocol::EncodeFrame(
 *     EOpcode::Text, MessageText, true
 * );
 * 
 * // Decode incoming frames
 * TArray<FWebSocketFrame> Frames;
 * FWebSocketProtocol::DecodeFrames(IncomingData, Frames);
 * @endcode
 * 
 * @note This implementation is optimized for single-client scenarios
 * @see RFC6455 for complete WebSocket protocol specification
 */
class HORIZON_API FWebSocketProtocol
{
public:
    /**
     * @enum EOpcode
     * @brief WebSocket frame opcodes as defined in RFC6455
     * 
     * These opcodes define the type of data being transmitted in a WebSocket frame.
     * They are used to differentiate between text, binary, and control frames.
     */
    enum class EOpcode : uint8
    {
        /** Continuation frame (for fragmented messages) */
        Continuation = 0x0,
        /** Text frame (UTF-8 encoded) */
        Text = 0x1,
        /** Binary frame (raw bytes) */
        Binary = 0x2,
        /** Close frame (connection termination) */
        Close = 0x8,
        /** Ping frame (keep-alive request) */
        Ping = 0x9,
        /** Pong frame (keep-alive response) */
        Pong = 0xA
    };

    /**
     * @struct FFrameHeader
     * @brief WebSocket frame header structure
     * 
     * Represents the header of a WebSocket frame as defined in RFC6455.
     * This structure is used for both encoding and decoding frame headers.
     */
    struct FFrameHeader
    {
        /** FIN bit: 1 if this is the final fragment, 0 otherwise */
        uint8 Fin : 1;
        /** RSV1 bit: Reserved for extensions */
        uint8 Rsv1 : 1;
        /** RSV2 bit: Reserved for extensions */
        uint8 Rsv2 : 1;
        /** RSV3 bit: Reserved for extensions */
        uint8 Rsv3 : 1;
        /** Opcode: Frame type (4 bits) */
        uint8 OpCode : 4;
        /** MASK bit: 1 if payload is masked, 0 otherwise */
        uint8 Mask : 1;
        /** Payload length: 7 bits for length < 126 */
        uint8 PayloadLen : 7;
    };

    /**
     * @struct FExtensionFlags
     * @brief WebSocket extension configuration flags
     * 
     * Contains configuration flags for WebSocket extensions, particularly
     * for compression extensions like permessage-deflate.
     */
    struct FExtensionFlags
    {
        /** Server context takeover disabled */
        bool bServerNoContextTakeover = false;
        /** Client context takeover disabled */
        bool bClientNoContextTakeover = false;
        /** Server maximum window bits for compression */
        int32 ServerMaxWindowBits = 15;
        /** Client maximum window bits for compression */
        int32 ClientMaxWindowBits = 15;
    };

    /**
     * Generates a WebSocket key for handshake
     * @return Base64 encoded WebSocket key
     */
    static FString GenerateWebSocketKey();

    /**
     * Creates a handshake request based on WebSocket protocol
     * 
     * @param Host Server hostname
     * @param Port Server port
     * @param bIsSecure Whether connection is secure (WSS)
     * @param Path Request path
     * @param Key WebSocket key
     * @param Protocol WebSocket subprotocol
     * @param Extensions WebSocket extensions
     * @return HTTP handshake request string
     */
    static FString CreateHandshakeRequest(
        const FString& Host,
        int32 Port,
        bool bIsSecure,
        const FString& Path,
        const FString& Key,
        const FString& Protocol = TEXT(""),
        const TArray<FString>& Extensions = TArray<FString>()
    );

    /**
     * Validates a WebSocket handshake response
     * 
     * @param Response Handshake response from server
     * @param Key WebSocket key used in the request
     * @return True if response is valid
     */
    static bool ValidateHandshakeResponse(const FString& Response, const FString& Key);

    /**
     * Extracts the accepted protocol from handshake response
     * 
     * @param Response Handshake response from server
     * @return Accepted protocol or empty string
     */
    static FString ExtractAcceptedProtocol(const FString& Response);

    /**
     * Extracts accepted extensions from handshake response
     * 
     * @param Response Handshake response from server
     * @return Array of accepted extensions
     */
    static TArray<FString> ExtractAcceptedExtensions(const FString& Response);

    /**
     * Processes a WebSocket frame from a buffer
     * 
     * @param InOutFrameBuffer Input buffer, modified to remove processed frame
     * @param bOutIsFinal Whether this is a final frame
     * @param OutOpcode The frame opcode
     * @param OutPayload The payload data
     * @return True if a complete frame was processed
     */
    static bool ProcessWebSocketFrame(TArray<uint8>& InOutFrameBuffer, bool& bOutIsFinal, uint8& OutOpcode, TArray<uint8>& OutPayload);

    /**
     * Processes a WebSocket frame without copying memory
     * 
     * @param Data Raw data buffer
     * @param DataSize Size of data buffer
     * @param OutBytesProcessed Number of bytes processed
     * @param OutFrameInfo Frame header information
     * @param OutPayloadPtr Pointer to payload within buffer
     * @param OutPayloadSize Size of payload
     * @return True if a complete frame was processed
     */
    static bool ProcessWebSocketFrameZeroCopy(
        const uint8* Data,
        int32 DataSize,
        int32& OutBytesProcessed,
        FFrameHeader& OutFrameInfo,
        const uint8*& OutPayloadPtr,
        int32& OutPayloadSize);

    /**
     * Creates a WebSocket text frame
     * 
     * @param Message Text message
     * @param bUseMask Whether to mask the frame
     * @return Frame data
     */
    static TArray<uint8> CreateWebSocketFrame(const FString& Message, bool bUseMask = true);

    /**
     * Creates a WebSocket binary frame
     * 
     * @param Data Binary data
     * @param bUseMask Whether to mask the frame
     * @return Frame data
     */
    static TArray<uint8> CreateBinaryFrame(const TArray<uint8>& Data, bool bUseMask = true);

    /**
     * Creates a WebSocket ping frame
     * 
     * @param Data Optional ping data
     * @param bUseMask Whether to mask the frame
     * @return Frame data
     */
    static TArray<uint8> CreatePingFrame(const TArray<uint8>& Data = TArray<uint8>(), bool bUseMask = true);

    /**
     * Creates a WebSocket pong frame
     * 
     * @param Data Optional pong data
     * @param bUseMask Whether to mask the frame
     * @return Frame data
     */
    static TArray<uint8> CreatePongFrame(const TArray<uint8>& Data = TArray<uint8>(), bool bUseMask = true);

    /**
     * Creates a WebSocket close frame
     * 
     * @param Code Close status code
     * @param Reason Close reason
     * @param bUseMask Whether to mask the frame
     * @return Frame data
     */
    static TArray<uint8> CreateCloseFrame(uint16 Code = 1000, const FString& Reason = TEXT(""), bool bUseMask = true);

    /**
     * Encodes a WebSocket frame
     * 
     * @param OutBuffer Output buffer
     * @param bFinal Whether this is a final frame
     * @param Opcode Frame opcode
     * @param Payload Frame payload
     * @param bUseMask Whether to mask the frame
     */
    static void EncodeWebSocketFrame(
        TArray<uint8>& OutBuffer,
        bool bFinal,
        EOpcode Opcode,
        const TArray<uint8>& Payload,
        bool bUseMask = true);

    /**
     * Encodes a WebSocket frame header
     * 
     * @param OutBuffer Output buffer
     * @param bFinal Whether this is a final frame
     * @param Opcode Frame opcode
     * @param MaskingKey Optional masking key (all zeros for no masking)
     * @param PayloadSize Size of payload
     * @param bUseMask Whether to mask the frame
     */
    static void EncodeWebSocketFrameHeader(
        TArray<uint8>& OutBuffer,
        bool bFinal,
        EOpcode Opcode,
        const uint8 MaskingKey[4],
        int32 PayloadSize,
        bool bUseMask = true);

    /**
     * Generates a random WebSocket mask
     * 
     * @param OutMask Output mask (4 bytes)
     */
    static void GenerateWebSocketMask(uint8* OutMask);

    /**
     * Applies WebSocket masking to data
     * 
     * @param Data Data to mask
     * @param DataSize Size of data
     * @param Mask Masking key
     */
    static void ApplyWebSocketMask(uint8* Data, int32 DataSize, const uint8* Mask);
};

} // namespace Protocol
} // namespace Horizon 