//
//  MVMessageWheelDistance.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a WHEEL_DISTANCE Mavlink message.

 @discussion Cumulative distance traveled for each reported wheel.
 */
@interface MVMessageWheelDistance : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec count:(uint8_t)count distance:(double *)distance;

//! Timestamp (synced to UNIX time or since system boot).
- (uint64_t)timeUsec;

//! Number of wheels reported.
- (uint8_t)count;

//! Distance reported by individual wheel encoders. Forward rotations increase values, reverse rotations decrease them. Not all wheels will necessarily have wheel encoders; the mapping of encoders to wheel positions must be agreed/understood by the endpoints.
- (uint16_t)distance:(double *)distance;

@end
