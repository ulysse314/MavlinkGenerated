//
//  MVMessageHeartbeat.m
//  MAVLink communications protocol built from minimal.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageHeartbeat.h"

@implementation MVMessageHeartbeat

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId type:(MAV_TYPE)type autopilot:(MAV_AUTOPILOT)autopilot baseMode:(MAV_MODE_FLAG)baseMode customMode:(uint32_t)customMode systemStatus:(MAV_STATE)systemStatus {
  if ((self = [super init])) {
    mavlink_msg_heartbeat_pack(systemId, componentId, &(self->_message), type, autopilot, baseMode, customMode, systemStatus);
  }
  return self;
}

- (MAV_TYPE)type {
  return mavlink_msg_heartbeat_get_type(&(self->_message));
}

- (MAV_AUTOPILOT)autopilot {
  return mavlink_msg_heartbeat_get_autopilot(&(self->_message));
}

- (MAV_MODE_FLAG)baseMode {
  return mavlink_msg_heartbeat_get_base_mode(&(self->_message));
}

- (uint32_t)customMode {
  return mavlink_msg_heartbeat_get_custom_mode(&(self->_message));
}

- (MAV_STATE)systemStatus {
  return mavlink_msg_heartbeat_get_system_status(&(self->_message));
}

- (uint8_t)mavlinkVersion {
  return mavlink_msg_heartbeat_get_mavlink_version(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, type=%d, autopilot=%d, baseMode=%d, customMode=%d, systemStatus=%d, mavlinkVersion=%d", [super description], [self type], [self autopilot], [self baseMode], [self customMode], [self systemStatus], [self mavlinkVersion]];
}

@end
