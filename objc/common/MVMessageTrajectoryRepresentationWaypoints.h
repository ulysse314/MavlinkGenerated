//
//  MVMessageTrajectoryRepresentationWaypoints.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a TRAJECTORY_REPRESENTATION_WAYPOINTS Mavlink message.

 @discussion Describe a trajectory using an array of up-to 5 waypoints in the local frame (MAV_FRAME_LOCAL_NED).
 */
@interface MVMessageTrajectoryRepresentationWaypoints : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec validPoints:(uint8_t)validPoints posX:(float *)posX posY:(float *)posY posZ:(float *)posZ velX:(float *)velX velY:(float *)velY velZ:(float *)velZ accX:(float *)accX accY:(float *)accY accZ:(float *)accZ posYaw:(float *)posYaw velYaw:(float *)velYaw command:(MAV_CMD *)command;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Number of valid points (up-to 5 waypoints are possible)
- (uint8_t)validPoints;

//! X-coordinate of waypoint, set to NaN if not being used
- (uint16_t)posX:(float *)pos_x;

//! Y-coordinate of waypoint, set to NaN if not being used
- (uint16_t)posY:(float *)pos_y;

//! Z-coordinate of waypoint, set to NaN if not being used
- (uint16_t)posZ:(float *)pos_z;

//! X-velocity of waypoint, set to NaN if not being used
- (uint16_t)velX:(float *)vel_x;

//! Y-velocity of waypoint, set to NaN if not being used
- (uint16_t)velY:(float *)vel_y;

//! Z-velocity of waypoint, set to NaN if not being used
- (uint16_t)velZ:(float *)vel_z;

//! X-acceleration of waypoint, set to NaN if not being used
- (uint16_t)accX:(float *)acc_x;

//! Y-acceleration of waypoint, set to NaN if not being used
- (uint16_t)accY:(float *)acc_y;

//! Z-acceleration of waypoint, set to NaN if not being used
- (uint16_t)accZ:(float *)acc_z;

//! Yaw angle, set to NaN if not being used
- (uint16_t)posYaw:(float *)pos_yaw;

//! Yaw rate, set to NaN if not being used
- (uint16_t)velYaw:(float *)vel_yaw;

//! Scheduled action for each waypoint, UINT16_MAX if not being used.
- (uint16_t)command:(uint16_t *)command;

@end
