//
//  MVMessageVisionSpeedEstimate.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a VISION_SPEED_ESTIMATE Mavlink message.

 @discussion Speed estimate from a vision source.
 */
@interface MVMessageVisionSpeedEstimate : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId usec:(uint64_t)usec x:(float)x y:(float)y z:(float)z covariance:(float *)covariance resetCounter:(uint8_t)resetCounter;

//! Timestamp (UNIX time or time since system boot)
- (uint64_t)usec;

//! Global X speed
- (float)x;

//! Global Y speed
- (float)y;

//! Global Z speed
- (float)z;

//! Row-major representation of 3x3 linear velocity covariance matrix (states: vx, vy, vz; 1st three entries - 1st row, etc.). If unknown, assign NaN value to first element in the array.
- (uint16_t)covariance:(float *)covariance;

//! Estimate reset counter. This should be incremented when the estimate resets in any of the dimensions (position, velocity, attitude, angular speed). This is designed to be used when e.g an external SLAM system detects a loop-closure and the estimate jumps.
- (uint8_t)resetCounter;

@end
