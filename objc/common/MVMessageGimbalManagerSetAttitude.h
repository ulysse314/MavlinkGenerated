//
//  MVMessageGimbalManagerSetAttitude.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a GIMBAL_MANAGER_SET_ATTITUDE Mavlink message.

 @discussion High level message to control a gimbal's attitude. This message is to be sent to the gimbal manager (e.g. from a ground station). Angles and rates can be set to NaN according to use case.
 */
@interface MVMessageGimbalManagerSetAttitude : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent flags:(GIMBAL_MANAGER_FLAGS)flags gimbalDeviceId:(uint8_t)gimbalDeviceId q:(float *)q angularVelocityX:(float)angularVelocityX angularVelocityY:(float)angularVelocityY angularVelocityZ:(float)angularVelocityZ;

//! System ID
- (uint8_t)targetSystem;

//! Component ID
- (uint8_t)targetComponent;

//! High level gimbal manager flags to use.
- (GIMBAL_MANAGER_FLAGS)flags;

//! Component ID of gimbal device to address (or 1-6 for non-MAVLink gimbal), 0 for all gimbal device components. (Send command multiple times for more than one but not all gimbals.)
- (uint8_t)gimbalDeviceId;

//! Quaternion components, w, x, y, z (1 0 0 0 is the null-rotation, the frame is depends on whether the flag GIMBAL_MANAGER_FLAGS_YAW_LOCK is set)
- (uint16_t)q:(float *)q;

//! X component of angular velocity, positive is banking to the right, NaN to be ignored.
- (float)angularVelocityX;

//! Y component of angular velocity, positive is tilting up, NaN to be ignored.
- (float)angularVelocityY;

//! Z component of angular velocity, positive is panning to the right, NaN to be ignored.
- (float)angularVelocityZ;

@end
