//
//  MVMessageScaledImu3.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a SCALED_IMU3 Mavlink message.

 @discussion The RAW IMU readings for 3rd 9DOF sensor setup. This message should contain the scaled values to the described units
 */
@interface MVMessageScaledImu3 : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs xacc:(int16_t)xacc yacc:(int16_t)yacc zacc:(int16_t)zacc xgyro:(int16_t)xgyro ygyro:(int16_t)ygyro zgyro:(int16_t)zgyro xmag:(int16_t)xmag ymag:(int16_t)ymag zmag:(int16_t)zmag temperature:(int16_t)temperature;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! X acceleration
- (int16_t)xacc;

//! Y acceleration
- (int16_t)yacc;

//! Z acceleration
- (int16_t)zacc;

//! Angular speed around X axis
- (int16_t)xgyro;

//! Angular speed around Y axis
- (int16_t)ygyro;

//! Angular speed around Z axis
- (int16_t)zgyro;

//! X Magnetic field
- (int16_t)xmag;

//! Y Magnetic field
- (int16_t)ymag;

//! Z Magnetic field
- (int16_t)zmag;

//! Temperature, 0: IMU does not provide temperature values. If the IMU is at 0C it must send 1 (0.01C).
- (int16_t)temperature;

@end
