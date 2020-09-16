//
//  MVMessageHilStateQuaternion.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a HIL_STATE_QUATERNION Mavlink message.

 @discussion Sent from simulation to autopilot, avoids in contrast to HIL_STATE singularities. This packet is useful for high throughput applications such as hardware in the loop simulations.
 */
@interface MVMessageHilStateQuaternion : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec attitudeQuaternion:(float *)attitudeQuaternion rollspeed:(float)rollspeed pitchspeed:(float)pitchspeed yawspeed:(float)yawspeed lat:(int32_t)lat lon:(int32_t)lon alt:(int32_t)alt vx:(int16_t)vx vy:(int16_t)vy vz:(int16_t)vz indAirspeed:(uint16_t)indAirspeed trueAirspeed:(uint16_t)trueAirspeed xacc:(int16_t)xacc yacc:(int16_t)yacc zacc:(int16_t)zacc;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Vehicle attitude expressed as normalized quaternion in w, x, y, z order (with 1 0 0 0 being the null-rotation)
- (uint16_t)attitudeQuaternion:(float *)attitude_quaternion;

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

//! Indicated airspeed
- (uint16_t)indAirspeed;

//! True airspeed
- (uint16_t)trueAirspeed;

//! X acceleration
- (int16_t)xacc;

//! Y acceleration
- (int16_t)yacc;

//! Z acceleration
- (int16_t)zacc;

@end
