//
//  MVMessageVideoStreamStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageVideoStreamStatus.h"

@implementation MVMessageVideoStreamStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId streamId:(uint8_t)streamId flags:(VIDEO_STREAM_STATUS_FLAGS)flags framerate:(float)framerate resolutionH:(uint16_t)resolutionH resolutionV:(uint16_t)resolutionV bitrate:(uint32_t)bitrate rotation:(uint16_t)rotation hfov:(uint16_t)hfov {
  if ((self = [super init])) {
    mavlink_msg_video_stream_status_pack(systemId, componentId, &(self->_message), streamId, flags, framerate, resolutionH, resolutionV, bitrate, rotation, hfov);
  }
  return self;
}

- (uint8_t)streamId {
  return mavlink_msg_video_stream_status_get_stream_id(&(self->_message));
}

- (VIDEO_STREAM_STATUS_FLAGS)flags {
  return mavlink_msg_video_stream_status_get_flags(&(self->_message));
}

- (float)framerate {
  return mavlink_msg_video_stream_status_get_framerate(&(self->_message));
}

- (uint16_t)resolutionH {
  return mavlink_msg_video_stream_status_get_resolution_h(&(self->_message));
}

- (uint16_t)resolutionV {
  return mavlink_msg_video_stream_status_get_resolution_v(&(self->_message));
}

- (uint32_t)bitrate {
  return mavlink_msg_video_stream_status_get_bitrate(&(self->_message));
}

- (uint16_t)rotation {
  return mavlink_msg_video_stream_status_get_rotation(&(self->_message));
}

- (uint16_t)hfov {
  return mavlink_msg_video_stream_status_get_hfov(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, streamId=%d, flags=%d, framerate=%f, resolutionH=%d, resolutionV=%d, bitrate=%d, rotation=%d, hfov=%d", [super description], [self streamId], [self flags], [self framerate], [self resolutionH], [self resolutionV], [self bitrate], [self rotation], [self hfov]];
}

@end
