//
//  MVMessageStatustext.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageStatustext.h"

@implementation MVMessageStatustext

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId severity:(MAV_SEVERITY)severity text:(char *)text id:(uint16_t)id chunkSeq:(uint8_t)chunkSeq {
  if ((self = [super init])) {
    mavlink_msg_statustext_pack(systemId, componentId, &(self->_message), severity, text, id, chunkSeq);
  }
  return self;
}

- (MAV_SEVERITY)severity {
  return mavlink_msg_statustext_get_severity(&(self->_message));
}

- (NSString *)text {
  char string[50];
  mavlink_msg_statustext_get_text(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:50 encoding:NSASCIIStringEncoding];
}

- (uint16_t)id {
  return mavlink_msg_statustext_get_id(&(self->_message));
}

- (uint8_t)chunkSeq {
  return mavlink_msg_statustext_get_chunk_seq(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, severity=%d, text=%@, id=%d, chunkSeq=%d", [super description], [self severity], [self text], [self id], [self chunkSeq]];
}

@end
