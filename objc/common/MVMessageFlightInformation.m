//
//  MVMessageFlightInformation.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageFlightInformation.h"

@implementation MVMessageFlightInformation

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs armingTimeUtc:(uint64_t)armingTimeUtc takeoffTimeUtc:(uint64_t)takeoffTimeUtc flightUuid:(uint64_t)flightUuid {
  if ((self = [super init])) {
    mavlink_msg_flight_information_pack(systemId, componentId, &(self->_message), timeBootMs, armingTimeUtc, takeoffTimeUtc, flightUuid);
  }
  return self;
}

- (uint32_t)timeBootMs {
  return mavlink_msg_flight_information_get_time_boot_ms(&(self->_message));
}

- (uint64_t)armingTimeUtc {
  return mavlink_msg_flight_information_get_arming_time_utc(&(self->_message));
}

- (uint64_t)takeoffTimeUtc {
  return mavlink_msg_flight_information_get_takeoff_time_utc(&(self->_message));
}

- (uint64_t)flightUuid {
  return mavlink_msg_flight_information_get_flight_uuid(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeBootMs=%d, armingTimeUtc=%lld, takeoffTimeUtc=%lld, flightUuid=%lld", [super description], [self timeBootMs], [self armingTimeUtc], [self takeoffTimeUtc], [self flightUuid]];
}

@end
