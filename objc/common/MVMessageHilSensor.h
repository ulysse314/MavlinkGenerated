//
//  MVMessageHilSensor.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a HIL_SENSOR Mavlink message.

 @discussion The IMU readings in SI units in NED body frame
 */
@interface MVMessageHilSensor : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec xacc:(float)xacc yacc:(float)yacc zacc:(float)zacc xgyro:(float)xgyro ygyro:(float)ygyro zgyro:(float)zgyro xmag:(float)xmag ymag:(float)ymag zmag:(float)zmag absPressure:(float)absPressure diffPressure:(float)diffPressure pressureAlt:(float)pressureAlt temperature:(float)temperature fieldsUpdated:(uint32_t)fieldsUpdated id:(uint8_t)id;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! X acceleration
- (float)xacc;

//! Y acceleration
- (float)yacc;

//! Z acceleration
- (float)zacc;

//! Angular speed around X axis in body frame
- (float)xgyro;

//! Angular speed around Y axis in body frame
- (float)ygyro;

//! Angular speed around Z axis in body frame
- (float)zgyro;

//! X Magnetic field
- (float)xmag;

//! Y Magnetic field
- (float)ymag;

//! Z Magnetic field
- (float)zmag;

//! Absolute pressure
- (float)absPressure;

//! Differential pressure (airspeed)
- (float)diffPressure;

//! Altitude calculated from pressure
- (float)pressureAlt;

//! Temperature
- (float)temperature;

//! Bitmap for fields that have updated since last message, bit 0 = xacc, bit 12: temperature, bit 31: full reset of attitude/position/velocities/etc was performed in sim.
- (uint32_t)fieldsUpdated;

//! Sensor ID (zero indexed). Used for multiple sensor inputs
- (uint8_t)id;

@end
