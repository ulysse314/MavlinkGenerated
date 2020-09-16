//
//  MVMessageHighLatency2.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageHighLatency2.h"

@implementation MVMessageHighLatency2

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timestamp:(uint32_t)timestamp type:(MAV_TYPE)type autopilot:(MAV_AUTOPILOT)autopilot customMode:(uint16_t)customMode latitude:(int32_t)latitude longitude:(int32_t)longitude altitude:(int16_t)altitude targetAltitude:(int16_t)targetAltitude heading:(uint8_t)heading targetHeading:(uint8_t)targetHeading targetDistance:(uint16_t)targetDistance throttle:(uint8_t)throttle airspeed:(uint8_t)airspeed airspeedSp:(uint8_t)airspeedSp groundspeed:(uint8_t)groundspeed windspeed:(uint8_t)windspeed windHeading:(uint8_t)windHeading eph:(uint8_t)eph epv:(uint8_t)epv temperatureAir:(int8_t)temperatureAir climbRate:(int8_t)climbRate battery:(int8_t)battery wpNum:(uint16_t)wpNum failureFlags:(HL_FAILURE_FLAG)failureFlags custom0:(int8_t)custom0 custom1:(int8_t)custom1 custom2:(int8_t)custom2 {
  if ((self = [super init])) {
    mavlink_msg_high_latency2_pack(systemId, componentId, &(self->_message), timestamp, type, autopilot, customMode, latitude, longitude, altitude, targetAltitude, heading, targetHeading, targetDistance, throttle, airspeed, airspeedSp, groundspeed, windspeed, windHeading, eph, epv, temperatureAir, climbRate, battery, wpNum, failureFlags, custom0, custom1, custom2);
  }
  return self;
}

- (uint32_t)timestamp {
  return mavlink_msg_high_latency2_get_timestamp(&(self->_message));
}

- (MAV_TYPE)type {
  return mavlink_msg_high_latency2_get_type(&(self->_message));
}

- (MAV_AUTOPILOT)autopilot {
  return mavlink_msg_high_latency2_get_autopilot(&(self->_message));
}

- (uint16_t)customMode {
  return mavlink_msg_high_latency2_get_custom_mode(&(self->_message));
}

- (int32_t)latitude {
  return mavlink_msg_high_latency2_get_latitude(&(self->_message));
}

- (int32_t)longitude {
  return mavlink_msg_high_latency2_get_longitude(&(self->_message));
}

- (int16_t)altitude {
  return mavlink_msg_high_latency2_get_altitude(&(self->_message));
}

- (int16_t)targetAltitude {
  return mavlink_msg_high_latency2_get_target_altitude(&(self->_message));
}

- (uint8_t)heading {
  return mavlink_msg_high_latency2_get_heading(&(self->_message));
}

- (uint8_t)targetHeading {
  return mavlink_msg_high_latency2_get_target_heading(&(self->_message));
}

- (uint16_t)targetDistance {
  return mavlink_msg_high_latency2_get_target_distance(&(self->_message));
}

- (uint8_t)throttle {
  return mavlink_msg_high_latency2_get_throttle(&(self->_message));
}

- (uint8_t)airspeed {
  return mavlink_msg_high_latency2_get_airspeed(&(self->_message));
}

- (uint8_t)airspeedSp {
  return mavlink_msg_high_latency2_get_airspeed_sp(&(self->_message));
}

- (uint8_t)groundspeed {
  return mavlink_msg_high_latency2_get_groundspeed(&(self->_message));
}

- (uint8_t)windspeed {
  return mavlink_msg_high_latency2_get_windspeed(&(self->_message));
}

- (uint8_t)windHeading {
  return mavlink_msg_high_latency2_get_wind_heading(&(self->_message));
}

- (uint8_t)eph {
  return mavlink_msg_high_latency2_get_eph(&(self->_message));
}

- (uint8_t)epv {
  return mavlink_msg_high_latency2_get_epv(&(self->_message));
}

- (int8_t)temperatureAir {
  return mavlink_msg_high_latency2_get_temperature_air(&(self->_message));
}

- (int8_t)climbRate {
  return mavlink_msg_high_latency2_get_climb_rate(&(self->_message));
}

- (int8_t)battery {
  return mavlink_msg_high_latency2_get_battery(&(self->_message));
}

- (uint16_t)wpNum {
  return mavlink_msg_high_latency2_get_wp_num(&(self->_message));
}

- (HL_FAILURE_FLAG)failureFlags {
  return mavlink_msg_high_latency2_get_failure_flags(&(self->_message));
}

- (int8_t)custom0 {
  return mavlink_msg_high_latency2_get_custom0(&(self->_message));
}

- (int8_t)custom1 {
  return mavlink_msg_high_latency2_get_custom1(&(self->_message));
}

- (int8_t)custom2 {
  return mavlink_msg_high_latency2_get_custom2(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timestamp=%d, type=%d, autopilot=%d, customMode=%d, latitude=%d, longitude=%d, altitude=%d, targetAltitude=%d, heading=%d, targetHeading=%d, targetDistance=%d, throttle=%d, airspeed=%d, airspeedSp=%d, groundspeed=%d, windspeed=%d, windHeading=%d, eph=%d, epv=%d, temperatureAir=%d, climbRate=%d, battery=%d, wpNum=%d, failureFlags=%d, custom0=%d, custom1=%d, custom2=%d", [super description], [self timestamp], [self type], [self autopilot], [self customMode], [self latitude], [self longitude], [self altitude], [self targetAltitude], [self heading], [self targetHeading], [self targetDistance], [self throttle], [self airspeed], [self airspeedSp], [self groundspeed], [self windspeed], [self windHeading], [self eph], [self epv], [self temperatureAir], [self climbRate], [self battery], [self wpNum], [self failureFlags], [self custom0], [self custom1], [self custom2]];
}

@end
