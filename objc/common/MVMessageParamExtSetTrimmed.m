//
//  MVMessageParamExtSetTrimmed.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageParamExtSetTrimmed.h"

@implementation MVMessageParamExtSetTrimmed

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent paramType:(MAV_PARAM_EXT_TYPE)paramType paramId:(char *)paramId paramValue:(char *)paramValue {
  if ((self = [super init])) {
    mavlink_msg_param_ext_set_trimmed_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, paramType, paramId, paramValue);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_param_ext_set_trimmed_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_param_ext_set_trimmed_get_target_component(&(self->_message));
}

- (MAV_PARAM_EXT_TYPE)paramType {
  return mavlink_msg_param_ext_set_trimmed_get_param_type(&(self->_message));
}

- (NSString *)paramId {
  char string[16];
  mavlink_msg_param_ext_set_trimmed_get_param_id(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:16 encoding:NSASCIIStringEncoding];
}

- (NSString *)paramValue {
  char string[128];
  mavlink_msg_param_ext_set_trimmed_get_param_value(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:128 encoding:NSASCIIStringEncoding];
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, paramType=%d, paramId=%@, paramValue=%@", [super description], [self targetSystem], [self targetComponent], [self paramType], [self paramId], [self paramValue]];
}

@end
