//
//  MVMessageFlightInformation.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a FLIGHT_INFORMATION Mavlink message.

 @discussion Information about flight since last arming.
 */
@interface MVMessageFlightInformation : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs armingTimeUtc:(uint64_t)armingTimeUtc takeoffTimeUtc:(uint64_t)takeoffTimeUtc flightUuid:(uint64_t)flightUuid;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Timestamp at arming (time since UNIX epoch) in UTC, 0 for unknown
- (uint64_t)armingTimeUtc;

//! Timestamp at takeoff (time since UNIX epoch) in UTC, 0 for unknown
- (uint64_t)takeoffTimeUtc;

//! Universally unique identifier (UUID) of flight, should correspond to name of log files
- (uint64_t)flightUuid;

@end
