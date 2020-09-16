//
//  MVMessageMissionItemInt.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a MISSION_ITEM_INT Mavlink message.

 @discussion Message encoding a mission item. This message is emitted to announce
                the presence of a mission item and to set a mission item on the system. The mission item can be either in x, y, z meters (type: LOCAL) or x:lat, y:lon, z:altitude. Local frame is Z-down, right handed (NED), global frame is Z-up, right handed (ENU). NaN or INT32_MAX may be used in float/integer params (respectively) to indicate optional/default values (e.g. to use the component's current latitude, yaw rather than a specific value). See also https://mavlink.io/en/services/mission.html.
 */
@interface MVMessageMissionItemInt : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent seq:(uint16_t)seq frame:(MAV_FRAME)frame command:(MAV_CMD)command current:(uint8_t)current autocontinue:(uint8_t)autocontinue param1:(float)param1 param2:(float)param2 param3:(float)param3 param4:(float)param4 x:(int32_t)x y:(int32_t)y z:(float)z missionType:(MAV_MISSION_TYPE)missionType;

//! System ID
- (uint8_t)targetSystem;

//! Component ID
- (uint8_t)targetComponent;

//! Waypoint ID (sequence number). Starts at zero. Increases monotonically for each waypoint, no gaps in the sequence (0,1,2,3,4).
- (uint16_t)seq;

//! The coordinate system of the waypoint.
- (MAV_FRAME)frame;

//! The scheduled action for the waypoint.
- (MAV_CMD)command;

//! false:0, true:1
- (uint8_t)current;

//! Autocontinue to next waypoint
- (uint8_t)autocontinue;

//! PARAM1, see MAV_CMD enum
- (float)param1;

//! PARAM2, see MAV_CMD enum
- (float)param2;

//! PARAM3, see MAV_CMD enum
- (float)param3;

//! PARAM4, see MAV_CMD enum
- (float)param4;

//! PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7
- (int32_t)x;

//! PARAM6 / y position: local: x position in meters * 1e4, global: longitude in degrees *10^7
- (int32_t)y;

//! PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame.
- (float)z;

//! Mission type.
- (MAV_MISSION_TYPE)missionType;

@end
