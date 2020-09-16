//
//  MVMessageMissionChanged.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageMissionChanged.h"

@implementation MVMessageMissionChanged

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId startIndex:(int16_t)startIndex endIndex:(int16_t)endIndex originSysid:(uint8_t)originSysid originCompid:(MAV_COMPONENT)originCompid missionType:(MAV_MISSION_TYPE)missionType {
  if ((self = [super init])) {
    mavlink_msg_mission_changed_pack(systemId, componentId, &(self->_message), startIndex, endIndex, originSysid, originCompid, missionType);
  }
  return self;
}

- (int16_t)startIndex {
  return mavlink_msg_mission_changed_get_start_index(&(self->_message));
}

- (int16_t)endIndex {
  return mavlink_msg_mission_changed_get_end_index(&(self->_message));
}

- (uint8_t)originSysid {
  return mavlink_msg_mission_changed_get_origin_sysid(&(self->_message));
}

- (MAV_COMPONENT)originCompid {
  return mavlink_msg_mission_changed_get_origin_compid(&(self->_message));
}

- (MAV_MISSION_TYPE)missionType {
  return mavlink_msg_mission_changed_get_mission_type(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, startIndex=%d, endIndex=%d, originSysid=%d, originCompid=%d, missionType=%d", [super description], [self startIndex], [self endIndex], [self originSysid], [self originCompid], [self missionType]];
}

@end
