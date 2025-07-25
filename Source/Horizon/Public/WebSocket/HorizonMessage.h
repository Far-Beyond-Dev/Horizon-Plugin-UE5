#pragma once

#include "CoreMinimal.h"
#include "Protocol/HorizonWebSocketProtocol.h"

namespace Horizon
{
namespace WebSocket
{

/**
 * High-performance WebSocket message with pool support
 * Used for both sending and receiving messages
 */
class HORIZON_API FHorizonMessage : public TSharedFromThis<FHorizonMessage>
{
public:
    /**
     * Message type enumeration
     */
    enum class EType : uint8
    {
        Text,       // Standard text message
        Binary,     // Binary message
        Ping,       // Ping message
        Pong,       // Pong response
        Close,      // Close message
        Handshake   // WebSocket handshake
    };

    typedef EType EHorizonMessageType;

    /**
     * Default constructor - empty message
     */
    FHorizonMessage();

    /**
     * Constructor for text messages
     * @param InMessage Text message content
     */
    explicit FHorizonMessage(const FString& InMessage);

    /**
     * Constructor for binary messages
     * @param InData Binary message data
     */
    explicit FHorizonMessage(const TArray<uint8>& InData);

    /**
     * Constructor for binary messages with move semantics
     * @param InData Binary message data
     */
    explicit FHorizonMessage(TArray<uint8>&& InData);

    /** Destructor - returns to pool if pooling is enabled */
    ~FHorizonMessage();

    /**
     * Sets the message type
     * @param InType New message type
     */
    void SetType(EType InType) { Type = InType; }

    /**
     * Gets the message type
     * @return Message type
     */
    EType GetType() const { return Type; }

    /**
     * Sets the text content of the message
     * @param InText New text content
     */
    void SetText(const FString& InText) { Text = InText; Type = EType::Text; }

    /**
     * Sets the binary content of the message
     * @param InData New binary content
     */
    void SetData(const TArray<uint8>& InData) { Data = InData; Type = EType::Binary; }

    /**
     * Sets the binary content with move semantics
     * @param InData New binary content
     */
    void SetData(TArray<uint8>&& InData) { Data = MoveTemp(InData); Type = EType::Binary; }

    /**
     * Gets the text content
     * @return Text content
     */
    const FString& GetText() const { return Text; }

    /**
     * Gets the text payload (alias for GetText)
     * @return Text content
     */
    const FString& GetTextPayload() const { return GetText(); }

    /**
     * Gets the binary content
     * @return Binary content
     */
    const TArray<uint8>& GetData() const { return Data; }

    /**
     * Gets the binary payload (alias for GetData)
     * @return Binary content
     */
    const TArray<uint8>& GetBinaryPayload() const { return GetData(); }

    /**
     * Gets the message size in bytes
     * @return Size in bytes
     */
    int32 GetSize() const;

    /**
     * Clear all content
     */
    void Clear();

    /**
     * Converts the message to a WebSocket frame
     * @return Binary frame data
     */
    TArray<uint8> ToWebSocketFrame() const;

    /**
     * Creates a text message
     * @param Text Text content
     * @return New message instance (from pool if enabled)
     */
    static TSharedPtr<FHorizonMessage> CreateTextMessage(const FString& Text);

    /**
     * Creates a binary message
     * @param Data Binary content
     * @return New message instance (from pool if enabled)
     */
    static TSharedPtr<FHorizonMessage> CreateBinaryMessage(const TArray<uint8>& Data);

    /**
     * Creates a ping message
     * @return New message instance (from pool if enabled)
     */
    static TSharedPtr<FHorizonMessage> CreatePingMessage();

    /**
     * Creates a pong message
     * @return New message instance (from pool if enabled)
     */
    static TSharedPtr<FHorizonMessage> CreatePongMessage();

    /**
     * Creates a close message
     * @param Code Close status code
     * @param Reason Close reason
     * @return New message instance (from pool if enabled)
     */
    static TSharedPtr<FHorizonMessage> CreateCloseMessage(uint16 Code = 1000, const FString& Reason = TEXT(""));

private:
    EType Type;
    FString Text;
    TArray<uint8> Data;
    
    /** For pool support */
    friend class FHorizonMessagePool;
};

/**
 * Pool for reusing message objects to reduce memory allocations
 */
class HORIZON_API FHorizonMessagePool
{
public:
    /**
     * Gets the singleton instance
     * @return The message pool
     */
    static FHorizonMessagePool& Get();

    /**
     * Allocates a message from the pool
     * @return Message pointer (new or from pool)
     */
    TSharedPtr<FHorizonMessage> Allocate();

    /**
     * Returns a message to the pool
     * @param Message The message to return
     */
    void Release(const TSharedPtr<FHorizonMessage>& Message);

    /**
     * Sets the maximum pool size
     * @param MaxSize New maximum size (0 = unlimited)
     */
    void SetMaxPoolSize(int32 MaxSize);

    /**
     * Gets the current pool size
     * @return Number of pooled messages
     */
    int32 GetPoolSize() const;

    /**
     * Gets the total allocations count
     * @return Total allocations
     */
    int64 GetTotalAllocations() const;

    /**
     * Gets the pool reuse count
     * @return Reuse count
     */
    int64 GetReuseCount() const;

private:
    FHorizonMessagePool();
    ~FHorizonMessagePool();

    mutable FCriticalSection PoolLock;
    TArray<TSharedPtr<FHorizonMessage>> Pool;
    int32 MaxPoolSize;
    
    std::atomic<int64> TotalAllocations{0};
    std::atomic<int64> ReuseCount{0};
};

} // namespace WebSocket
} // namespace Horizon 