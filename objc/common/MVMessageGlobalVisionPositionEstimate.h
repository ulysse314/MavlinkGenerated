//
//  MVMessageGlobalVisionPositionEstimate.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a GLOBAL_VISION_POSITION_ESTIMATE Mavlink message.

 @discussion Global position/attitude estimate from a vision source.
 */
@interface MVMessageGlobalVisionPositionEstimate : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId usec:(uint64_t)usec x:(float)x y:(float)y z:(float)z roll:(float)roll pitch:(float)pitch yaw:(float)yaw covariance:(float *)covariance resetCounter:(uint8_t)resetCounter;

//! Timestamp (UNIX time or since system boot)
- (uint64_t)usec;

//! Global X position
- (float)x;

//! Global Y position
- (float)y;

//! Global Z position
- (float)z;

//! Roll angle
- (float)roll;

//! Pitch angle
- (float)pitch;

//! Yaw angle
- (float)yaw;

//! Row-major representation of pose 6x6 cross-covariance matrix upper right triangle (states: x_global, y_global, z_global, roll, pitch, yaw; first six entries are the first ROW, next five entries are the second ROW, etc.). If unknown, assign NaN value to first element in the array.
- (uint16_t)covariance:(float *)covariance;

//! Estimate reset counter. This should be incremented when the estimate resets in any of the dimensions (position, velocity, attitude, angular speed). This is designed to be used when e.g an external SLAM system detects a loop-closure and the estimate jumps.
- (uint8_t)resetCounter;

@end
