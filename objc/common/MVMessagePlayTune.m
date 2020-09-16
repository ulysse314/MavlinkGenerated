//
//  MVMessagePlayTune.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessagePlayTune.h"

@implementation MVMessagePlayTune

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent tune:(char *)tune tune2:(char *)tune2 {
  if ((self = [super init])) {
    mavlink_msg_play_tune_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, tune, tune2);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_play_tune_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_play_tune_get_target_component(&(self->_message));
}

- (NSString *)tune {
  char string[30];
  mavlink_msg_play_tune_get_tune(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:30 encoding:NSASCIIStringEncoding];
}

- (NSString *)tune2 {
  char string[200];
  mavlink_msg_play_tune_get_tune2(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:200 encoding:NSASCIIStringEncoding];
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, tune=%@, tune2=%@", [super description], [self targetSystem], [self targetComponent], [self tune], [self tune2]];
}

@end
