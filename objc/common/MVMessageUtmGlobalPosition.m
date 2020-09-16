//
//  MVMessageUtmGlobalPosition.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageUtmGlobalPosition.h"

@implementation MVMessageUtmGlobalPosition

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId time:(uint64_t)time uasId:(uint8_t *)uasId lat:(int32_t)lat lon:(int32_t)lon alt:(int32_t)alt relativeAlt:(int32_t)relativeAlt vx:(int16_t)vx vy:(int16_t)vy vz:(int16_t)vz hAcc:(uint16_t)hAcc vAcc:(uint16_t)vAcc velAcc:(uint16_t)velAcc nextLat:(int32_t)nextLat nextLon:(int32_t)nextLon nextAlt:(int32_t)nextAlt updateRate:(uint16_t)updateRate flightState:(UTM_FLIGHT_STATE)flightState flags:(UTM_DATA_AVAIL_FLAGS)flags {
  if ((self = [super init])) {
    mavlink_msg_utm_global_position_pack(systemId, componentId, &(self->_message), time, uasId, lat, lon, alt, relativeAlt, vx, vy, vz, hAcc, vAcc, velAcc, nextLat, nextLon, nextAlt, updateRate, flightState, flags);
  }
  return self;
}

- (uint64_t)time {
  return mavlink_msg_utm_global_position_get_time(&(self->_message));
}

- (uint16_t)uasId:(uint8_t *)uas_id {
  return mavlink_msg_utm_global_position_get_uas_id(&(self->_message), uas_id);
}

- (int32_t)lat {
  return mavlink_msg_utm_global_position_get_lat(&(self->_message));
}

- (int32_t)lon {
  return mavlink_msg_utm_global_position_get_lon(&(self->_message));
}

- (int32_t)alt {
  return mavlink_msg_utm_global_position_get_alt(&(self->_message));
}

- (int32_t)relativeAlt {
  return mavlink_msg_utm_global_position_get_relative_alt(&(self->_message));
}

- (int16_t)vx {
  return mavlink_msg_utm_global_position_get_vx(&(self->_message));
}

- (int16_t)vy {
  return mavlink_msg_utm_global_position_get_vy(&(self->_message));
}

- (int16_t)vz {
  return mavlink_msg_utm_global_position_get_vz(&(self->_message));
}

- (uint16_t)hAcc {
  return mavlink_msg_utm_global_position_get_h_acc(&(self->_message));
}

- (uint16_t)vAcc {
  return mavlink_msg_utm_global_position_get_v_acc(&(self->_message));
}

- (uint16_t)velAcc {
  return mavlink_msg_utm_global_position_get_vel_acc(&(self->_message));
}

- (int32_t)nextLat {
  return mavlink_msg_utm_global_position_get_next_lat(&(self->_message));
}

- (int32_t)nextLon {
  return mavlink_msg_utm_global_position_get_next_lon(&(self->_message));
}

- (int32_t)nextAlt {
  return mavlink_msg_utm_global_position_get_next_alt(&(self->_message));
}

- (uint16_t)updateRate {
  return mavlink_msg_utm_global_position_get_update_rate(&(self->_message));
}

- (UTM_FLIGHT_STATE)flightState {
  return mavlink_msg_utm_global_position_get_flight_state(&(self->_message));
}

- (UTM_DATA_AVAIL_FLAGS)flags {
  return mavlink_msg_utm_global_position_get_flags(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, time=%lld, uasId=%@, lat=%d, lon=%d, alt=%d, relativeAlt=%d, vx=%d, vy=%d, vz=%d, hAcc=%d, vAcc=%d, velAcc=%d, nextLat=%d, nextLon=%d, nextAlt=%d, updateRate=%d, flightState=%d, flags=%d", [super description], [self time], @"[array of uint8_t[18]]", [self lat], [self lon], [self alt], [self relativeAlt], [self vx], [self vy], [self vz], [self hAcc], [self vAcc], [self velAcc], [self nextLat], [self nextLon], [self nextAlt], [self updateRate], [self flightState], [self flags]];
}

@end
