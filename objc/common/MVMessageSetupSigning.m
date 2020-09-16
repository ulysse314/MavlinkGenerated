//
//  MVMessageSetupSigning.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageSetupSigning.h"

@implementation MVMessageSetupSigning

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent secretKey:(uint8_t *)secretKey initialTimestamp:(uint64_t)initialTimestamp {
  if ((self = [super init])) {
    mavlink_msg_setup_signing_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, secretKey, initialTimestamp);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_setup_signing_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_setup_signing_get_target_component(&(self->_message));
}

- (uint16_t)secretKey:(uint8_t *)secret_key {
  return mavlink_msg_setup_signing_get_secret_key(&(self->_message), secret_key);
}

- (uint64_t)initialTimestamp {
  return mavlink_msg_setup_signing_get_initial_timestamp(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, secretKey=%@, initialTimestamp=%lld", [super description], [self targetSystem], [self targetComponent], @"[array of uint8_t[32]]", [self initialTimestamp]];
}

@end
