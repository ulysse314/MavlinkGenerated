//
//  MVMessageMissionClearAll.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageMissionClearAll.h"

@implementation MVMessageMissionClearAll

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent missionType:(MAV_MISSION_TYPE)missionType {
  if ((self = [super init])) {
    mavlink_msg_mission_clear_all_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, missionType);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_mission_clear_all_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_mission_clear_all_get_target_component(&(self->_message));
}

- (MAV_MISSION_TYPE)missionType {
  return mavlink_msg_mission_clear_all_get_mission_type(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, missionType=%d", [super description], [self targetSystem], [self targetComponent], [self missionType]];
}

@end
