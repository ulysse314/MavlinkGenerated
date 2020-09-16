//
//  MVMessageIsbdLinkStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a ISBD_LINK_STATUS Mavlink message.

 @discussion Status of the Iridium SBD link.
 */
@interface MVMessageIsbdLinkStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timestamp:(uint64_t)timestamp lastHeartbeat:(uint64_t)lastHeartbeat failedSessions:(uint16_t)failedSessions successfulSessions:(uint16_t)successfulSessions signalQuality:(uint8_t)signalQuality ringPending:(uint8_t)ringPending txSessionPending:(uint8_t)txSessionPending rxSessionPending:(uint8_t)rxSessionPending;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timestamp;

//! Timestamp of the last successful sbd session. The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)lastHeartbeat;

//! Number of failed SBD sessions.
- (uint16_t)failedSessions;

//! Number of successful SBD sessions.
- (uint16_t)successfulSessions;

//! Signal quality equal to the number of bars displayed on the ISU signal strength indicator. Range is 0 to 5, where 0 indicates no signal and 5 indicates maximum signal strength.
- (uint8_t)signalQuality;

//! 1: Ring call pending, 0: No call pending.
- (uint8_t)ringPending;

//! 1: Transmission session pending, 0: No transmission session pending.
- (uint8_t)txSessionPending;

//! 1: Receiving session pending, 0: No receiving session pending.
- (uint8_t)rxSessionPending;

@end
