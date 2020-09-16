//
//  MVMessageOpenDroneIdSystem.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageOpenDroneIdSystem.h"

@implementation MVMessageOpenDroneIdSystem

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent idOrMac:(uint8_t *)idOrMac operatorLocationType:(MAV_ODID_OPERATOR_LOCATION_TYPE)operatorLocationType classificationType:(MAV_ODID_CLASSIFICATION_TYPE)classificationType operatorLatitude:(int32_t)operatorLatitude operatorLongitude:(int32_t)operatorLongitude areaCount:(uint16_t)areaCount areaRadius:(uint16_t)areaRadius areaCeiling:(float)areaCeiling areaFloor:(float)areaFloor categoryEu:(MAV_ODID_CATEGORY_EU)categoryEu classEu:(MAV_ODID_CLASS_EU)classEu {
  if ((self = [super init])) {
    mavlink_msg_open_drone_id_system_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, idOrMac, operatorLocationType, classificationType, operatorLatitude, operatorLongitude, areaCount, areaRadius, areaCeiling, areaFloor, categoryEu, classEu);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_open_drone_id_system_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_open_drone_id_system_get_target_component(&(self->_message));
}

- (uint16_t)idOrMac:(uint8_t *)id_or_mac {
  return mavlink_msg_open_drone_id_system_get_id_or_mac(&(self->_message), id_or_mac);
}

- (MAV_ODID_OPERATOR_LOCATION_TYPE)operatorLocationType {
  return mavlink_msg_open_drone_id_system_get_operator_location_type(&(self->_message));
}

- (MAV_ODID_CLASSIFICATION_TYPE)classificationType {
  return mavlink_msg_open_drone_id_system_get_classification_type(&(self->_message));
}

- (int32_t)operatorLatitude {
  return mavlink_msg_open_drone_id_system_get_operator_latitude(&(self->_message));
}

- (int32_t)operatorLongitude {
  return mavlink_msg_open_drone_id_system_get_operator_longitude(&(self->_message));
}

- (uint16_t)areaCount {
  return mavlink_msg_open_drone_id_system_get_area_count(&(self->_message));
}

- (uint16_t)areaRadius {
  return mavlink_msg_open_drone_id_system_get_area_radius(&(self->_message));
}

- (float)areaCeiling {
  return mavlink_msg_open_drone_id_system_get_area_ceiling(&(self->_message));
}

- (float)areaFloor {
  return mavlink_msg_open_drone_id_system_get_area_floor(&(self->_message));
}

- (MAV_ODID_CATEGORY_EU)categoryEu {
  return mavlink_msg_open_drone_id_system_get_category_eu(&(self->_message));
}

- (MAV_ODID_CLASS_EU)classEu {
  return mavlink_msg_open_drone_id_system_get_class_eu(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, idOrMac=%@, operatorLocationType=%d, classificationType=%d, operatorLatitude=%d, operatorLongitude=%d, areaCount=%d, areaRadius=%d, areaCeiling=%f, areaFloor=%f, categoryEu=%d, classEu=%d", [super description], [self targetSystem], [self targetComponent], @"[array of uint8_t[20]]", [self operatorLocationType], [self classificationType], [self operatorLatitude], [self operatorLongitude], [self areaCount], [self areaRadius], [self areaCeiling], [self areaFloor], [self categoryEu], [self classEu]];
}

@end
