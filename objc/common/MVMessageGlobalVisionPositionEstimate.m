//
//  MVMessageGlobalVisionPositionEstimate.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageGlobalVisionPositionEstimate.h"

@implementation MVMessageGlobalVisionPositionEstimate

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId usec:(uint64_t)usec x:(float)x y:(float)y z:(float)z roll:(float)roll pitch:(float)pitch yaw:(float)yaw covariance:(float *)covariance resetCounter:(uint8_t)resetCounter {
  if ((self = [super init])) {
    mavlink_msg_global_vision_position_estimate_pack(systemId, componentId, &(self->_message), usec, x, y, z, roll, pitch, yaw, covariance, resetCounter);
  }
  return self;
}

- (uint64_t)usec {
  return mavlink_msg_global_vision_position_estimate_get_usec(&(self->_message));
}

- (float)x {
  return mavlink_msg_global_vision_position_estimate_get_x(&(self->_message));
}

- (float)y {
  return mavlink_msg_global_vision_position_estimate_get_y(&(self->_message));
}

- (float)z {
  return mavlink_msg_global_vision_position_estimate_get_z(&(self->_message));
}

- (float)roll {
  return mavlink_msg_global_vision_position_estimate_get_roll(&(self->_message));
}

- (float)pitch {
  return mavlink_msg_global_vision_position_estimate_get_pitch(&(self->_message));
}

- (float)yaw {
  return mavlink_msg_global_vision_position_estimate_get_yaw(&(self->_message));
}

- (uint16_t)covariance:(float *)covariance {
  return mavlink_msg_global_vision_position_estimate_get_covariance(&(self->_message), covariance);
}

- (uint8_t)resetCounter {
  return mavlink_msg_global_vision_position_estimate_get_reset_counter(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, usec=%lld, x=%f, y=%f, z=%f, roll=%f, pitch=%f, yaw=%f, covariance=%@, resetCounter=%d", [super description], [self usec], [self x], [self y], [self z], [self roll], [self pitch], [self yaw], @"[array of float[21]]", [self resetCounter]];
}

@end
