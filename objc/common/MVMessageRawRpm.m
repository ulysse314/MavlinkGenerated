//
//  MVMessageRawRpm.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageRawRpm.h"

@implementation MVMessageRawRpm

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId index:(uint8_t)index frequency:(float)frequency {
  if ((self = [super init])) {
    mavlink_msg_raw_rpm_pack(systemId, componentId, &(self->_message), index, frequency);
  }
  return self;
}

- (uint8_t)index {
  return mavlink_msg_raw_rpm_get_index(&(self->_message));
}

- (float)frequency {
  return mavlink_msg_raw_rpm_get_frequency(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, index=%d, frequency=%f", [super description], [self index], [self frequency]];
}

@end
