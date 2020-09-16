//
//  MVMessageOpenDroneIdBasicId.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageOpenDroneIdBasicId.h"

@implementation MVMessageOpenDroneIdBasicId

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent idOrMac:(uint8_t *)idOrMac idType:(MAV_ODID_ID_TYPE)idType uaType:(MAV_ODID_UA_TYPE)uaType uasId:(uint8_t *)uasId {
  if ((self = [super init])) {
    mavlink_msg_open_drone_id_basic_id_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, idOrMac, idType, uaType, uasId);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_open_drone_id_basic_id_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_open_drone_id_basic_id_get_target_component(&(self->_message));
}

- (uint16_t)idOrMac:(uint8_t *)id_or_mac {
  return mavlink_msg_open_drone_id_basic_id_get_id_or_mac(&(self->_message), id_or_mac);
}

- (MAV_ODID_ID_TYPE)idType {
  return mavlink_msg_open_drone_id_basic_id_get_id_type(&(self->_message));
}

- (MAV_ODID_UA_TYPE)uaType {
  return mavlink_msg_open_drone_id_basic_id_get_ua_type(&(self->_message));
}

- (uint16_t)uasId:(uint8_t *)uas_id {
  return mavlink_msg_open_drone_id_basic_id_get_uas_id(&(self->_message), uas_id);
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, idOrMac=%@, idType=%d, uaType=%d, uasId=%@", [super description], [self targetSystem], [self targetComponent], @"[array of uint8_t[20]]", [self idType], [self uaType], @"[array of uint8_t[20]]"];
}

@end
