//
//  MVMessageActuatorOutputStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a ACTUATOR_OUTPUT_STATUS Mavlink message.

 @discussion The raw values of the actuator outputs (e.g. on Pixhawk, from MAIN, AUX ports). This message supersedes SERVO_OUTPUT_RAW.
 */
@interface MVMessageActuatorOutputStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec active:(uint32_t)active actuator:(float *)actuator;

//! Timestamp (since system boot).
- (uint64_t)timeUsec;

//! Active outputs
- (uint32_t)active;

//! Servo / motor output array values. Zero values indicate unused channels.
- (uint16_t)actuator:(float *)actuator;

@end
