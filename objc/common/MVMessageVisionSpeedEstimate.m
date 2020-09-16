//
//  MVMessageVisionSpeedEstimate.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageVisionSpeedEstimate.h"

@implementation MVMessageVisionSpeedEstimate

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId usec:(uint64_t)usec x:(float)x y:(float)y z:(float)z covariance:(float *)covariance resetCounter:(uint8_t)resetCounter {
  if ((self = [super init])) {
    mavlink_msg_vision_speed_estimate_pack(systemId, componentId, &(self->_message), usec, x, y, z, covariance, resetCounter);
  }
  return self;
}

- (uint64_t)usec {
  return mavlink_msg_vision_speed_estimate_get_usec(&(self->_message));
}

- (float)x {
  return mavlink_msg_vision_speed_estimate_get_x(&(self->_message));
}

- (float)y {
  return mavlink_msg_vision_speed_estimate_get_y(&(self->_message));
}

- (float)z {
  return mavlink_msg_vision_speed_estimate_get_z(&(self->_message));
}

- (uint16_t)covariance:(float *)covariance {
  return mavlink_msg_vision_speed_estimate_get_covariance(&(self->_message), covariance);
}

- (uint8_t)resetCounter {
  return mavlink_msg_vision_speed_estimate_get_reset_counter(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, usec=%lld, x=%f, y=%f, z=%f, covariance=%@, resetCounter=%d", [super description], [self usec], [self x], [self y], [self z], @"[array of float[9]]", [self resetCounter]];
}

@end
