//
//  MVMessageGimbalDeviceInformation.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageGimbalDeviceInformation.h"

@implementation MVMessageGimbalDeviceInformation

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs vendorName:(uint8_t *)vendorName modelName:(uint8_t *)modelName firmwareVersion:(uint32_t)firmwareVersion capFlags:(GIMBAL_DEVICE_CAP_FLAGS)capFlags tiltMax:(float)tiltMax tiltMin:(float)tiltMin tiltRateMax:(float)tiltRateMax panMax:(float)panMax panMin:(float)panMin panRateMax:(float)panRateMax {
  if ((self = [super init])) {
    mavlink_msg_gimbal_device_information_pack(systemId, componentId, &(self->_message), timeBootMs, vendorName, modelName, firmwareVersion, capFlags, tiltMax, tiltMin, tiltRateMax, panMax, panMin, panRateMax);
  }
  return self;
}

- (uint32_t)timeBootMs {
  return mavlink_msg_gimbal_device_information_get_time_boot_ms(&(self->_message));
}

- (uint16_t)vendorName:(uint8_t *)vendor_name {
  return mavlink_msg_gimbal_device_information_get_vendor_name(&(self->_message), vendor_name);
}

- (uint16_t)modelName:(uint8_t *)model_name {
  return mavlink_msg_gimbal_device_information_get_model_name(&(self->_message), model_name);
}

- (uint32_t)firmwareVersion {
  return mavlink_msg_gimbal_device_information_get_firmware_version(&(self->_message));
}

- (GIMBAL_DEVICE_CAP_FLAGS)capFlags {
  return mavlink_msg_gimbal_device_information_get_cap_flags(&(self->_message));
}

- (float)tiltMax {
  return mavlink_msg_gimbal_device_information_get_tilt_max(&(self->_message));
}

- (float)tiltMin {
  return mavlink_msg_gimbal_device_information_get_tilt_min(&(self->_message));
}

- (float)tiltRateMax {
  return mavlink_msg_gimbal_device_information_get_tilt_rate_max(&(self->_message));
}

- (float)panMax {
  return mavlink_msg_gimbal_device_information_get_pan_max(&(self->_message));
}

- (float)panMin {
  return mavlink_msg_gimbal_device_information_get_pan_min(&(self->_message));
}

- (float)panRateMax {
  return mavlink_msg_gimbal_device_information_get_pan_rate_max(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeBootMs=%d, vendorName=%@, modelName=%@, firmwareVersion=%d, capFlags=%d, tiltMax=%f, tiltMin=%f, tiltRateMax=%f, panMax=%f, panMin=%f, panRateMax=%f", [super description], [self timeBootMs], @"[array of uint8_t[32]]", @"[array of uint8_t[32]]", [self firmwareVersion], [self capFlags], [self tiltMax], [self tiltMin], [self tiltRateMax], [self panMax], [self panMin], [self panRateMax]];
}

@end
