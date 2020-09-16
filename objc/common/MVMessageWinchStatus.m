//
//  MVMessageWinchStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageWinchStatus.h"

@implementation MVMessageWinchStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec lineLength:(float)lineLength speed:(float)speed tension:(float)tension voltage:(float)voltage current:(float)current temperature:(int16_t)temperature status:(MAV_WINCH_STATUS_FLAG)status {
  if ((self = [super init])) {
    mavlink_msg_winch_status_pack(systemId, componentId, &(self->_message), timeUsec, lineLength, speed, tension, voltage, current, temperature, status);
  }
  return self;
}

- (uint64_t)timeUsec {
  return mavlink_msg_winch_status_get_time_usec(&(self->_message));
}

- (float)lineLength {
  return mavlink_msg_winch_status_get_line_length(&(self->_message));
}

- (float)speed {
  return mavlink_msg_winch_status_get_speed(&(self->_message));
}

- (float)tension {
  return mavlink_msg_winch_status_get_tension(&(self->_message));
}

- (float)voltage {
  return mavlink_msg_winch_status_get_voltage(&(self->_message));
}

- (float)current {
  return mavlink_msg_winch_status_get_current(&(self->_message));
}

- (int16_t)temperature {
  return mavlink_msg_winch_status_get_temperature(&(self->_message));
}

- (MAV_WINCH_STATUS_FLAG)status {
  return mavlink_msg_winch_status_get_status(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeUsec=%lld, lineLength=%f, speed=%f, tension=%f, voltage=%f, current=%f, temperature=%d, status=%d", [super description], [self timeUsec], [self lineLength], [self speed], [self tension], [self voltage], [self current], [self temperature], [self status]];
}

@end
