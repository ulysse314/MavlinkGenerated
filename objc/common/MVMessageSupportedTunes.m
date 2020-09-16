//
//  MVMessageSupportedTunes.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageSupportedTunes.h"

@implementation MVMessageSupportedTunes

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent format:(TUNE_FORMAT)format {
  if ((self = [super init])) {
    mavlink_msg_supported_tunes_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, format);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_supported_tunes_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_supported_tunes_get_target_component(&(self->_message));
}

- (TUNE_FORMAT)format {
  return mavlink_msg_supported_tunes_get_format(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, format=%d", [super description], [self targetSystem], [self targetComponent], [self format]];
}

@end
