//
//  MVMessageDebugFloatArray.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageDebugFloatArray.h"

@implementation MVMessageDebugFloatArray

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec name:(char *)name arrayId:(uint16_t)arrayId data:(float *)data {
  if ((self = [super init])) {
    mavlink_msg_debug_float_array_pack(systemId, componentId, &(self->_message), timeUsec, name, arrayId, data);
  }
  return self;
}

- (uint64_t)timeUsec {
  return mavlink_msg_debug_float_array_get_time_usec(&(self->_message));
}

- (NSString *)name {
  char string[10];
  mavlink_msg_debug_float_array_get_name(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:10 encoding:NSASCIIStringEncoding];
}

- (uint16_t)arrayId {
  return mavlink_msg_debug_float_array_get_array_id(&(self->_message));
}

- (uint16_t)data:(float *)data {
  return mavlink_msg_debug_float_array_get_data(&(self->_message), data);
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeUsec=%lld, name=%@, arrayId=%d, data=%@", [super description], [self timeUsec], [self name], [self arrayId], @"[array of float[58]]"];
}

@end
