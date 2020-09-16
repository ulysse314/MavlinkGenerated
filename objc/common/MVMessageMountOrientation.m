//
//  MVMessageMountOrientation.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageMountOrientation.h"

@implementation MVMessageMountOrientation

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs roll:(float)roll pitch:(float)pitch yaw:(float)yaw yawAbsolute:(float)yawAbsolute {
  if ((self = [super init])) {
    mavlink_msg_mount_orientation_pack(systemId, componentId, &(self->_message), timeBootMs, roll, pitch, yaw, yawAbsolute);
  }
  return self;
}

- (uint32_t)timeBootMs {
  return mavlink_msg_mount_orientation_get_time_boot_ms(&(self->_message));
}

- (float)roll {
  return mavlink_msg_mount_orientation_get_roll(&(self->_message));
}

- (float)pitch {
  return mavlink_msg_mount_orientation_get_pitch(&(self->_message));
}

- (float)yaw {
  return mavlink_msg_mount_orientation_get_yaw(&(self->_message));
}

- (float)yawAbsolute {
  return mavlink_msg_mount_orientation_get_yaw_absolute(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeBootMs=%d, roll=%f, pitch=%f, yaw=%f, yawAbsolute=%f", [super description], [self timeBootMs], [self roll], [self pitch], [self yaw], [self yawAbsolute]];
}

@end
