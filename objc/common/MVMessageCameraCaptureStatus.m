//
//  MVMessageCameraCaptureStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageCameraCaptureStatus.h"

@implementation MVMessageCameraCaptureStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs imageStatus:(uint8_t)imageStatus videoStatus:(uint8_t)videoStatus imageInterval:(float)imageInterval recordingTimeMs:(uint32_t)recordingTimeMs availableCapacity:(float)availableCapacity imageCount:(int32_t)imageCount {
  if ((self = [super init])) {
    mavlink_msg_camera_capture_status_pack(systemId, componentId, &(self->_message), timeBootMs, imageStatus, videoStatus, imageInterval, recordingTimeMs, availableCapacity, imageCount);
  }
  return self;
}

- (uint32_t)timeBootMs {
  return mavlink_msg_camera_capture_status_get_time_boot_ms(&(self->_message));
}

- (uint8_t)imageStatus {
  return mavlink_msg_camera_capture_status_get_image_status(&(self->_message));
}

- (uint8_t)videoStatus {
  return mavlink_msg_camera_capture_status_get_video_status(&(self->_message));
}

- (float)imageInterval {
  return mavlink_msg_camera_capture_status_get_image_interval(&(self->_message));
}

- (uint32_t)recordingTimeMs {
  return mavlink_msg_camera_capture_status_get_recording_time_ms(&(self->_message));
}

- (float)availableCapacity {
  return mavlink_msg_camera_capture_status_get_available_capacity(&(self->_message));
}

- (int32_t)imageCount {
  return mavlink_msg_camera_capture_status_get_image_count(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeBootMs=%d, imageStatus=%d, videoStatus=%d, imageInterval=%f, recordingTimeMs=%d, availableCapacity=%f, imageCount=%d", [super description], [self timeBootMs], [self imageStatus], [self videoStatus], [self imageInterval], [self recordingTimeMs], [self availableCapacity], [self imageCount]];
}

@end
