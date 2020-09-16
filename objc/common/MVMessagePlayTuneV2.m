//
//  MVMessagePlayTuneV2.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessagePlayTuneV2.h"

@implementation MVMessagePlayTuneV2

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent format:(TUNE_FORMAT)format tune:(char *)tune {
  if ((self = [super init])) {
    mavlink_msg_play_tune_v2_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, format, tune);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_play_tune_v2_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_play_tune_v2_get_target_component(&(self->_message));
}

- (TUNE_FORMAT)format {
  return mavlink_msg_play_tune_v2_get_format(&(self->_message));
}

- (NSString *)tune {
  char string[248];
  mavlink_msg_play_tune_v2_get_tune(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:248 encoding:NSASCIIStringEncoding];
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, format=%d, tune=%@", [super description], [self targetSystem], [self targetComponent], [self format], [self tune]];
}

@end
