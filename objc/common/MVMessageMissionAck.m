//
//  MVMessageMissionAck.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageMissionAck.h"

@implementation MVMessageMissionAck

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent type:(MAV_MISSION_RESULT)type missionType:(MAV_MISSION_TYPE)missionType {
  if ((self = [super init])) {
    mavlink_msg_mission_ack_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, type, missionType);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_mission_ack_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_mission_ack_get_target_component(&(self->_message));
}

- (MAV_MISSION_RESULT)type {
  return mavlink_msg_mission_ack_get_type(&(self->_message));
}

- (MAV_MISSION_TYPE)missionType {
  return mavlink_msg_mission_ack_get_mission_type(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, type=%d, missionType=%d", [super description], [self targetSystem], [self targetComponent], [self type], [self missionType]];
}

@end
