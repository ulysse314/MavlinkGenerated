//
//  MVMessageEscStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageEscStatus.h"

@implementation MVMessageEscStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId index:(uint8_t)index timeUsec:(uint64_t)timeUsec rpm:(int32_t *)rpm voltage:(float *)voltage current:(float *)current {
  if ((self = [super init])) {
    mavlink_msg_esc_status_pack(systemId, componentId, &(self->_message), index, timeUsec, rpm, voltage, current);
  }
  return self;
}

- (uint8_t)index {
  return mavlink_msg_esc_status_get_index(&(self->_message));
}

- (uint64_t)timeUsec {
  return mavlink_msg_esc_status_get_time_usec(&(self->_message));
}

- (uint16_t)rpm:(int32_t *)rpm {
  return mavlink_msg_esc_status_get_rpm(&(self->_message), rpm);
}

- (uint16_t)voltage:(float *)voltage {
  return mavlink_msg_esc_status_get_voltage(&(self->_message), voltage);
}

- (uint16_t)current:(float *)current {
  return mavlink_msg_esc_status_get_current(&(self->_message), current);
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, index=%d, timeUsec=%lld, rpm=%@, voltage=%@, current=%@", [super description], [self index], [self timeUsec], @"[array of int32_t[4]]", @"[array of float[4]]", @"[array of float[4]]"];
}

@end
