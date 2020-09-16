//
//  MVMessageGimbalDeviceSetAttitude.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a GIMBAL_DEVICE_SET_ATTITUDE Mavlink message.

 @discussion Low level message to control a gimbal device's attitude. This message is to be sent from the gimbal manager to the gimbal device component. Angles and rates can be set to NaN according to use case.
 */
@interface MVMessageGimbalDeviceSetAttitude : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent flags:(GIMBAL_DEVICE_FLAGS)flags q:(float *)q angularVelocityX:(float)angularVelocityX angularVelocityY:(float)angularVelocityY angularVelocityZ:(float)angularVelocityZ;

//! System ID
- (uint8_t)targetSystem;

//! Component ID
- (uint8_t)targetComponent;

//! Low level gimbal flags.
- (GIMBAL_DEVICE_FLAGS)flags;

//! Quaternion components, w, x, y, z (1 0 0 0 is the null-rotation, the frame is depends on whether the flag GIMBAL_DEVICE_FLAGS_YAW_LOCK is set, set all fields to NaN if only angular velocity should be used)
- (uint16_t)q:(float *)q;

//! X component of angular velocity, positive is banking to the right, NaN to be ignored.
- (float)angularVelocityX;

//! Y component of angular velocity, positive is tilting up, NaN to be ignored.
- (float)angularVelocityY;

//! Z component of angular velocity, positive is panning to the right, NaN to be ignored.
- (float)angularVelocityZ;

@end
