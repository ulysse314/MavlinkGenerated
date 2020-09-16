//
//  MVMessageTimeEstimateToTarget.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageTimeEstimateToTarget.h"

@implementation MVMessageTimeEstimateToTarget

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId safeReturn:(int32_t)safeReturn land:(int32_t)land missionNextItem:(int32_t)missionNextItem missionEnd:(int32_t)missionEnd commandedAction:(int32_t)commandedAction {
  if ((self = [super init])) {
    mavlink_msg_time_estimate_to_target_pack(systemId, componentId, &(self->_message), safeReturn, land, missionNextItem, missionEnd, commandedAction);
  }
  return self;
}

- (int32_t)safeReturn {
  return mavlink_msg_time_estimate_to_target_get_safe_return(&(self->_message));
}

- (int32_t)land {
  return mavlink_msg_time_estimate_to_target_get_land(&(self->_message));
}

- (int32_t)missionNextItem {
  return mavlink_msg_time_estimate_to_target_get_mission_next_item(&(self->_message));
}

- (int32_t)missionEnd {
  return mavlink_msg_time_estimate_to_target_get_mission_end(&(self->_message));
}

- (int32_t)commandedAction {
  return mavlink_msg_time_estimate_to_target_get_commanded_action(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, safeReturn=%d, land=%d, missionNextItem=%d, missionEnd=%d, commandedAction=%d", [super description], [self safeReturn], [self land], [self missionNextItem], [self missionEnd], [self commandedAction]];
}

@end
