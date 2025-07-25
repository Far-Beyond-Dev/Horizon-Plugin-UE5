#include "WebSocket/HorizonMessage.h"
#include "Protocol/HorizonWebSocketProtocol.h"
#include "Core/Horizon.h"
#include "Misc/ScopeLock.h"
#include "Misc/Base64.h"

namespace Horizon
{
namespace WebSocket
{

// Default pool size (optimized for performance)
static const int32 DEFAULT_MAX_POOL_SIZE = 5000;

//------------------------------------------------------------------------------
// FHorizonMessage implementation
//------------------------------------------------------------------------------

FHorizonMessage::FHorizonMessage()
    : Type(EType::Text)
{
}

FHorizonMessage::FHorizonMessage(const FString& InMessage)
    : Type(EType::Text)
    , Text(InMessage)
{
}

FHorizonMessage::FHorizonMessage(const TArray<uint8>& InData)
    : Type(EType::Binary)
    , Data(InData)
{
}

FHorizonMessage::FHorizonMessage(TArray<uint8>&& InData)
    : Type(EType::Binary)
    , Data(MoveTemp(InData))
{
}

FHorizonMessage::~FHorizonMessage()
{
    // No auto-return to pool for shared pointers
    // This is handled by Release() when shared ref count hits zero
}

int32 FHorizonMessage::GetSize() const
{
    if (Type == EType::Text)
    {
        // For text messages, return the UTF-8 size
        FTCHARToUTF8 UTF8Text(*Text);
        return UTF8Text.Length();
    }
    else
    {
        // For binary messages, return the data size
        return Data.Num();
    }
}

void FHorizonMessage::Clear()
{
    Text.Empty();
    Data.Empty();
    Type = EType::Text;
}

TArray<uint8> FHorizonMessage::ToWebSocketFrame() const
{
    // Create appropriate WebSocket frame based on message type
    switch (Type)
    {
    case EType::Text:
        return Horizon::Protocol::FWebSocketProtocol::CreateWebSocketFrame(Text, true);
        
    case EType::Binary:
        return Horizon::Protocol::FWebSocketProtocol::CreateBinaryFrame(Data, true);
        
    case EType::Ping:
        return Horizon::Protocol::FWebSocketProtocol::CreatePingFrame(Data, true);
        
    case EType::Pong:
        return Horizon::Protocol::FWebSocketProtocol::CreatePongFrame(Data, true);
        
    case EType::Close:
        {
            uint16 CloseCode = 1000;
            FString CloseReason;
            
            // Extract close code and reason if available
            if (Data.Num() >= 2)
            {
                CloseCode = (static_cast<uint16>(Data[0]) << 8) | Data[1];
                
                if (Data.Num() > 2)
                {
                    CloseReason = FString(Data.Num() - 2, reinterpret_cast<const char*>(Data.GetData() + 2));
                }
            }
            
            return Horizon::Protocol::FWebSocketProtocol::CreateCloseFrame(CloseCode, CloseReason, true);
        }
    }
    
    // Default (should never happen)
    return Horizon::Protocol::FWebSocketProtocol::CreateWebSocketFrame(Text, true);
}

TSharedPtr<FHorizonMessage> FHorizonMessage::CreateTextMessage(const FString& Text)
{
    // Get a message from the pool
    TSharedPtr<FHorizonMessage> Message = FHorizonMessagePool::Get().Allocate();
    Message->SetType(EType::Text);
    Message->SetText(Text);
    return Message;
}

TSharedPtr<FHorizonMessage> FHorizonMessage::CreateBinaryMessage(const TArray<uint8>& Data)
{
    // Get a message from the pool
    TSharedPtr<FHorizonMessage> Message = FHorizonMessagePool::Get().Allocate();
    Message->SetType(EType::Binary);
    Message->SetData(Data);
    return Message;
}

TSharedPtr<FHorizonMessage> FHorizonMessage::CreatePingMessage()
{
    // Get a message from the pool
    TSharedPtr<FHorizonMessage> Message = FHorizonMessagePool::Get().Allocate();
    Message->SetType(EType::Ping);
    return Message;
}

TSharedPtr<FHorizonMessage> FHorizonMessage::CreatePongMessage()
{
    // Get a message from the pool
    TSharedPtr<FHorizonMessage> Message = FHorizonMessagePool::Get().Allocate();
    Message->SetType(EType::Pong);
    return Message;
}

TSharedPtr<FHorizonMessage> FHorizonMessage::CreateCloseMessage(uint16 Code, const FString& Reason)
{
    // Get a message from the pool
    TSharedPtr<FHorizonMessage> Message = FHorizonMessagePool::Get().Allocate();
    Message->SetType(EType::Close);
    
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
    
    Message->SetData(Payload);
    return Message;
}

//------------------------------------------------------------------------------
// FHorizonMessagePool implementation
//------------------------------------------------------------------------------

FHorizonMessagePool& FHorizonMessagePool::Get()
{
    static FHorizonMessagePool Instance;
    return Instance;
}

FHorizonMessagePool::FHorizonMessagePool()
    : MaxPoolSize(DEFAULT_MAX_POOL_SIZE)
{
    // Pre-allocate more messages to avoid initial allocations
    const int32 PreallocCount = 500;
    
    for (int32 i = 0; i < PreallocCount; ++i)
    {
        Pool.Add(MakeShared<FHorizonMessage>());
    }
    
    TotalAllocations.store(PreallocCount);
    UE_LOG(LogHorizon, Verbose, TEXT("Horizon message pool created with %d pre-allocated messages"), PreallocCount);
}

FHorizonMessagePool::~FHorizonMessagePool()
{
    FScopeLock Lock(&PoolLock);
    
    UE_LOG(LogHorizon, Verbose, TEXT("Horizon message pool destroyed - Stats: Allocated: %lld, Reused: %lld, Efficiency: %.2f%%"), 
        TotalAllocations.load(), ReuseCount.load(), 
        (TotalAllocations.load() > 0) ? (100.0f * ReuseCount.load() / TotalAllocations.load()) : 0.0f);
    
    // Clear the pool
    Pool.Empty();
}

TSharedPtr<FHorizonMessage> FHorizonMessagePool::Allocate()
{
    TSharedPtr<FHorizonMessage> Message;
    
    {
        FScopeLock Lock(&PoolLock);
        
        if (!Pool.IsEmpty())
        {
            // Get message from pool
            Message = Pool.Pop(false);
            ReuseCount.fetch_add(1);
        }
    }
    
    if (!Message.IsValid())
    {
        // Create new message
        Message = MakeShared<FHorizonMessage>();
        TotalAllocations.fetch_add(1);
    }
    else
    {
        // Clear any existing data
        Message->Clear();
    }
    
    return Message;
}

void FHorizonMessagePool::Release(const TSharedPtr<FHorizonMessage>& Message)
{
    if (!Message.IsValid())
    {
        return;
    }
    
    // Clear the message before returning to pool
    Message->Clear();
    
    FScopeLock Lock(&PoolLock);
    
    // Only add to pool if below max size
    if (MaxPoolSize <= 0 || Pool.Num() < MaxPoolSize)
    {
        Pool.Add(Message);
    }
}

void FHorizonMessagePool::SetMaxPoolSize(int32 MaxSize)
{
    FScopeLock Lock(&PoolLock);
    
    MaxPoolSize = MaxSize;
    
    // If the new size is smaller, trim the pool
    if (MaxPoolSize > 0 && Pool.Num() > MaxPoolSize)
    {
        Pool.RemoveAt(MaxPoolSize, Pool.Num() - MaxPoolSize);
    }
}

int32 FHorizonMessagePool::GetPoolSize() const
{
    FScopeLock Lock(&PoolLock);
    return Pool.Num();
}

} // namespace WebSocket
} // namespace Horizon 