//
//  MVMessageParamExtAck.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageParamExtAck.h"

@implementation MVMessageParamExtAck

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId paramId:(char *)paramId paramValue:(char *)paramValue paramType:(MAV_PARAM_EXT_TYPE)paramType paramResult:(PARAM_ACK)paramResult {
  if ((self = [super init])) {
    mavlink_msg_param_ext_ack_pack(systemId, componentId, &(self->_message), paramId, paramValue, paramType, paramResult);
  }
  return self;
}

- (NSString *)paramId {
  char string[16];
  mavlink_msg_param_ext_ack_get_param_id(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:16 encoding:NSASCIIStringEncoding];
}

- (NSString *)paramValue {
  char string[128];
  mavlink_msg_param_ext_ack_get_param_value(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:128 encoding:NSASCIIStringEncoding];
}

- (MAV_PARAM_EXT_TYPE)paramType {
  return mavlink_msg_param_ext_ack_get_param_type(&(self->_message));
}

- (PARAM_ACK)paramResult {
  return mavlink_msg_param_ext_ack_get_param_result(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, paramId=%@, paramValue=%@, paramType=%d, paramResult=%d", [super description], [self paramId], [self paramValue], [self paramType], [self paramResult]];
}

@end
