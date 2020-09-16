//
//  MVMessageEscInfo.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageEscInfo.h"

@implementation MVMessageEscInfo

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId index:(uint8_t)index timeUsec:(uint64_t)timeUsec counter:(uint16_t)counter count:(uint8_t)count connectionType:(ESC_CONNECTION_TYPE)connectionType info:(uint8_t)info failureFlags:(ESC_FAILURE_FLAGS *)failureFlags errorCount:(uint32_t *)errorCount temperature:(uint8_t *)temperature {
  if ((self = [super init])) {
    mavlink_msg_esc_info_pack(systemId, componentId, &(self->_message), index, timeUsec, counter, count, connectionType, info, failureFlags, errorCount, temperature);
  }
  return self;
}

- (uint8_t)index {
  return mavlink_msg_esc_info_get_index(&(self->_message));
}

- (uint64_t)timeUsec {
  return mavlink_msg_esc_info_get_time_usec(&(self->_message));
}

- (uint16_t)counter {
  return mavlink_msg_esc_info_get_counter(&(self->_message));
}

- (uint8_t)count {
  return mavlink_msg_esc_info_get_count(&(self->_message));
}

- (ESC_CONNECTION_TYPE)connectionType {
  return mavlink_msg_esc_info_get_connection_type(&(self->_message));
}

- (uint8_t)info {
  return mavlink_msg_esc_info_get_info(&(self->_message));
}

- (uint16_t)failureFlags:(uint16_t *)failure_flags {
  return mavlink_msg_esc_info_get_failure_flags(&(self->_message), failure_flags);
}

- (uint16_t)errorCount:(uint32_t *)error_count {
  return mavlink_msg_esc_info_get_error_count(&(self->_message), error_count);
}

- (uint16_t)temperature:(uint8_t *)temperature {
  return mavlink_msg_esc_info_get_temperature(&(self->_message), temperature);
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, index=%d, timeUsec=%lld, counter=%d, count=%d, connectionType=%d, info=%d, failureFlags=%@, errorCount=%@, temperature=%@", [super description], [self index], [self timeUsec], [self counter], [self count], [self connectionType], [self info], @"[array of uint16_t[4]]", @"[array of uint32_t[4]]", @"[array of uint8_t[4]]"];
}

@end
