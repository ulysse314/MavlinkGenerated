//
//  MVMessageButtonChange.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageButtonChange.h"

@implementation MVMessageButtonChange

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs lastChangeMs:(uint32_t)lastChangeMs state:(uint8_t)state {
  if ((self = [super init])) {
    mavlink_msg_button_change_pack(systemId, componentId, &(self->_message), timeBootMs, lastChangeMs, state);
  }
  return self;
}

- (uint32_t)timeBootMs {
  return mavlink_msg_button_change_get_time_boot_ms(&(self->_message));
}

- (uint32_t)lastChangeMs {
  return mavlink_msg_button_change_get_last_change_ms(&(self->_message));
}

- (uint8_t)state {
  return mavlink_msg_button_change_get_state(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeBootMs=%d, lastChangeMs=%d, state=%d", [super description], [self timeBootMs], [self lastChangeMs], [self state]];
}

@end
