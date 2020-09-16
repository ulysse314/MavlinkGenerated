//
//  MVMessageAttitudeQuaternion.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a ATTITUDE_QUATERNION Mavlink message.

 @discussion The attitude in the aeronautical frame (right-handed, Z-down, X-front, Y-right), expressed as quaternion. Quaternion order is w, x, y, z and a zero rotation would be expressed as (1 0 0 0).
 */
@interface MVMessageAttitudeQuaternion : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs q1:(float)q1 q2:(float)q2 q3:(float)q3 q4:(float)q4 rollspeed:(float)rollspeed pitchspeed:(float)pitchspeed yawspeed:(float)yawspeed reprOffsetQ:(float *)reprOffsetQ;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Quaternion component 1, w (1 in null-rotation)
- (float)q1;

//! Quaternion component 2, x (0 in null-rotation)
- (float)q2;

//! Quaternion component 3, y (0 in null-rotation)
- (float)q3;

//! Quaternion component 4, z (0 in null-rotation)
- (float)q4;

//! Roll angular speed
- (float)rollspeed;

//! Pitch angular speed
- (float)pitchspeed;

//! Yaw angular speed
- (float)yawspeed;

//! Rotation offset by which the attitude quaternion and angular speed vector should be rotated for user display (quaternion with [w, x, y, z] order, zero-rotation is [1, 0, 0, 0], send [0, 0, 0, 0] if field not supported). This field is intended for systems in which the reference attitude may change during flight. For example, tailsitters VTOLs rotate their reference attitude by 90 degrees between hover mode and fixed wing mode, thus repr_offset_q is equal to [1, 0, 0, 0] in hover mode and equal to [0.7071, 0, 0.7071, 0] in fixed wing mode.
- (uint16_t)reprOffsetQ:(float *)repr_offset_q;

@end
