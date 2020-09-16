//
//  MVMessageTrajectoryRepresentationBezier.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageTrajectoryRepresentationBezier.h"

@implementation MVMessageTrajectoryRepresentationBezier

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec validPoints:(uint8_t)validPoints posX:(float *)posX posY:(float *)posY posZ:(float *)posZ delta:(float *)delta posYaw:(float *)posYaw {
  if ((self = [super init])) {
    mavlink_msg_trajectory_representation_bezier_pack(systemId, componentId, &(self->_message), timeUsec, validPoints, posX, posY, posZ, delta, posYaw);
  }
  return self;
}

- (uint64_t)timeUsec {
  return mavlink_msg_trajectory_representation_bezier_get_time_usec(&(self->_message));
}

- (uint8_t)validPoints {
  return mavlink_msg_trajectory_representation_bezier_get_valid_points(&(self->_message));
}

- (uint16_t)posX:(float *)pos_x {
  return mavlink_msg_trajectory_representation_bezier_get_pos_x(&(self->_message), pos_x);
}

- (uint16_t)posY:(float *)pos_y {
  return mavlink_msg_trajectory_representation_bezier_get_pos_y(&(self->_message), pos_y);
}

- (uint16_t)posZ:(float *)pos_z {
  return mavlink_msg_trajectory_representation_bezier_get_pos_z(&(self->_message), pos_z);
}

- (uint16_t)delta:(float *)delta {
  return mavlink_msg_trajectory_representation_bezier_get_delta(&(self->_message), delta);
}

- (uint16_t)posYaw:(float *)pos_yaw {
  return mavlink_msg_trajectory_representation_bezier_get_pos_yaw(&(self->_message), pos_yaw);
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeUsec=%lld, validPoints=%d, posX=%@, posY=%@, posZ=%@, delta=%@, posYaw=%@", [super description], [self timeUsec], [self validPoints], @"[array of float[5]]", @"[array of float[5]]", @"[array of float[5]]", @"[array of float[5]]", @"[array of float[5]]"];
}

@end
