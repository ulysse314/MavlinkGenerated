//
//  MVMessageLinkNodeStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a LINK_NODE_STATUS Mavlink message.

 @discussion Status generated in each node in the communication chain and injected into MAVLink stream.
 */
@interface MVMessageLinkNodeStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timestamp:(uint64_t)timestamp txBuf:(uint8_t)txBuf rxBuf:(uint8_t)rxBuf txRate:(uint32_t)txRate rxRate:(uint32_t)rxRate rxParseErr:(uint16_t)rxParseErr txOverflows:(uint16_t)txOverflows rxOverflows:(uint16_t)rxOverflows messagesSent:(uint32_t)messagesSent messagesReceived:(uint32_t)messagesReceived messagesLost:(uint32_t)messagesLost;

//! Timestamp (time since system boot).
- (uint64_t)timestamp;

//! Remaining free transmit buffer space
- (uint8_t)txBuf;

//! Remaining free receive buffer space
- (uint8_t)rxBuf;

//! Transmit rate
- (uint32_t)txRate;

//! Receive rate
- (uint32_t)rxRate;

//! Number of bytes that could not be parsed correctly.
- (uint16_t)rxParseErr;

//! Transmit buffer overflows. This number wraps around as it reaches UINT16_MAX
- (uint16_t)txOverflows;

//! Receive buffer overflows. This number wraps around as it reaches UINT16_MAX
- (uint16_t)rxOverflows;

//! Messages sent
- (uint32_t)messagesSent;

//! Messages received (estimated from counting seq)
- (uint32_t)messagesReceived;

//! Messages lost (estimated from counting seq)
- (uint32_t)messagesLost;

@end
