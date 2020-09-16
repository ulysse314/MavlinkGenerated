//
//  MVMessageGimbalDeviceAttitudeStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a GIMBAL_DEVICE_ATTITUDE_STATUS Mavlink message.

 @discussion Message reporting the status of a gimbal device. This message should be broadcasted by a gimbal device component. The angles encoded in the quaternion are in the global frame (roll: positive is tilt to the right, pitch: positive is tilting up, yaw is turn to the right). This message should be broadcast at a low regular rate (e.g. 10Hz).
 */
@interface MVMessageGimbalDeviceAttitudeStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent timeBootMs:(uint32_t)timeBootMs flags:(GIMBAL_DEVICE_FLAGS)flags q:(float *)q angularVelocityX:(float)angularVelocityX angularVelocityY:(float)angularVelocityY angularVelocityZ:(float)angularVelocityZ failureFlags:(GIMBAL_DEVICE_ERROR_FLAGS)failureFlags;

//! System ID
- (uint8_t)targetSystem;

//! Component ID
- (uint8_t)targetComponent;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Current gimbal flags set.
- (GIMBAL_DEVICE_FLAGS)flags;

//! Quaternion components, w, x, y, z (1 0 0 0 is the null-rotation, the frame is depends on whether the flag GIMBAL_DEVICE_FLAGS_YAW_LOCK is set)
- (uint16_t)q:(float *)q;

//! X component of angular velocity (NaN if unknown)
- (float)angularVelocityX;

//! Y component of angular velocity (NaN if unknown)
- (float)angularVelocityY;

//! Z component of angular velocity (NaN if unknown)
- (float)angularVelocityZ;

//! Failure flags (0 for no failure)
- (GIMBAL_DEVICE_ERROR_FLAGS)failureFlags;

@end
