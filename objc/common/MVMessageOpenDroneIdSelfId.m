//
//  MVMessageOpenDroneIdSelfId.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageOpenDroneIdSelfId.h"

@implementation MVMessageOpenDroneIdSelfId

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent idOrMac:(uint8_t *)idOrMac descriptionType:(MAV_ODID_DESC_TYPE)descriptionType description:(char *)description {
  if ((self = [super init])) {
    mavlink_msg_open_drone_id_self_id_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, idOrMac, descriptionType, description);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_open_drone_id_self_id_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_open_drone_id_self_id_get_target_component(&(self->_message));
}

- (uint16_t)idOrMac:(uint8_t *)id_or_mac {
  return mavlink_msg_open_drone_id_self_id_get_id_or_mac(&(self->_message), id_or_mac);
}

- (MAV_ODID_DESC_TYPE)descriptionType {
  return mavlink_msg_open_drone_id_self_id_get_description_type(&(self->_message));
}

- (NSString *)description {
  char string[23];
  mavlink_msg_open_drone_id_self_id_get_description(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:23 encoding:NSASCIIStringEncoding];
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, idOrMac=%@, descriptionType=%d, description=%@", [super description], [self targetSystem], [self targetComponent], @"[array of uint8_t[20]]", [self descriptionType], [self description]];
}

@end
