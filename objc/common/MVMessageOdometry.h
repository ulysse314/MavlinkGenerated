//
//  MVMessageOdometry.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a ODOMETRY Mavlink message.

 @discussion Odometry message to communicate odometry information with an external interface. Fits ROS REP 147 standard for aerial vehicles (http://www.ros.org/reps/rep-0147.html).
 */
@interface MVMessageOdometry : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec frameId:(MAV_FRAME)frameId childFrameId:(MAV_FRAME)childFrameId x:(float)x y:(float)y z:(float)z q:(float *)q vx:(float)vx vy:(float)vy vz:(float)vz rollspeed:(float)rollspeed pitchspeed:(float)pitchspeed yawspeed:(float)yawspeed poseCovariance:(float *)poseCovariance velocityCovariance:(float *)velocityCovariance resetCounter:(uint8_t)resetCounter estimatorType:(MAV_ESTIMATOR_TYPE)estimatorType;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Coordinate frame of reference for the pose data.
- (MAV_FRAME)frameId;

//! Coordinate frame of reference for the velocity in free space (twist) data.
- (MAV_FRAME)childFrameId;

//! X Position
- (float)x;

//! Y Position
- (float)y;

//! Z Position
- (float)z;

//! Quaternion components, w, x, y, z (1 0 0 0 is the null-rotation)
- (uint16_t)q:(float *)q;

//! X linear speed
- (float)vx;

//! Y linear speed
- (float)vy;

//! Z linear speed
- (float)vz;

//! Roll angular speed
- (float)rollspeed;

//! Pitch angular speed
- (float)pitchspeed;

//! Yaw angular speed
- (float)yawspeed;

//! Row-major representation of a 6x6 pose cross-covariance matrix upper right triangle (states: x, y, z, roll, pitch, yaw; first six entries are the first ROW, next five entries are the second ROW, etc.). If unknown, assign NaN value to first element in the array.
- (uint16_t)poseCovariance:(float *)pose_covariance;

//! Row-major representation of a 6x6 velocity cross-covariance matrix upper right triangle (states: vx, vy, vz, rollspeed, pitchspeed, yawspeed; first six entries are the first ROW, next five entries are the second ROW, etc.). If unknown, assign NaN value to first element in the array.
- (uint16_t)velocityCovariance:(float *)velocity_covariance;

//! Estimate reset counter. This should be incremented when the estimate resets in any of the dimensions (position, velocity, attitude, angular speed). This is designed to be used when e.g an external SLAM system detects a loop-closure and the estimate jumps.
- (uint8_t)resetCounter;

//! Type of estimator that is providing the odometry.
- (MAV_ESTIMATOR_TYPE)estimatorType;

@end
