//
//  MVMessagePositionTargetGlobalInt.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a POSITION_TARGET_GLOBAL_INT Mavlink message.

 @discussion Reports the current commanded vehicle position, velocity, and acceleration as specified by the autopilot. This should match the commands sent in SET_POSITION_TARGET_GLOBAL_INT if the vehicle is being controlled this way.
 */
@interface MVMessagePositionTargetGlobalInt : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs coordinateFrame:(MAV_FRAME)coordinateFrame typeMask:(POSITION_TARGET_TYPEMASK)typeMask latInt:(int32_t)latInt lonInt:(int32_t)lonInt alt:(float)alt vx:(float)vx vy:(float)vy vz:(float)vz afx:(float)afx afy:(float)afy afz:(float)afz yaw:(float)yaw yawRate:(float)yawRate;

//! Timestamp (time since system boot). The rationale for the timestamp in the setpoint is to allow the system to compensate for the transport delay of the setpoint. This allows the system to compensate processing latency.
- (uint32_t)timeBootMs;

//! Valid options are: MAV_FRAME_GLOBAL_INT = 5, MAV_FRAME_GLOBAL_RELATIVE_ALT_INT = 6, MAV_FRAME_GLOBAL_TERRAIN_ALT_INT = 11
- (MAV_FRAME)coordinateFrame;

//! Bitmap to indicate which dimensions should be ignored by the vehicle.
- (POSITION_TARGET_TYPEMASK)typeMask;

//! X Position in WGS84 frame
- (int32_t)latInt;

//! Y Position in WGS84 frame
- (int32_t)lonInt;

//! Altitude (MSL, AGL or relative to home altitude, depending on frame)
- (float)alt;

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
