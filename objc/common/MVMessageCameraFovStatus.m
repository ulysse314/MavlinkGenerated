//
//  MVMessageCameraFovStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageCameraFovStatus.h"

@implementation MVMessageCameraFovStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs latCamera:(int32_t)latCamera lonCamera:(int32_t)lonCamera altCamera:(int32_t)altCamera latImage:(int32_t)latImage lonImage:(int32_t)lonImage altImage:(int32_t)altImage q:(float *)q hfov:(float)hfov vfov:(float)vfov {
  if ((self = [super init])) {
    mavlink_msg_camera_fov_status_pack(systemId, componentId, &(self->_message), timeBootMs, latCamera, lonCamera, altCamera, latImage, lonImage, altImage, q, hfov, vfov);
  }
  return self;
}

- (uint32_t)timeBootMs {
  return mavlink_msg_camera_fov_status_get_time_boot_ms(&(self->_message));
}

- (int32_t)latCamera {
  return mavlink_msg_camera_fov_status_get_lat_camera(&(self->_message));
}

- (int32_t)lonCamera {
  return mavlink_msg_camera_fov_status_get_lon_camera(&(self->_message));
}

- (int32_t)altCamera {
  return mavlink_msg_camera_fov_status_get_alt_camera(&(self->_message));
}

- (int32_t)latImage {
  return mavlink_msg_camera_fov_status_get_lat_image(&(self->_message));
}

- (int32_t)lonImage {
  return mavlink_msg_camera_fov_status_get_lon_image(&(self->_message));
}

- (int32_t)altImage {
  return mavlink_msg_camera_fov_status_get_alt_image(&(self->_message));
}

- (uint16_t)q:(float *)q {
  return mavlink_msg_camera_fov_status_get_q(&(self->_message), q);
}

- (float)hfov {
  return mavlink_msg_camera_fov_status_get_hfov(&(self->_message));
}

- (float)vfov {
  return mavlink_msg_camera_fov_status_get_vfov(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeBootMs=%d, latCamera=%d, lonCamera=%d, altCamera=%d, latImage=%d, lonImage=%d, altImage=%d, q=%@, hfov=%f, vfov=%f", [super description], [self timeBootMs], [self latCamera], [self lonCamera], [self altCamera], [self latImage], [self lonImage], [self altImage], @"[array of float[4]]", [self hfov], [self vfov]];
}

@end
