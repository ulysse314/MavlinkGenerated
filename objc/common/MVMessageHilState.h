//
//  MVMessageHilState.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a HIL_STATE Mavlink message.

 @discussion Sent from simulation to autopilot. This packet is useful for high throughput applications such as hardware in the loop simulations.
 */
@interface MVMessageHilState : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec roll:(float)roll pitch:(float)pitch yaw:(float)yaw rollspeed:(float)rollspeed pitchspeed:(float)pitchspeed yawspeed:(float)yawspeed lat:(int32_t)lat lon:(int32_t)lon alt:(int32_t)alt vx:(int16_t)vx vy:(int16_t)vy vz:(int16_t)vz xacc:(int16_t)xacc yacc:(int16_t)yacc zacc:(int16_t)zacc;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Roll angle
- (float)roll;

//! Pitch angle
- (float)pitch;

//! Yaw angle
- (float)yaw;

//! Body frame roll / phi angular speed
- (float)rollspeed;

//! Body frame pitch / theta angular speed
- (float)pitchspeed;

//! Body frame yaw / psi angular speed
- (float)yawspeed;

//! Latitude
- (int32_t)lat;

//! Longitude
- (int32_t)lon;

//! Altitude
- (int32_t)alt;

//! Ground X Speed (Latitude)
- (int16_t)vx;

//! Ground Y Speed (Longitude)
- (int16_t)vy;

//! Ground Z Speed (Altitude)
- (int16_t)vz;

//! X acceleration
- (int16_t)xacc;

//! Y acceleration
- (int16_t)yacc;

//! Z acceleration
- (int16_t)zacc;

@end
