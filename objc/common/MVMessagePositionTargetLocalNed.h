//
//  MVMessagePositionTargetLocalNed.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a POSITION_TARGET_LOCAL_NED Mavlink message.

 @discussion Reports the current commanded vehicle position, velocity, and acceleration as specified by the autopilot. This should match the commands sent in SET_POSITION_TARGET_LOCAL_NED if the vehicle is being controlled this way.
 */
@interface MVMessagePositionTargetLocalNed : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs coordinateFrame:(MAV_FRAME)coordinateFrame typeMask:(POSITION_TARGET_TYPEMASK)typeMask x:(float)x y:(float)y z:(float)z vx:(float)vx vy:(float)vy vz:(float)vz afx:(float)afx afy:(float)afy afz:(float)afz yaw:(float)yaw yawRate:(float)yawRate;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Valid options are: MAV_FRAME_LOCAL_NED = 1, MAV_FRAME_LOCAL_OFFSET_NED = 7, MAV_FRAME_BODY_NED = 8, MAV_FRAME_BODY_OFFSET_NED = 9
- (MAV_FRAME)coordinateFrame;

//! Bitmap to indicate which dimensions should be ignored by the vehicle.
- (POSITION_TARGET_TYPEMASK)typeMask;

//! X Position in NED frame
- (float)x;

//! Y Position in NED frame
- (float)y;

//! Z Position in NED frame (note, altitude is negative in NED)
- (float)z;

//! X velocity in NED frame
- (float)vx;

//! Y velocity in NED frame
- (float)vy;

//! Z velocity in NED frame
- (float)vz;

//! X acceleration or force (if bit 10 of type_mask is set) in NED frame in meter / s^2 or N
- (float)afx;

//! Y acceleration or force (if bit 10 of type_mask is set) in NED frame in meter / s^2 or N
- (float)afy;

//! Z acceleration or force (if bit 10 of type_mask is set) in NED frame in meter / s^2 or N
- (float)afz;

//! yaw setpoint
- (float)yaw;

//! yaw rate setpoint
- (float)yawRate;

@end
