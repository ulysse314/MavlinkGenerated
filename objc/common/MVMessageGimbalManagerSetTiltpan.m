//
//  MVMessageGimbalManagerSetTiltpan.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageGimbalManagerSetTiltpan.h"

@implementation MVMessageGimbalManagerSetTiltpan

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent flags:(GIMBAL_MANAGER_FLAGS)flags gimbalDeviceId:(uint8_t)gimbalDeviceId tilt:(float)tilt pan:(float)pan tiltRate:(float)tiltRate panRate:(float)panRate {
  if ((self = [super init])) {
    mavlink_msg_gimbal_manager_set_tiltpan_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, flags, gimbalDeviceId, tilt, pan, tiltRate, panRate);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_gimbal_manager_set_tiltpan_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_gimbal_manager_set_tiltpan_get_target_component(&(self->_message));
}

- (GIMBAL_MANAGER_FLAGS)flags {
  return mavlink_msg_gimbal_manager_set_tiltpan_get_flags(&(self->_message));
}

- (uint8_t)gimbalDeviceId {
  return mavlink_msg_gimbal_manager_set_tiltpan_get_gimbal_device_id(&(self->_message));
}

- (float)tilt {
  return mavlink_msg_gimbal_manager_set_tiltpan_get_tilt(&(self->_message));
}

- (float)pan {
  return mavlink_msg_gimbal_manager_set_tiltpan_get_pan(&(self->_message));
}

- (float)tiltRate {
  return mavlink_msg_gimbal_manager_set_tiltpan_get_tilt_rate(&(self->_message));
}

- (float)panRate {
  return mavlink_msg_gimbal_manager_set_tiltpan_get_pan_rate(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, flags=%d, gimbalDeviceId=%d, tilt=%f, pan=%f, tiltRate=%f, panRate=%f", [super description], [self targetSystem], [self targetComponent], [self flags], [self gimbalDeviceId], [self tilt], [self pan], [self tiltRate], [self panRate]];
}

@end
