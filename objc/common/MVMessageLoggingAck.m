//
//  MVMessageLoggingAck.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageLoggingAck.h"

@implementation MVMessageLoggingAck

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent sequence:(uint16_t)sequence {
  if ((self = [super init])) {
    mavlink_msg_logging_ack_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, sequence);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_logging_ack_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_logging_ack_get_target_component(&(self->_message));
}

- (uint16_t)sequence {
  return mavlink_msg_logging_ack_get_sequence(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, sequence=%d", [super description], [self targetSystem], [self targetComponent], [self sequence]];
}

@end
