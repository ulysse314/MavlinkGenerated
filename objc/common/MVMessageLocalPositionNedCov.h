//
//  MVMessageLocalPositionNedCov.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a LOCAL_POSITION_NED_COV Mavlink message.

 @discussion The filtered local position (e.g. fused computer vision and accelerometers). Coordinate frame is right-handed, Z-axis down (aeronautical frame, NED / north-east-down convention)
 */
@interface MVMessageLocalPositionNedCov : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec estimatorType:(MAV_ESTIMATOR_TYPE)estimatorType x:(float)x y:(float)y z:(float)z vx:(float)vx vy:(float)vy vz:(float)vz ax:(float)ax ay:(float)ay az:(float)az covariance:(float *)covariance;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Class id of the estimator this estimate originated from.
- (MAV_ESTIMATOR_TYPE)estimatorType;

//! X Position
- (float)x;

//! Y Position
- (float)y;

//! Z Position
- (float)z;

//! X Speed
- (float)vx;

//! Y Speed
- (float)vy;

//! Z Speed
- (float)vz;

//! X Acceleration
- (float)ax;

//! Y Acceleration
- (float)ay;

//! Z Acceleration
- (float)az;

//! Row-major representation of position, velocity and acceleration 9x9 cross-covariance matrix upper right triangle (states: x, y, z, vx, vy, vz, ax, ay, az; first nine entries are the first ROW, next eight entries are the second row, etc.). If unknown, assign NaN value to first element in the array.
- (uint16_t)covariance:(float *)covariance;

@end
