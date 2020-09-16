//
//  MVMessageOpenDroneIdOperatorId.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageOpenDroneIdOperatorId.h"

@implementation MVMessageOpenDroneIdOperatorId

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent idOrMac:(uint8_t *)idOrMac operatorIdType:(MAV_ODID_OPERATOR_ID_TYPE)operatorIdType operatorId:(char *)operatorId {
  if ((self = [super init])) {
    mavlink_msg_open_drone_id_operator_id_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, idOrMac, operatorIdType, operatorId);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_open_drone_id_operator_id_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_open_drone_id_operator_id_get_target_component(&(self->_message));
}

- (uint16_t)idOrMac:(uint8_t *)id_or_mac {
  return mavlink_msg_open_drone_id_operator_id_get_id_or_mac(&(self->_message), id_or_mac);
}

- (MAV_ODID_OPERATOR_ID_TYPE)operatorIdType {
  return mavlink_msg_open_drone_id_operator_id_get_operator_id_type(&(self->_message));
}

- (NSString *)operatorId {
  char string[20];
  mavlink_msg_open_drone_id_operator_id_get_operator_id(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:20 encoding:NSASCIIStringEncoding];
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, idOrMac=%@, operatorIdType=%d, operatorId=%@", [super description], [self targetSystem], [self targetComponent], @"[array of uint8_t[20]]", [self operatorIdType], [self operatorId]];
}

@end
