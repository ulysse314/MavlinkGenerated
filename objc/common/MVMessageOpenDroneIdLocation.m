//
//  MVMessageOpenDroneIdLocation.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageOpenDroneIdLocation.h"

@implementation MVMessageOpenDroneIdLocation

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent idOrMac:(uint8_t *)idOrMac status:(MAV_ODID_STATUS)status direction:(uint16_t)direction speedHorizontal:(uint16_t)speedHorizontal speedVertical:(int16_t)speedVertical latitude:(int32_t)latitude longitude:(int32_t)longitude altitudeBarometric:(float)altitudeBarometric altitudeGeodetic:(float)altitudeGeodetic heightReference:(MAV_ODID_HEIGHT_REF)heightReference height:(float)height horizontalAccuracy:(MAV_ODID_HOR_ACC)horizontalAccuracy verticalAccuracy:(MAV_ODID_VER_ACC)verticalAccuracy barometerAccuracy:(MAV_ODID_VER_ACC)barometerAccuracy speedAccuracy:(MAV_ODID_SPEED_ACC)speedAccuracy timestamp:(float)timestamp timestampAccuracy:(MAV_ODID_TIME_ACC)timestampAccuracy {
  if ((self = [super init])) {
    mavlink_msg_open_drone_id_location_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, idOrMac, status, direction, speedHorizontal, speedVertical, latitude, longitude, altitudeBarometric, altitudeGeodetic, heightReference, height, horizontalAccuracy, verticalAccuracy, barometerAccuracy, speedAccuracy, timestamp, timestampAccuracy);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_open_drone_id_location_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_open_drone_id_location_get_target_component(&(self->_message));
}

- (uint16_t)idOrMac:(uint8_t *)id_or_mac {
  return mavlink_msg_open_drone_id_location_get_id_or_mac(&(self->_message), id_or_mac);
}

- (MAV_ODID_STATUS)status {
  return mavlink_msg_open_drone_id_location_get_status(&(self->_message));
}

- (uint16_t)direction {
  return mavlink_msg_open_drone_id_location_get_direction(&(self->_message));
}

- (uint16_t)speedHorizontal {
  return mavlink_msg_open_drone_id_location_get_speed_horizontal(&(self->_message));
}

- (int16_t)speedVertical {
  return mavlink_msg_open_drone_id_location_get_speed_vertical(&(self->_message));
}

- (int32_t)latitude {
  return mavlink_msg_open_drone_id_location_get_latitude(&(self->_message));
}

- (int32_t)longitude {
  return mavlink_msg_open_drone_id_location_get_longitude(&(self->_message));
}

- (float)altitudeBarometric {
  return mavlink_msg_open_drone_id_location_get_altitude_barometric(&(self->_message));
}

- (float)altitudeGeodetic {
  return mavlink_msg_open_drone_id_location_get_altitude_geodetic(&(self->_message));
}

- (MAV_ODID_HEIGHT_REF)heightReference {
  return mavlink_msg_open_drone_id_location_get_height_reference(&(self->_message));
}

- (float)height {
  return mavlink_msg_open_drone_id_location_get_height(&(self->_message));
}

- (MAV_ODID_HOR_ACC)horizontalAccuracy {
  return mavlink_msg_open_drone_id_location_get_horizontal_accuracy(&(self->_message));
}

- (MAV_ODID_VER_ACC)verticalAccuracy {
  return mavlink_msg_open_drone_id_location_get_vertical_accuracy(&(self->_message));
}

- (MAV_ODID_VER_ACC)barometerAccuracy {
  return mavlink_msg_open_drone_id_location_get_barometer_accuracy(&(self->_message));
}

- (MAV_ODID_SPEED_ACC)speedAccuracy {
  return mavlink_msg_open_drone_id_location_get_speed_accuracy(&(self->_message));
}

- (float)timestamp {
  return mavlink_msg_open_drone_id_location_get_timestamp(&(self->_message));
}

- (MAV_ODID_TIME_ACC)timestampAccuracy {
  return mavlink_msg_open_drone_id_location_get_timestamp_accuracy(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, idOrMac=%@, status=%d, direction=%d, speedHorizontal=%d, speedVertical=%d, latitude=%d, longitude=%d, altitudeBarometric=%f, altitudeGeodetic=%f, heightReference=%d, height=%f, horizontalAccuracy=%d, verticalAccuracy=%d, barometerAccuracy=%d, speedAccuracy=%d, timestamp=%f, timestampAccuracy=%d", [super description], [self targetSystem], [self targetComponent], @"[array of uint8_t[20]]", [self status], [self direction], [self speedHorizontal], [self speedVertical], [self latitude], [self longitude], [self altitudeBarometric], [self altitudeGeodetic], [self heightReference], [self height], [self horizontalAccuracy], [self verticalAccuracy], [self barometerAccuracy], [self speedAccuracy], [self timestamp], [self timestampAccuracy]];
}

@end
