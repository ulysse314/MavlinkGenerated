//
//  MVMessageAisVessel.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageAisVessel.h"

@implementation MVMessageAisVessel

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId MMSI:(uint32_t)MMSI lat:(int32_t)lat lon:(int32_t)lon COG:(uint16_t)COG heading:(uint16_t)heading velocity:(uint16_t)velocity turnRate:(int8_t)turnRate navigationalStatus:(AIS_NAV_STATUS)navigationalStatus type:(AIS_TYPE)type dimensionBow:(uint16_t)dimensionBow dimensionStern:(uint16_t)dimensionStern dimensionPort:(uint8_t)dimensionPort dimensionStarboard:(uint8_t)dimensionStarboard callsign:(char *)callsign name:(char *)name tslc:(uint16_t)tslc flags:(AIS_FLAGS)flags {
  if ((self = [super init])) {
    mavlink_msg_ais_vessel_pack(systemId, componentId, &(self->_message), MMSI, lat, lon, COG, heading, velocity, turnRate, navigationalStatus, type, dimensionBow, dimensionStern, dimensionPort, dimensionStarboard, callsign, name, tslc, flags);
  }
  return self;
}

- (uint32_t)MMSI {
  return mavlink_msg_ais_vessel_get_MMSI(&(self->_message));
}

- (int32_t)lat {
  return mavlink_msg_ais_vessel_get_lat(&(self->_message));
}

- (int32_t)lon {
  return mavlink_msg_ais_vessel_get_lon(&(self->_message));
}

- (uint16_t)COG {
  return mavlink_msg_ais_vessel_get_COG(&(self->_message));
}

- (uint16_t)heading {
  return mavlink_msg_ais_vessel_get_heading(&(self->_message));
}

- (uint16_t)velocity {
  return mavlink_msg_ais_vessel_get_velocity(&(self->_message));
}

- (int8_t)turnRate {
  return mavlink_msg_ais_vessel_get_turn_rate(&(self->_message));
}

- (AIS_NAV_STATUS)navigationalStatus {
  return mavlink_msg_ais_vessel_get_navigational_status(&(self->_message));
}

- (AIS_TYPE)type {
  return mavlink_msg_ais_vessel_get_type(&(self->_message));
}

- (uint16_t)dimensionBow {
  return mavlink_msg_ais_vessel_get_dimension_bow(&(self->_message));
}

- (uint16_t)dimensionStern {
  return mavlink_msg_ais_vessel_get_dimension_stern(&(self->_message));
}

- (uint8_t)dimensionPort {
  return mavlink_msg_ais_vessel_get_dimension_port(&(self->_message));
}

- (uint8_t)dimensionStarboard {
  return mavlink_msg_ais_vessel_get_dimension_starboard(&(self->_message));
}

- (NSString *)callsign {
  char string[7];
  mavlink_msg_ais_vessel_get_callsign(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:7 encoding:NSASCIIStringEncoding];
}

- (NSString *)name {
  char string[20];
  mavlink_msg_ais_vessel_get_name(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:20 encoding:NSASCIIStringEncoding];
}

- (uint16_t)tslc {
  return mavlink_msg_ais_vessel_get_tslc(&(self->_message));
}

- (AIS_FLAGS)flags {
  return mavlink_msg_ais_vessel_get_flags(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, MMSI=%d, lat=%d, lon=%d, COG=%d, heading=%d, velocity=%d, turnRate=%d, navigationalStatus=%d, type=%d, dimensionBow=%d, dimensionStern=%d, dimensionPort=%d, dimensionStarboard=%d, callsign=%@, name=%@, tslc=%d, flags=%d", [super description], [self MMSI], [self lat], [self lon], [self COG], [self heading], [self velocity], [self turnRate], [self navigationalStatus], [self type], [self dimensionBow], [self dimensionStern], [self dimensionPort], [self dimensionStarboard], [self callsign], [self name], [self tslc], [self flags]];
}

@end
