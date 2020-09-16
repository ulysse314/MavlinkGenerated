//
//  MVMessageOpenDroneIdAuthentication.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageOpenDroneIdAuthentication.h"

@implementation MVMessageOpenDroneIdAuthentication

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent idOrMac:(uint8_t *)idOrMac authenticationType:(MAV_ODID_AUTH_TYPE)authenticationType dataPage:(uint8_t)dataPage pageCount:(uint8_t)pageCount length:(uint8_t)length timestamp:(uint32_t)timestamp authenticationData:(uint8_t *)authenticationData {
  if ((self = [super init])) {
    mavlink_msg_open_drone_id_authentication_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, idOrMac, authenticationType, dataPage, pageCount, length, timestamp, authenticationData);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_open_drone_id_authentication_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_open_drone_id_authentication_get_target_component(&(self->_message));
}

- (uint16_t)idOrMac:(uint8_t *)id_or_mac {
  return mavlink_msg_open_drone_id_authentication_get_id_or_mac(&(self->_message), id_or_mac);
}

- (MAV_ODID_AUTH_TYPE)authenticationType {
  return mavlink_msg_open_drone_id_authentication_get_authentication_type(&(self->_message));
}

- (uint8_t)dataPage {
  return mavlink_msg_open_drone_id_authentication_get_data_page(&(self->_message));
}

- (uint8_t)pageCount {
  return mavlink_msg_open_drone_id_authentication_get_page_count(&(self->_message));
}

- (uint8_t)length {
  return mavlink_msg_open_drone_id_authentication_get_length(&(self->_message));
}

- (uint32_t)timestamp {
  return mavlink_msg_open_drone_id_authentication_get_timestamp(&(self->_message));
}

- (uint16_t)authenticationData:(uint8_t *)authentication_data {
  return mavlink_msg_open_drone_id_authentication_get_authentication_data(&(self->_message), authentication_data);
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, idOrMac=%@, authenticationType=%d, dataPage=%d, pageCount=%d, length=%d, timestamp=%d, authenticationData=%@", [super description], [self targetSystem], [self targetComponent], @"[array of uint8_t[20]]", [self authenticationType], [self dataPage], [self pageCount], [self length], [self timestamp], @"[array of uint8_t[23]]"];
}

@end
