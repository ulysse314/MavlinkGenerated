//
//  MVMessageGimbalManagerStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageGimbalManagerStatus.h"

@implementation MVMessageGimbalManagerStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs flags:(GIMBAL_MANAGER_FLAGS)flags gimbalDeviceId:(uint8_t)gimbalDeviceId {
  if ((self = [super init])) {
    mavlink_msg_gimbal_manager_status_pack(systemId, componentId, &(self->_message), timeBootMs, flags, gimbalDeviceId);
  }
  return self;
}

- (uint32_t)timeBootMs {
  return mavlink_msg_gimbal_manager_status_get_time_boot_ms(&(self->_message));
}

- (GIMBAL_MANAGER_FLAGS)flags {
  return mavlink_msg_gimbal_manager_status_get_flags(&(self->_message));
}

- (uint8_t)gimbalDeviceId {
  return mavlink_msg_gimbal_manager_status_get_gimbal_device_id(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeBootMs=%d, flags=%d, gimbalDeviceId=%d", [super description], [self timeBootMs], [self flags], [self gimbalDeviceId]];
}

@end
