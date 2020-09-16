//
//  MVMessageTrajectoryRepresentationWaypoints.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageTrajectoryRepresentationWaypoints.h"

@implementation MVMessageTrajectoryRepresentationWaypoints

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec validPoints:(uint8_t)validPoints posX:(float *)posX posY:(float *)posY posZ:(float *)posZ velX:(float *)velX velY:(float *)velY velZ:(float *)velZ accX:(float *)accX accY:(float *)accY accZ:(float *)accZ posYaw:(float *)posYaw velYaw:(float *)velYaw command:(MAV_CMD *)command {
  if ((self = [super init])) {
    mavlink_msg_trajectory_representation_waypoints_pack(systemId, componentId, &(self->_message), timeUsec, validPoints, posX, posY, posZ, velX, velY, velZ, accX, accY, accZ, posYaw, velYaw, command);
  }
  return self;
}

- (uint64_t)timeUsec {
  return mavlink_msg_trajectory_representation_waypoints_get_time_usec(&(self->_message));
}

- (uint8_t)validPoints {
  return mavlink_msg_trajectory_representation_waypoints_get_valid_points(&(self->_message));
}

- (uint16_t)posX:(float *)pos_x {
  return mavlink_msg_trajectory_representation_waypoints_get_pos_x(&(self->_message), pos_x);
}

- (uint16_t)posY:(float *)pos_y {
  return mavlink_msg_trajectory_representation_waypoints_get_pos_y(&(self->_message), pos_y);
}

- (uint16_t)posZ:(float *)pos_z {
  return mavlink_msg_trajectory_representation_waypoints_get_pos_z(&(self->_message), pos_z);
}

- (uint16_t)velX:(float *)vel_x {
  return mavlink_msg_trajectory_representation_waypoints_get_vel_x(&(self->_message), vel_x);
}

- (uint16_t)velY:(float *)vel_y {
  return mavlink_msg_trajectory_representation_waypoints_get_vel_y(&(self->_message), vel_y);
}

- (uint16_t)velZ:(float *)vel_z {
  return mavlink_msg_trajectory_representation_waypoints_get_vel_z(&(self->_message), vel_z);
}

- (uint16_t)accX:(float *)acc_x {
  return mavlink_msg_trajectory_representation_waypoints_get_acc_x(&(self->_message), acc_x);
}

- (uint16_t)accY:(float *)acc_y {
  return mavlink_msg_trajectory_representation_waypoints_get_acc_y(&(self->_message), acc_y);
}

- (uint16_t)accZ:(float *)acc_z {
  return mavlink_msg_trajectory_representation_waypoints_get_acc_z(&(self->_message), acc_z);
}

- (uint16_t)posYaw:(float *)pos_yaw {
  return mavlink_msg_trajectory_representation_waypoints_get_pos_yaw(&(self->_message), pos_yaw);
}

- (uint16_t)velYaw:(float *)vel_yaw {
  return mavlink_msg_trajectory_representation_waypoints_get_vel_yaw(&(self->_message), vel_yaw);
}

- (uint16_t)command:(uint16_t *)command {
  return mavlink_msg_trajectory_representation_waypoints_get_command(&(self->_message), command);
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeUsec=%lld, validPoints=%d, posX=%@, posY=%@, posZ=%@, velX=%@, velY=%@, velZ=%@, accX=%@, accY=%@, accZ=%@, posYaw=%@, velYaw=%@, command=%@", [super description], [self timeUsec], [self validPoints], @"[array of float[5]]", @"[array of float[5]]", @"[array of float[5]]", @"[array of float[5]]", @"[array of float[5]]", @"[array of float[5]]", @"[array of float[5]]", @"[array of float[5]]", @"[array of float[5]]", @"[array of float[5]]", @"[array of float[5]]", @"[array of uint16_t[5]]"];
}

@end
