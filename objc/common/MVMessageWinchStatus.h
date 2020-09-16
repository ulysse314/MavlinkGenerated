//
//  MVMessageWinchStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a WINCH_STATUS Mavlink message.

 @discussion Winch status.
 */
@interface MVMessageWinchStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec lineLength:(float)lineLength speed:(float)speed tension:(float)tension voltage:(float)voltage current:(float)current temperature:(int16_t)temperature status:(MAV_WINCH_STATUS_FLAG)status;

//! Timestamp (synced to UNIX time or since system boot).
- (uint64_t)timeUsec;

//! Length of line released. NaN if unknown
- (float)lineLength;

//! Speed line is being released or retracted. Positive values if being released, negative values if being retracted, NaN if unknown
- (float)speed;

//! Tension on the line. NaN if unknown
- (float)tension;

//! Voltage of the battery supplying the winch. NaN if unknown
- (float)voltage;

//! Current draw from the winch. NaN if unknown
- (float)current;

//! Temperature of the motor. INT16_MAX if unknown
- (int16_t)temperature;

//! Status flags
- (MAV_WINCH_STATUS_FLAG)status;

@end
