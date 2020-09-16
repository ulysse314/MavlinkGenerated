//
//  MVMessageCameraInformation.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageCameraInformation.h"

@implementation MVMessageCameraInformation

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs vendorName:(uint8_t *)vendorName modelName:(uint8_t *)modelName firmwareVersion:(uint32_t)firmwareVersion focalLength:(float)focalLength sensorSizeH:(float)sensorSizeH sensorSizeV:(float)sensorSizeV resolutionH:(uint16_t)resolutionH resolutionV:(uint16_t)resolutionV lensId:(uint8_t)lensId flags:(CAMERA_CAP_FLAGS)flags camDefinitionVersion:(uint16_t)camDefinitionVersion camDefinitionUri:(char *)camDefinitionUri {
  if ((self = [super init])) {
    mavlink_msg_camera_information_pack(systemId, componentId, &(self->_message), timeBootMs, vendorName, modelName, firmwareVersion, focalLength, sensorSizeH, sensorSizeV, resolutionH, resolutionV, lensId, flags, camDefinitionVersion, camDefinitionUri);
  }
  return self;
}

- (uint32_t)timeBootMs {
  return mavlink_msg_camera_information_get_time_boot_ms(&(self->_message));
}

- (uint16_t)vendorName:(uint8_t *)vendor_name {
  return mavlink_msg_camera_information_get_vendor_name(&(self->_message), vendor_name);
}

- (uint16_t)modelName:(uint8_t *)model_name {
  return mavlink_msg_camera_information_get_model_name(&(self->_message), model_name);
}

- (uint32_t)firmwareVersion {
  return mavlink_msg_camera_information_get_firmware_version(&(self->_message));
}

- (float)focalLength {
  return mavlink_msg_camera_information_get_focal_length(&(self->_message));
}

- (float)sensorSizeH {
  return mavlink_msg_camera_information_get_sensor_size_h(&(self->_message));
}

- (float)sensorSizeV {
  return mavlink_msg_camera_information_get_sensor_size_v(&(self->_message));
}

- (uint16_t)resolutionH {
  return mavlink_msg_camera_information_get_resolution_h(&(self->_message));
}

- (uint16_t)resolutionV {
  return mavlink_msg_camera_information_get_resolution_v(&(self->_message));
}

- (uint8_t)lensId {
  return mavlink_msg_camera_information_get_lens_id(&(self->_message));
}

- (CAMERA_CAP_FLAGS)flags {
  return mavlink_msg_camera_information_get_flags(&(self->_message));
}

- (uint16_t)camDefinitionVersion {
  return mavlink_msg_camera_information_get_cam_definition_version(&(self->_message));
}

- (NSString *)camDefinitionUri {
  char string[140];
  mavlink_msg_camera_information_get_cam_definition_uri(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:140 encoding:NSASCIIStringEncoding];
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeBootMs=%d, vendorName=%@, modelName=%@, firmwareVersion=%d, focalLength=%f, sensorSizeH=%f, sensorSizeV=%f, resolutionH=%d, resolutionV=%d, lensId=%d, flags=%d, camDefinitionVersion=%d, camDefinitionUri=%@", [super description], [self timeBootMs], @"[array of uint8_t[32]]", @"[array of uint8_t[32]]", [self firmwareVersion], [self focalLength], [self sensorSizeH], [self sensorSizeV], [self resolutionH], [self resolutionV], [self lensId], [self flags], [self camDefinitionVersion], [self camDefinitionUri]];
}

@end
