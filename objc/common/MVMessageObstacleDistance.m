//
//  MVMessageObstacleDistance.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageObstacleDistance.h"

@implementation MVMessageObstacleDistance

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec sensorType:(MAV_DISTANCE_SENSOR)sensorType distances:(uint16_t *)distances increment:(uint8_t)increment minDistance:(uint16_t)minDistance maxDistance:(uint16_t)maxDistance incrementF:(float)incrementF angleOffset:(float)angleOffset frame:(MAV_FRAME)frame {
  if ((self = [super init])) {
    mavlink_msg_obstacle_distance_pack(systemId, componentId, &(self->_message), timeUsec, sensorType, distances, increment, minDistance, maxDistance, incrementF, angleOffset, frame);
  }
  return self;
}

- (uint64_t)timeUsec {
  return mavlink_msg_obstacle_distance_get_time_usec(&(self->_message));
}

- (MAV_DISTANCE_SENSOR)sensorType {
  return mavlink_msg_obstacle_distance_get_sensor_type(&(self->_message));
}

- (uint16_t)distances:(uint16_t *)distances {
  return mavlink_msg_obstacle_distance_get_distances(&(self->_message), distances);
}

- (uint8_t)increment {
  return mavlink_msg_obstacle_distance_get_increment(&(self->_message));
}

- (uint16_t)minDistance {
  return mavlink_msg_obstacle_distance_get_min_distance(&(self->_message));
}

- (uint16_t)maxDistance {
  return mavlink_msg_obstacle_distance_get_max_distance(&(self->_message));
}

- (float)incrementF {
  return mavlink_msg_obstacle_distance_get_increment_f(&(self->_message));
}

- (float)angleOffset {
  return mavlink_msg_obstacle_distance_get_angle_offset(&(self->_message));
}

- (MAV_FRAME)frame {
  return mavlink_msg_obstacle_distance_get_frame(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeUsec=%lld, sensorType=%d, distances=%@, increment=%d, minDistance=%d, maxDistance=%d, incrementF=%f, angleOffset=%f, frame=%d", [super description], [self timeUsec], [self sensorType], @"[array of uint16_t[72]]", [self increment], [self minDistance], [self maxDistance], [self incrementF], [self angleOffset], [self frame]];
}

@end
