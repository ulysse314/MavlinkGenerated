//
//  MVMessageWheelDistance.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageWheelDistance.h"

@implementation MVMessageWheelDistance

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec count:(uint8_t)count distance:(double *)distance {
  if ((self = [super init])) {
    mavlink_msg_wheel_distance_pack(systemId, componentId, &(self->_message), timeUsec, count, distance);
  }
  return self;
}

- (uint64_t)timeUsec {
  return mavlink_msg_wheel_distance_get_time_usec(&(self->_message));
}

- (uint8_t)count {
  return mavlink_msg_wheel_distance_get_count(&(self->_message));
}

- (uint16_t)distance:(double *)distance {
  return mavlink_msg_wheel_distance_get_distance(&(self->_message), distance);
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeUsec=%lld, count=%d, distance=%@", [super description], [self timeUsec], [self count], @"[array of double[16]]"];
}

@end
