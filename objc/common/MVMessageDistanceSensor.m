//
//  MVMessageDistanceSensor.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageDistanceSensor.h"

@implementation MVMessageDistanceSensor

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs minDistance:(uint16_t)minDistance maxDistance:(uint16_t)maxDistance currentDistance:(uint16_t)currentDistance type:(MAV_DISTANCE_SENSOR)type id:(uint8_t)id orientation:(MAV_SENSOR_ORIENTATION)orientation covariance:(uint8_t)covariance horizontalFov:(float)horizontalFov verticalFov:(float)verticalFov quaternion:(float *)quaternion signalQuality:(uint8_t)signalQuality {
  if ((self = [super init])) {
    mavlink_msg_distance_sensor_pack(systemId, componentId, &(self->_message), timeBootMs, minDistance, maxDistance, currentDistance, type, id, orientation, covariance, horizontalFov, verticalFov, quaternion, signalQuality);
  }
  return self;
}

- (uint32_t)timeBootMs {
  return mavlink_msg_distance_sensor_get_time_boot_ms(&(self->_message));
}

- (uint16_t)minDistance {
  return mavlink_msg_distance_sensor_get_min_distance(&(self->_message));
}

- (uint16_t)maxDistance {
  return mavlink_msg_distance_sensor_get_max_distance(&(self->_message));
}

- (uint16_t)currentDistance {
  return mavlink_msg_distance_sensor_get_current_distance(&(self->_message));
}

- (MAV_DISTANCE_SENSOR)type {
  return mavlink_msg_distance_sensor_get_type(&(self->_message));
}

- (uint8_t)id {
  return mavlink_msg_distance_sensor_get_id(&(self->_message));
}

- (MAV_SENSOR_ORIENTATION)orientation {
  return mavlink_msg_distance_sensor_get_orientation(&(self->_message));
}

- (uint8_t)covariance {
  return mavlink_msg_distance_sensor_get_covariance(&(self->_message));
}

- (float)horizontalFov {
  return mavlink_msg_distance_sensor_get_horizontal_fov(&(self->_message));
}

- (float)verticalFov {
  return mavlink_msg_distance_sensor_get_vertical_fov(&(self->_message));
}

- (uint16_t)quaternion:(float *)quaternion {
  return mavlink_msg_distance_sensor_get_quaternion(&(self->_message), quaternion);
}

- (uint8_t)signalQuality {
  return mavlink_msg_distance_sensor_get_signal_quality(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeBootMs=%d, minDistance=%d, maxDistance=%d, currentDistance=%d, type=%d, id=%d, orientation=%d, covariance=%d, horizontalFov=%f, verticalFov=%f, quaternion=%@, signalQuality=%d", [super description], [self timeBootMs], [self minDistance], [self maxDistance], [self currentDistance], [self type], [self id], [self orientation], [self covariance], [self horizontalFov], [self verticalFov], @"[array of float[4]]", [self signalQuality]];
}

@end
