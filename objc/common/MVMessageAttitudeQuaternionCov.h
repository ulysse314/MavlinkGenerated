//
//  MVMessageAttitudeQuaternionCov.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a ATTITUDE_QUATERNION_COV Mavlink message.

 @discussion The attitude in the aeronautical frame (right-handed, Z-down, X-front, Y-right), expressed as quaternion. Quaternion order is w, x, y, z and a zero rotation would be expressed as (1 0 0 0).
 */
@interface MVMessageAttitudeQuaternionCov : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec q:(float *)q rollspeed:(float)rollspeed pitchspeed:(float)pitchspeed yawspeed:(float)yawspeed covariance:(float *)covariance;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Quaternion components, w, x, y, z (1 0 0 0 is the null-rotation)
- (uint16_t)q:(float *)q;

//! Roll angular speed
- (float)rollspeed;

//! Pitch angular speed
- (float)pitchspeed;

//! Yaw angular speed
- (float)yawspeed;

//! Row-major representation of a 3x3 attitude covariance matrix (states: roll, pitch, yaw; first three entries are the first ROW, next three entries are the second row, etc.). If unknown, assign NaN value to first element in the array.
- (uint16_t)covariance:(float *)covariance;

@end
