//
//  MVMessageCellularConfig.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageCellularConfig.h"

@implementation MVMessageCellularConfig

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId enableLte:(uint8_t)enableLte enablePin:(uint8_t)enablePin pin:(char *)pin newPin:(char *)newPin apn:(char *)apn puk:(char *)puk roaming:(uint8_t)roaming response:(CELLULAR_CONFIG_RESPONSE)response {
  if ((self = [super init])) {
    mavlink_msg_cellular_config_pack(systemId, componentId, &(self->_message), enableLte, enablePin, pin, newPin, apn, puk, roaming, response);
  }
  return self;
}

- (uint8_t)enableLte {
  return mavlink_msg_cellular_config_get_enable_lte(&(self->_message));
}

- (uint8_t)enablePin {
  return mavlink_msg_cellular_config_get_enable_pin(&(self->_message));
}

- (NSString *)pin {
  char string[16];
  mavlink_msg_cellular_config_get_pin(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:16 encoding:NSASCIIStringEncoding];
}

- (NSString *)newPin {
  char string[16];
  mavlink_msg_cellular_config_get_new_pin(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:16 encoding:NSASCIIStringEncoding];
}

- (NSString *)apn {
  char string[32];
  mavlink_msg_cellular_config_get_apn(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:32 encoding:NSASCIIStringEncoding];
}

- (NSString *)puk {
  char string[16];
  mavlink_msg_cellular_config_get_puk(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:16 encoding:NSASCIIStringEncoding];
}

- (uint8_t)roaming {
  return mavlink_msg_cellular_config_get_roaming(&(self->_message));
}

- (CELLULAR_CONFIG_RESPONSE)response {
  return mavlink_msg_cellular_config_get_response(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, enableLte=%d, enablePin=%d, pin=%@, newPin=%@, apn=%@, puk=%@, roaming=%d, response=%d", [super description], [self enableLte], [self enablePin], [self pin], [self newPin], [self apn], [self puk], [self roaming], [self response]];
}

@end
