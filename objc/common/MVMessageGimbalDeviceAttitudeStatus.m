//
//  MVMessageGimbalDeviceAttitudeStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageGimbalDeviceAttitudeStatus.h"

@implementation MVMessageGimbalDeviceAttitudeStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent timeBootMs:(uint32_t)timeBootMs flags:(GIMBAL_DEVICE_FLAGS)flags q:(float *)q angularVelocityX:(float)angularVelocityX angularVelocityY:(float)angularVelocityY angularVelocityZ:(float)angularVelocityZ failureFlags:(GIMBAL_DEVICE_ERROR_FLAGS)failureFlags {
  if ((self = [super init])) {
    mavlink_msg_gimbal_device_attitude_status_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, timeBootMs, flags, q, angularVelocityX, angularVelocityY, angularVelocityZ, failureFlags);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_gimbal_device_attitude_status_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_gimbal_device_attitude_status_get_target_component(&(self->_message));
}

- (uint32_t)timeBootMs {
  return mavlink_msg_gimbal_device_attitude_status_get_time_boot_ms(&(self->_message));
}

- (GIMBAL_DEVICE_FLAGS)flags {
  return mavlink_msg_gimbal_device_attitude_status_get_flags(&(self->_message));
}

- (uint16_t)q:(float *)q {
  return mavlink_msg_gimbal_device_attitude_status_get_q(&(self->_message), q);
}

- (float)angularVelocityX {
  return mavlink_msg_gimbal_device_attitude_status_get_angular_velocity_x(&(self->_message));
}

- (float)angularVelocityY {
  return mavlink_msg_gimbal_device_attitude_status_get_angular_velocity_y(&(self->_message));
}

- (float)angularVelocityZ {
  return mavlink_msg_gimbal_device_attitude_status_get_angular_velocity_z(&(self->_message));
}

- (GIMBAL_DEVICE_ERROR_FLAGS)failureFlags {
  return mavlink_msg_gimbal_device_attitude_status_get_failure_flags(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, timeBootMs=%d, flags=%d, q=%@, angularVelocityX=%f, angularVelocityY=%f, angularVelocityZ=%f, failureFlags=%d", [super description], [self targetSystem], [self targetComponent], [self timeBootMs], [self flags], @"[array of float[4]]", [self angularVelocityX], [self angularVelocityY], [self angularVelocityZ], [self failureFlags]];
}

@end
