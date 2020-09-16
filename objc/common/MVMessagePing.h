//
//  MVMessagePing.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a PING Mavlink message.

 @discussion A ping message either requesting or responding to a ping. This allows to measure the system latencies, including serial port, radio modem and UDP connections. The ping microservice is documented at https://mavlink.io/en/services/ping.html
 */
@interface MVMessagePing : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec seq:(uint32_t)seq targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! PING sequence
- (uint32_t)seq;

//! 0: request ping from all receiving systems. If greater than 0: message is a ping response and number is the system id of the requesting system
- (uint8_t)targetSystem;

//! 0: request ping from all receiving components. If greater than 0: message is a ping response and number is the component id of the requesting component.
- (uint8_t)targetComponent;

@end
