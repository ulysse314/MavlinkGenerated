//
//  MVMessageCameraImageCaptured.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageCameraImageCaptured.h"

@implementation MVMessageCameraImageCaptured

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs timeUtc:(uint64_t)timeUtc cameraId:(uint8_t)cameraId lat:(int32_t)lat lon:(int32_t)lon alt:(int32_t)alt relativeAlt:(int32_t)relativeAlt q:(float *)q imageIndex:(int32_t)imageIndex captureResult:(int8_t)captureResult fileUrl:(char *)fileUrl {
  if ((self = [super init])) {
    mavlink_msg_camera_image_captured_pack(systemId, componentId, &(self->_message), timeBootMs, timeUtc, cameraId, lat, lon, alt, relativeAlt, q, imageIndex, captureResult, fileUrl);
  }
  return self;
}

- (uint32_t)timeBootMs {
  return mavlink_msg_camera_image_captured_get_time_boot_ms(&(self->_message));
}

- (uint64_t)timeUtc {
  return mavlink_msg_camera_image_captured_get_time_utc(&(self->_message));
}

- (uint8_t)cameraId {
  return mavlink_msg_camera_image_captured_get_camera_id(&(self->_message));
}

- (int32_t)lat {
  return mavlink_msg_camera_image_captured_get_lat(&(self->_message));
}

- (int32_t)lon {
  return mavlink_msg_camera_image_captured_get_lon(&(self->_message));
}

- (int32_t)alt {
  return mavlink_msg_camera_image_captured_get_alt(&(self->_message));
}

- (int32_t)relativeAlt {
  return mavlink_msg_camera_image_captured_get_relative_alt(&(self->_message));
}

- (uint16_t)q:(float *)q {
  return mavlink_msg_camera_image_captured_get_q(&(self->_message), q);
}

- (int32_t)imageIndex {
  return mavlink_msg_camera_image_captured_get_image_index(&(self->_message));
}

- (int8_t)captureResult {
  return mavlink_msg_camera_image_captured_get_capture_result(&(self->_message));
}

- (NSString *)fileUrl {
  char string[205];
  mavlink_msg_camera_image_captured_get_file_url(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:205 encoding:NSASCIIStringEncoding];
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeBootMs=%d, timeUtc=%lld, cameraId=%d, lat=%d, lon=%d, alt=%d, relativeAlt=%d, q=%@, imageIndex=%d, captureResult=%d, fileUrl=%@", [super description], [self timeBootMs], [self timeUtc], [self cameraId], [self lat], [self lon], [self alt], [self relativeAlt], @"[array of float[4]]", [self imageIndex], [self captureResult], [self fileUrl]];
}

@end
