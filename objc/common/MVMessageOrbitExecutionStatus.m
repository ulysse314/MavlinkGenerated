//
//  MVMessageOrbitExecutionStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageOrbitExecutionStatus.h"

@implementation MVMessageOrbitExecutionStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec radius:(float)radius frame:(MAV_FRAME)frame x:(int32_t)x y:(int32_t)y z:(float)z {
  if ((self = [super init])) {
    mavlink_msg_orbit_execution_status_pack(systemId, componentId, &(self->_message), timeUsec, radius, frame, x, y, z);
  }
  return self;
}

- (uint64_t)timeUsec {
  return mavlink_msg_orbit_execution_status_get_time_usec(&(self->_message));
}

- (float)radius {
  return mavlink_msg_orbit_execution_status_get_radius(&(self->_message));
}

- (MAV_FRAME)frame {
  return mavlink_msg_orbit_execution_status_get_frame(&(self->_message));
}

- (int32_t)x {
  return mavlink_msg_orbit_execution_status_get_x(&(self->_message));
}

- (int32_t)y {
  return mavlink_msg_orbit_execution_status_get_y(&(self->_message));
}

- (float)z {
  return mavlink_msg_orbit_execution_status_get_z(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeUsec=%lld, radius=%f, frame=%d, x=%d, y=%d, z=%f", [super description], [self timeUsec], [self radius], [self frame], [self x], [self y], [self z]];
}

@end
