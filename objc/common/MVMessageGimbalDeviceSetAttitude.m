//
//  MVMessageGimbalDeviceSetAttitude.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageGimbalDeviceSetAttitude.h"

@implementation MVMessageGimbalDeviceSetAttitude

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent flags:(GIMBAL_DEVICE_FLAGS)flags q:(float *)q angularVelocityX:(float)angularVelocityX angularVelocityY:(float)angularVelocityY angularVelocityZ:(float)angularVelocityZ {
  if ((self = [super init])) {
    mavlink_msg_gimbal_device_set_attitude_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, flags, q, angularVelocityX, angularVelocityY, angularVelocityZ);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_gimbal_device_set_attitude_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_gimbal_device_set_attitude_get_target_component(&(self->_message));
}

- (GIMBAL_DEVICE_FLAGS)flags {
  return mavlink_msg_gimbal_device_set_attitude_get_flags(&(self->_message));
}

- (uint16_t)q:(float *)q {
  return mavlink_msg_gimbal_device_set_attitude_get_q(&(self->_message), q);
}

- (float)angularVelocityX {
  return mavlink_msg_gimbal_device_set_attitude_get_angular_velocity_x(&(self->_message));
}

- (float)angularVelocityY {
  return mavlink_msg_gimbal_device_set_attitude_get_angular_velocity_y(&(self->_message));
}

- (float)angularVelocityZ {
  return mavlink_msg_gimbal_device_set_attitude_get_angular_velocity_z(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, flags=%d, q=%@, angularVelocityX=%f, angularVelocityY=%f, angularVelocityZ=%f", [super description], [self targetSystem], [self targetComponent], [self flags], @"[array of float[4]]", [self angularVelocityX], [self angularVelocityY], [self angularVelocityZ]];
}

@end
