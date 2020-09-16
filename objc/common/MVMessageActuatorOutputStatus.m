//
//  MVMessageActuatorOutputStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageActuatorOutputStatus.h"

@implementation MVMessageActuatorOutputStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec active:(uint32_t)active actuator:(float *)actuator {
  if ((self = [super init])) {
    mavlink_msg_actuator_output_status_pack(systemId, componentId, &(self->_message), timeUsec, active, actuator);
  }
  return self;
}

- (uint64_t)timeUsec {
  return mavlink_msg_actuator_output_status_get_time_usec(&(self->_message));
}

- (uint32_t)active {
  return mavlink_msg_actuator_output_status_get_active(&(self->_message));
}

- (uint16_t)actuator:(float *)actuator {
  return mavlink_msg_actuator_output_status_get_actuator(&(self->_message), actuator);
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeUsec=%lld, active=%d, actuator=%@", [super description], [self timeUsec], [self active], @"[array of float[32]]"];
}

@end
