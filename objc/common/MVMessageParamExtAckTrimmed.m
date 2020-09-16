//
//  MVMessageParamExtAckTrimmed.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageParamExtAckTrimmed.h"

@implementation MVMessageParamExtAckTrimmed

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId paramResult:(PARAM_ACK)paramResult paramType:(MAV_PARAM_EXT_TYPE)paramType paramId:(char *)paramId paramValue:(char *)paramValue {
  if ((self = [super init])) {
    mavlink_msg_param_ext_ack_trimmed_pack(systemId, componentId, &(self->_message), paramResult, paramType, paramId, paramValue);
  }
  return self;
}

- (PARAM_ACK)paramResult {
  return mavlink_msg_param_ext_ack_trimmed_get_param_result(&(self->_message));
}

- (MAV_PARAM_EXT_TYPE)paramType {
  return mavlink_msg_param_ext_ack_trimmed_get_param_type(&(self->_message));
}

- (NSString *)paramId {
  char string[16];
  mavlink_msg_param_ext_ack_trimmed_get_param_id(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:16 encoding:NSASCIIStringEncoding];
}

- (NSString *)paramValue {
  char string[128];
  mavlink_msg_param_ext_ack_trimmed_get_param_value(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:128 encoding:NSASCIIStringEncoding];
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, paramResult=%d, paramType=%d, paramId=%@, paramValue=%@", [super description], [self paramResult], [self paramType], [self paramId], [self paramValue]];
}

@end
