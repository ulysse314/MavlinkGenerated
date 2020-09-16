//
//  MVMessageGimbalManagerInformation.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageGimbalManagerInformation.h"

@implementation MVMessageGimbalManagerInformation

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs capFlags:(GIMBAL_MANAGER_CAP_FLAGS)capFlags gimbalDeviceId:(uint8_t)gimbalDeviceId tiltMax:(float)tiltMax tiltMin:(float)tiltMin tiltRateMax:(float)tiltRateMax panMax:(float)panMax panMin:(float)panMin panRateMax:(float)panRateMax {
  if ((self = [super init])) {
    mavlink_msg_gimbal_manager_information_pack(systemId, componentId, &(self->_message), timeBootMs, capFlags, gimbalDeviceId, tiltMax, tiltMin, tiltRateMax, panMax, panMin, panRateMax);
  }
  return self;
}

- (uint32_t)timeBootMs {
  return mavlink_msg_gimbal_manager_information_get_time_boot_ms(&(self->_message));
}

- (GIMBAL_MANAGER_CAP_FLAGS)capFlags {
  return mavlink_msg_gimbal_manager_information_get_cap_flags(&(self->_message));
}

- (uint8_t)gimbalDeviceId {
  return mavlink_msg_gimbal_manager_information_get_gimbal_device_id(&(self->_message));
}

- (float)tiltMax {
  return mavlink_msg_gimbal_manager_information_get_tilt_max(&(self->_message));
}

- (float)tiltMin {
  return mavlink_msg_gimbal_manager_information_get_tilt_min(&(self->_message));
}

- (float)tiltRateMax {
  return mavlink_msg_gimbal_manager_information_get_tilt_rate_max(&(self->_message));
}

- (float)panMax {
  return mavlink_msg_gimbal_manager_information_get_pan_max(&(self->_message));
}

- (float)panMin {
  return mavlink_msg_gimbal_manager_information_get_pan_min(&(self->_message));
}

- (float)panRateMax {
  return mavlink_msg_gimbal_manager_information_get_pan_rate_max(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeBootMs=%d, capFlags=%d, gimbalDeviceId=%d, tiltMax=%f, tiltMin=%f, tiltRateMax=%f, panMax=%f, panMin=%f, panRateMax=%f", [super description], [self timeBootMs], [self capFlags], [self gimbalDeviceId], [self tiltMax], [self tiltMin], [self tiltRateMax], [self panMax], [self panMin], [self panRateMax]];
}

@end
