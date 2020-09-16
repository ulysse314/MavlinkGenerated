//
//  MVMessageOdometry.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageOdometry.h"

@implementation MVMessageOdometry

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec frameId:(MAV_FRAME)frameId childFrameId:(MAV_FRAME)childFrameId x:(float)x y:(float)y z:(float)z q:(float *)q vx:(float)vx vy:(float)vy vz:(float)vz rollspeed:(float)rollspeed pitchspeed:(float)pitchspeed yawspeed:(float)yawspeed poseCovariance:(float *)poseCovariance velocityCovariance:(float *)velocityCovariance resetCounter:(uint8_t)resetCounter estimatorType:(MAV_ESTIMATOR_TYPE)estimatorType {
  if ((self = [super init])) {
    mavlink_msg_odometry_pack(systemId, componentId, &(self->_message), timeUsec, frameId, childFrameId, x, y, z, q, vx, vy, vz, rollspeed, pitchspeed, yawspeed, poseCovariance, velocityCovariance, resetCounter, estimatorType);
  }
  return self;
}

- (uint64_t)timeUsec {
  return mavlink_msg_odometry_get_time_usec(&(self->_message));
}

- (MAV_FRAME)frameId {
  return mavlink_msg_odometry_get_frame_id(&(self->_message));
}

- (MAV_FRAME)childFrameId {
  return mavlink_msg_odometry_get_child_frame_id(&(self->_message));
}

- (float)x {
  return mavlink_msg_odometry_get_x(&(self->_message));
}

- (float)y {
  return mavlink_msg_odometry_get_y(&(self->_message));
}

- (float)z {
  return mavlink_msg_odometry_get_z(&(self->_message));
}

- (uint16_t)q:(float *)q {
  return mavlink_msg_odometry_get_q(&(self->_message), q);
}

- (float)vx {
  return mavlink_msg_odometry_get_vx(&(self->_message));
}

- (float)vy {
  return mavlink_msg_odometry_get_vy(&(self->_message));
}

- (float)vz {
  return mavlink_msg_odometry_get_vz(&(self->_message));
}

- (float)rollspeed {
  return mavlink_msg_odometry_get_rollspeed(&(self->_message));
}

- (float)pitchspeed {
  return mavlink_msg_odometry_get_pitchspeed(&(self->_message));
}

- (float)yawspeed {
  return mavlink_msg_odometry_get_yawspeed(&(self->_message));
}

- (uint16_t)poseCovariance:(float *)pose_covariance {
  return mavlink_msg_odometry_get_pose_covariance(&(self->_message), pose_covariance);
}

- (uint16_t)velocityCovariance:(float *)velocity_covariance {
  return mavlink_msg_odometry_get_velocity_covariance(&(self->_message), velocity_covariance);
}

- (uint8_t)resetCounter {
  return mavlink_msg_odometry_get_reset_counter(&(self->_message));
}

- (MAV_ESTIMATOR_TYPE)estimatorType {
  return mavlink_msg_odometry_get_estimator_type(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeUsec=%lld, frameId=%d, childFrameId=%d, x=%f, y=%f, z=%f, q=%@, vx=%f, vy=%f, vz=%f, rollspeed=%f, pitchspeed=%f, yawspeed=%f, poseCovariance=%@, velocityCovariance=%@, resetCounter=%d, estimatorType=%d", [super description], [self timeUsec], [self frameId], [self childFrameId], [self x], [self y], [self z], @"[array of float[4]]", [self vx], [self vy], [self vz], [self rollspeed], [self pitchspeed], [self yawspeed], @"[array of float[21]]", @"[array of float[21]]", [self resetCounter], [self estimatorType]];
}

@end
