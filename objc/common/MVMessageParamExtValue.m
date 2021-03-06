//
//  MVMessageParamExtValue.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageParamExtValue.h"

@implementation MVMessageParamExtValue

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId paramId:(char *)paramId paramValue:(char *)paramValue paramType:(MAV_PARAM_EXT_TYPE)paramType paramCount:(uint16_t)paramCount paramIndex:(uint16_t)paramIndex {
  if ((self = [super init])) {
    mavlink_msg_param_ext_value_pack(systemId, componentId, &(self->_message), paramId, paramValue, paramType, paramCount, paramIndex);
  }
  return self;
}

- (NSString *)paramId {
  char string[16];
  mavlink_msg_param_ext_value_get_param_id(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:16 encoding:NSASCIIStringEncoding];
}

- (NSString *)paramValue {
  char string[128];
  mavlink_msg_param_ext_value_get_param_value(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:128 encoding:NSASCIIStringEncoding];
}

- (MAV_PARAM_EXT_TYPE)paramType {
  return mavlink_msg_param_ext_value_get_param_type(&(self->_message));
}

- (uint16_t)paramCount {
  return mavlink_msg_param_ext_value_get_param_count(&(self->_message));
}

- (uint16_t)paramIndex {
  return mavlink_msg_param_ext_value_get_param_index(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, paramId=%@, paramValue=%@, paramType=%d, paramCount=%d, paramIndex=%d", [super description], [self paramId], [self paramValue], [self paramType], [self paramCount], [self paramIndex]];
}

@end
