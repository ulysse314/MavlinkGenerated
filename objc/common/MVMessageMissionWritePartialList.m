//
//  MVMessageMissionWritePartialList.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageMissionWritePartialList.h"

@implementation MVMessageMissionWritePartialList

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent startIndex:(int16_t)startIndex endIndex:(int16_t)endIndex missionType:(MAV_MISSION_TYPE)missionType {
  if ((self = [super init])) {
    mavlink_msg_mission_write_partial_list_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, startIndex, endIndex, missionType);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_mission_write_partial_list_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_mission_write_partial_list_get_target_component(&(self->_message));
}

- (int16_t)startIndex {
  return mavlink_msg_mission_write_partial_list_get_start_index(&(self->_message));
}

- (int16_t)endIndex {
  return mavlink_msg_mission_write_partial_list_get_end_index(&(self->_message));
}

- (MAV_MISSION_TYPE)missionType {
  return mavlink_msg_mission_write_partial_list_get_mission_type(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, startIndex=%d, endIndex=%d, missionType=%d", [super description], [self targetSystem], [self targetComponent], [self startIndex], [self endIndex], [self missionType]];
}

@end
