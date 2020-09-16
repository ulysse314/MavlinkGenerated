//
//  MVMessageCameraSettings.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageCameraSettings.h"

@implementation MVMessageCameraSettings

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs modeId:(CAMERA_MODE)modeId zoomLevel:(float)zoomLevel focusLevel:(float)focusLevel {
  if ((self = [super init])) {
    mavlink_msg_camera_settings_pack(systemId, componentId, &(self->_message), timeBootMs, modeId, zoomLevel, focusLevel);
  }
  return self;
}

- (uint32_t)timeBootMs {
  return mavlink_msg_camera_settings_get_time_boot_ms(&(self->_message));
}

- (CAMERA_MODE)modeId {
  return mavlink_msg_camera_settings_get_mode_id(&(self->_message));
}

- (float)zoomLevel {
  return mavlink_msg_camera_settings_get_zoomLevel(&(self->_message));
}

- (float)focusLevel {
  return mavlink_msg_camera_settings_get_focusLevel(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeBootMs=%d, modeId=%d, zoomLevel=%f, focusLevel=%f", [super description], [self timeBootMs], [self modeId], [self zoomLevel], [self focusLevel]];
}

@end
