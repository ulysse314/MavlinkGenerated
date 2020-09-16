//
//  MVMessageWifiConfigAp.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageWifiConfigAp.h"

@implementation MVMessageWifiConfigAp

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId ssid:(char *)ssid password:(char *)password mode:(WIFI_CONFIG_AP_MODE)mode response:(WIFI_CONFIG_AP_RESPONSE)response {
  if ((self = [super init])) {
    mavlink_msg_wifi_config_ap_pack(systemId, componentId, &(self->_message), ssid, password, mode, response);
  }
  return self;
}

- (NSString *)ssid {
  char string[32];
  mavlink_msg_wifi_config_ap_get_ssid(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:32 encoding:NSASCIIStringEncoding];
}

- (NSString *)password {
  char string[64];
  mavlink_msg_wifi_config_ap_get_password(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:64 encoding:NSASCIIStringEncoding];
}

- (WIFI_CONFIG_AP_MODE)mode {
  return mavlink_msg_wifi_config_ap_get_mode(&(self->_message));
}

- (WIFI_CONFIG_AP_RESPONSE)response {
  return mavlink_msg_wifi_config_ap_get_response(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, ssid=%@, password=%@, mode=%d, response=%d", [super description], [self ssid], [self password], [self mode], [self response]];
}

@end
