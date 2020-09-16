//
//  MVMessageLoggingDataAcked.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageLoggingDataAcked.h"

@implementation MVMessageLoggingDataAcked

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent sequence:(uint16_t)sequence length:(uint8_t)length firstMessageOffset:(uint8_t)firstMessageOffset data:(uint8_t *)data {
  if ((self = [super init])) {
    mavlink_msg_logging_data_acked_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, sequence, length, firstMessageOffset, data);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_logging_data_acked_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_logging_data_acked_get_target_component(&(self->_message));
}

- (uint16_t)sequence {
  return mavlink_msg_logging_data_acked_get_sequence(&(self->_message));
}

- (uint8_t)length {
  return mavlink_msg_logging_data_acked_get_length(&(self->_message));
}

- (uint8_t)firstMessageOffset {
  return mavlink_msg_logging_data_acked_get_first_message_offset(&(self->_message));
}

- (uint16_t)data:(uint8_t *)data {
  return mavlink_msg_logging_data_acked_get_data(&(self->_message), data);
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, sequence=%d, length=%d, firstMessageOffset=%d, data=%@", [super description], [self targetSystem], [self targetComponent], [self sequence], [self length], [self firstMessageOffset], @"[array of uint8_t[249]]"];
}

@end
