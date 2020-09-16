//
//  MVMessageViconPositionEstimate.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a VICON_POSITION_ESTIMATE Mavlink message.

 @discussion Global position estimate from a Vicon motion system source.
 */
@interface MVMessageViconPositionEstimate : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId usec:(uint64_t)usec x:(float)x y:(float)y z:(float)z roll:(float)roll pitch:(float)pitch yaw:(float)yaw covariance:(float *)covariance;

//! Timestamp (UNIX time or time since system boot)
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

//! Row-major representation of 6x6 pose cross-covariance matrix upper right triangle (states: x, y, z, roll, pitch, yaw; first six entries are the first ROW, next five entries are the second ROW, etc.). If unknown, assign NaN value to first element in the array.
- (uint16_t)covariance:(float *)covariance;

@end
