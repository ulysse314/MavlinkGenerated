//
//  MVMessageSimState.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a SIM_STATE Mavlink message.

 @discussion Status of simulation environment, if used
 */
@interface MVMessageSimState : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId q1:(float)q1 q2:(float)q2 q3:(float)q3 q4:(float)q4 roll:(float)roll pitch:(float)pitch yaw:(float)yaw xacc:(float)xacc yacc:(float)yacc zacc:(float)zacc xgyro:(float)xgyro ygyro:(float)ygyro zgyro:(float)zgyro lat:(float)lat lon:(float)lon alt:(float)alt stdDevHorz:(float)stdDevHorz stdDevVert:(float)stdDevVert vn:(float)vn ve:(float)ve vd:(float)vd;

//! True attitude quaternion component 1, w (1 in null-rotation)
- (float)q1;

//! True attitude quaternion component 2, x (0 in null-rotation)
- (float)q2;

//! True attitude quaternion component 3, y (0 in null-rotation)
- (float)q3;

//! True attitude quaternion component 4, z (0 in null-rotation)
- (float)q4;

//! Attitude roll expressed as Euler angles, not recommended except for human-readable outputs
- (float)roll;

//! Attitude pitch expressed as Euler angles, not recommended except for human-readable outputs
- (float)pitch;

//! Attitude yaw expressed as Euler angles, not recommended except for human-readable outputs
- (float)yaw;

//! X acceleration
- (float)xacc;

//! Y acceleration
- (float)yacc;

//! Z acceleration
- (float)zacc;

//! Angular speed around X axis
- (float)xgyro;

//! Angular speed around Y axis
- (float)ygyro;

//! Angular speed around Z axis
- (float)zgyro;

//! Latitude
- (float)lat;

//! Longitude
- (float)lon;

//! Altitude
- (float)alt;

//! Horizontal position standard deviation
- (float)stdDevHorz;

//! Vertical position standard deviation
- (float)stdDevVert;

//! True velocity in north direction in earth-fixed NED frame
- (float)vn;

//! True velocity in east direction in earth-fixed NED frame
- (float)ve;

//! True velocity in down direction in earth-fixed NED frame
- (float)vd;

@end
