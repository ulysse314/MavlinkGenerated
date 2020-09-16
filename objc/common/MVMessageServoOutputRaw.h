//
//  MVMessageServoOutputRaw.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a SERVO_OUTPUT_RAW Mavlink message.

 @discussion Superseded by ACTUATOR_OUTPUT_STATUS. The RAW values of the servo outputs (for RC input from the remote, use the RC_CHANNELS messages). The standard PPM modulation is as follows: 1000 microseconds: 0%, 2000 microseconds: 100%.
 */
@interface MVMessageServoOutputRaw : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint32_t)timeUsec port:(uint8_t)port servo1Raw:(uint16_t)servo1Raw servo2Raw:(uint16_t)servo2Raw servo3Raw:(uint16_t)servo3Raw servo4Raw:(uint16_t)servo4Raw servo5Raw:(uint16_t)servo5Raw servo6Raw:(uint16_t)servo6Raw servo7Raw:(uint16_t)servo7Raw servo8Raw:(uint16_t)servo8Raw servo9Raw:(uint16_t)servo9Raw servo10Raw:(uint16_t)servo10Raw servo11Raw:(uint16_t)servo11Raw servo12Raw:(uint16_t)servo12Raw servo13Raw:(uint16_t)servo13Raw servo14Raw:(uint16_t)servo14Raw servo15Raw:(uint16_t)servo15Raw servo16Raw:(uint16_t)servo16Raw;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint32_t)timeUsec;

//! Servo output port (set of 8 outputs = 1 port). Flight stacks running on Pixhawk should use: 0 = MAIN, 1 = AUX.
- (uint8_t)port;

//! Servo output 1 value
- (uint16_t)servo1Raw;

//! Servo output 2 value
- (uint16_t)servo2Raw;

//! Servo output 3 value
- (uint16_t)servo3Raw;

//! Servo output 4 value
- (uint16_t)servo4Raw;

//! Servo output 5 value
- (uint16_t)servo5Raw;

//! Servo output 6 value
- (uint16_t)servo6Raw;

//! Servo output 7 value
- (uint16_t)servo7Raw;

//! Servo output 8 value
- (uint16_t)servo8Raw;

//! Servo output 9 value
- (uint16_t)servo9Raw;

//! Servo output 10 value
- (uint16_t)servo10Raw;

//! Servo output 11 value
- (uint16_t)servo11Raw;

//! Servo output 12 value
- (uint16_t)servo12Raw;

//! Servo output 13 value
- (uint16_t)servo13Raw;

//! Servo output 14 value
- (uint16_t)servo14Raw;

//! Servo output 15 value
- (uint16_t)servo15Raw;

//! Servo output 16 value
- (uint16_t)servo16Raw;

@end
