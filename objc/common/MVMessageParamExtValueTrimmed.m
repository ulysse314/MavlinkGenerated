//
//  MVMessageParamExtValueTrimmed.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageParamExtValueTrimmed.h"

@implementation MVMessageParamExtValueTrimmed

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId paramCount:(uint16_t)paramCount paramIndex:(uint16_t)paramIndex paramType:(MAV_PARAM_EXT_TYPE)paramType paramId:(char *)paramId paramValue:(char *)paramValue {
  if ((self = [super init])) {
    mavlink_msg_param_ext_value_trimmed_pack(systemId, componentId, &(self->_message), paramCount, paramIndex, paramType, paramId, paramValue);
  }
  return self;
}

- (uint16_t)paramCount {
  return mavlink_msg_param_ext_value_trimmed_get_param_count(&(self->_message));
}

- (uint16_t)paramIndex {
  return mavlink_msg_param_ext_value_trimmed_get_param_index(&(self->_message));
}

- (MAV_PARAM_EXT_TYPE)paramType {
  return mavlink_msg_param_ext_value_trimmed_get_param_type(&(self->_message));
}

- (NSString *)paramId {
  char string[16];
  mavlink_msg_param_ext_value_trimmed_get_param_id(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:16 encoding:NSASCIIStringEncoding];
}

- (NSString *)paramValue {
  char string[128];
  mavlink_msg_param_ext_value_trimmed_get_param_value(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:128 encoding:NSASCIIStringEncoding];
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, paramCount=%d, paramIndex=%d, paramType=%d, paramId=%@, paramValue=%@", [super description], [self paramCount], [self paramIndex], [self paramType], [self paramId], [self paramValue]];
}

@end
