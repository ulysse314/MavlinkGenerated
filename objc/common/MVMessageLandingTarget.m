//
//  MVMessageLandingTarget.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageLandingTarget.h"

@implementation MVMessageLandingTarget

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec targetNum:(uint8_t)targetNum frame:(MAV_FRAME)frame angleX:(float)angleX angleY:(float)angleY distance:(float)distance sizeX:(float)sizeX sizeY:(float)sizeY x:(float)x y:(float)y z:(float)z q:(float *)q type:(LANDING_TARGET_TYPE)type positionValid:(uint8_t)positionValid {
  if ((self = [super init])) {
    mavlink_msg_landing_target_pack(systemId, componentId, &(self->_message), timeUsec, targetNum, frame, angleX, angleY, distance, sizeX, sizeY, x, y, z, q, type, positionValid);
  }
  return self;
}

- (uint64_t)timeUsec {
  return mavlink_msg_landing_target_get_time_usec(&(self->_message));
}

- (uint8_t)targetNum {
  return mavlink_msg_landing_target_get_target_num(&(self->_message));
}

- (MAV_FRAME)frame {
  return mavlink_msg_landing_target_get_frame(&(self->_message));
}

- (float)angleX {
  return mavlink_msg_landing_target_get_angle_x(&(self->_message));
}

- (float)angleY {
  return mavlink_msg_landing_target_get_angle_y(&(self->_message));
}

- (float)distance {
  return mavlink_msg_landing_target_get_distance(&(self->_message));
}

- (float)sizeX {
  return mavlink_msg_landing_target_get_size_x(&(self->_message));
}

- (float)sizeY {
  return mavlink_msg_landing_target_get_size_y(&(self->_message));
}

- (float)x {
  return mavlink_msg_landing_target_get_x(&(self->_message));
}

- (float)y {
  return mavlink_msg_landing_target_get_y(&(self->_message));
}

- (float)z {
  return mavlink_msg_landing_target_get_z(&(self->_message));
}

- (uint16_t)q:(float *)q {
  return mavlink_msg_landing_target_get_q(&(self->_message), q);
}

- (LANDING_TARGET_TYPE)type {
  return mavlink_msg_landing_target_get_type(&(self->_message));
}

- (uint8_t)positionValid {
  return mavlink_msg_landing_target_get_position_valid(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeUsec=%lld, targetNum=%d, frame=%d, angleX=%f, angleY=%f, distance=%f, sizeX=%f, sizeY=%f, x=%f, y=%f, z=%f, q=%@, type=%d, positionValid=%d", [super description], [self timeUsec], [self targetNum], [self frame], [self angleX], [self angleY], [self distance], [self sizeX], [self sizeY], [self x], [self y], [self z], @"[array of float[4]]", [self type], [self positionValid]];
}

@end
