//
//  MVMessageServoOutputRaw.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageServoOutputRaw.h"

@implementation MVMessageServoOutputRaw

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint32_t)timeUsec port:(uint8_t)port servo1Raw:(uint16_t)servo1Raw servo2Raw:(uint16_t)servo2Raw servo3Raw:(uint16_t)servo3Raw servo4Raw:(uint16_t)servo4Raw servo5Raw:(uint16_t)servo5Raw servo6Raw:(uint16_t)servo6Raw servo7Raw:(uint16_t)servo7Raw servo8Raw:(uint16_t)servo8Raw servo9Raw:(uint16_t)servo9Raw servo10Raw:(uint16_t)servo10Raw servo11Raw:(uint16_t)servo11Raw servo12Raw:(uint16_t)servo12Raw servo13Raw:(uint16_t)servo13Raw servo14Raw:(uint16_t)servo14Raw servo15Raw:(uint16_t)servo15Raw servo16Raw:(uint16_t)servo16Raw {
  if ((self = [super init])) {
    mavlink_msg_servo_output_raw_pack(systemId, componentId, &(self->_message), timeUsec, port, servo1Raw, servo2Raw, servo3Raw, servo4Raw, servo5Raw, servo6Raw, servo7Raw, servo8Raw, servo9Raw, servo10Raw, servo11Raw, servo12Raw, servo13Raw, servo14Raw, servo15Raw, servo16Raw);
  }
  return self;
}

- (uint32_t)timeUsec {
  return mavlink_msg_servo_output_raw_get_time_usec(&(self->_message));
}

- (uint8_t)port {
  return mavlink_msg_servo_output_raw_get_port(&(self->_message));
}

- (uint16_t)servo1Raw {
  return mavlink_msg_servo_output_raw_get_servo1_raw(&(self->_message));
}

- (uint16_t)servo2Raw {
  return mavlink_msg_servo_output_raw_get_servo2_raw(&(self->_message));
}

- (uint16_t)servo3Raw {
  return mavlink_msg_servo_output_raw_get_servo3_raw(&(self->_message));
}

- (uint16_t)servo4Raw {
  return mavlink_msg_servo_output_raw_get_servo4_raw(&(self->_message));
}

- (uint16_t)servo5Raw {
  return mavlink_msg_servo_output_raw_get_servo5_raw(&(self->_message));
}

- (uint16_t)servo6Raw {
  return mavlink_msg_servo_output_raw_get_servo6_raw(&(self->_message));
}

- (uint16_t)servo7Raw {
  return mavlink_msg_servo_output_raw_get_servo7_raw(&(self->_message));
}

- (uint16_t)servo8Raw {
  return mavlink_msg_servo_output_raw_get_servo8_raw(&(self->_message));
}

- (uint16_t)servo9Raw {
  return mavlink_msg_servo_output_raw_get_servo9_raw(&(self->_message));
}

- (uint16_t)servo10Raw {
  return mavlink_msg_servo_output_raw_get_servo10_raw(&(self->_message));
}

- (uint16_t)servo11Raw {
  return mavlink_msg_servo_output_raw_get_servo11_raw(&(self->_message));
}

- (uint16_t)servo12Raw {
  return mavlink_msg_servo_output_raw_get_servo12_raw(&(self->_message));
}

- (uint16_t)servo13Raw {
  return mavlink_msg_servo_output_raw_get_servo13_raw(&(self->_message));
}

- (uint16_t)servo14Raw {
  return mavlink_msg_servo_output_raw_get_servo14_raw(&(self->_message));
}

- (uint16_t)servo15Raw {
  return mavlink_msg_servo_output_raw_get_servo15_raw(&(self->_message));
}

- (uint16_t)servo16Raw {
  return mavlink_msg_servo_output_raw_get_servo16_raw(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeUsec=%d, port=%d, servo1Raw=%d, servo2Raw=%d, servo3Raw=%d, servo4Raw=%d, servo5Raw=%d, servo6Raw=%d, servo7Raw=%d, servo8Raw=%d, servo9Raw=%d, servo10Raw=%d, servo11Raw=%d, servo12Raw=%d, servo13Raw=%d, servo14Raw=%d, servo15Raw=%d, servo16Raw=%d", [super description], [self timeUsec], [self port], [self servo1Raw], [self servo2Raw], [self servo3Raw], [self servo4Raw], [self servo5Raw], [self servo6Raw], [self servo7Raw], [self servo8Raw], [self servo9Raw], [self servo10Raw], [self servo11Raw], [self servo12Raw], [self servo13Raw], [self servo14Raw], [self servo15Raw], [self servo16Raw]];
}

@end
