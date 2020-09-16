//
//  MVMessageVideoStreamInformation.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageVideoStreamInformation.h"

@implementation MVMessageVideoStreamInformation

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId streamId:(uint8_t)streamId count:(uint8_t)count type:(VIDEO_STREAM_TYPE)type flags:(VIDEO_STREAM_STATUS_FLAGS)flags framerate:(float)framerate resolutionH:(uint16_t)resolutionH resolutionV:(uint16_t)resolutionV bitrate:(uint32_t)bitrate rotation:(uint16_t)rotation hfov:(uint16_t)hfov name:(char *)name uri:(char *)uri {
  if ((self = [super init])) {
    mavlink_msg_video_stream_information_pack(systemId, componentId, &(self->_message), streamId, count, type, flags, framerate, resolutionH, resolutionV, bitrate, rotation, hfov, name, uri);
  }
  return self;
}

- (uint8_t)streamId {
  return mavlink_msg_video_stream_information_get_stream_id(&(self->_message));
}

- (uint8_t)count {
  return mavlink_msg_video_stream_information_get_count(&(self->_message));
}

- (VIDEO_STREAM_TYPE)type {
  return mavlink_msg_video_stream_information_get_type(&(self->_message));
}

- (VIDEO_STREAM_STATUS_FLAGS)flags {
  return mavlink_msg_video_stream_information_get_flags(&(self->_message));
}

- (float)framerate {
  return mavlink_msg_video_stream_information_get_framerate(&(self->_message));
}

- (uint16_t)resolutionH {
  return mavlink_msg_video_stream_information_get_resolution_h(&(self->_message));
}

- (uint16_t)resolutionV {
  return mavlink_msg_video_stream_information_get_resolution_v(&(self->_message));
}

- (uint32_t)bitrate {
  return mavlink_msg_video_stream_information_get_bitrate(&(self->_message));
}

- (uint16_t)rotation {
  return mavlink_msg_video_stream_information_get_rotation(&(self->_message));
}

- (uint16_t)hfov {
  return mavlink_msg_video_stream_information_get_hfov(&(self->_message));
}

- (NSString *)name {
  char string[32];
  mavlink_msg_video_stream_information_get_name(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:32 encoding:NSASCIIStringEncoding];
}

- (NSString *)uri {
  char string[160];
  mavlink_msg_video_stream_information_get_uri(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:160 encoding:NSASCIIStringEncoding];
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, streamId=%d, count=%d, type=%d, flags=%d, framerate=%f, resolutionH=%d, resolutionV=%d, bitrate=%d, rotation=%d, hfov=%d, name=%@, uri=%@", [super description], [self streamId], [self count], [self type], [self flags], [self framerate], [self resolutionH], [self resolutionV], [self bitrate], [self rotation], [self hfov], [self name], [self uri]];
}

@end
