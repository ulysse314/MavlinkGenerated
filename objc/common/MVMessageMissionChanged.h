//
//  MVMessageMissionChanged.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a MISSION_CHANGED Mavlink message.

 @discussion A broadcast message to notify any ground station or SDK if a mission, geofence or safe points have changed on the vehicle.
 */
@interface MVMessageMissionChanged : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId startIndex:(int16_t)startIndex endIndex:(int16_t)endIndex originSysid:(uint8_t)originSysid originCompid:(MAV_COMPONENT)originCompid missionType:(MAV_MISSION_TYPE)missionType;

//! Start index for partial mission change (-1 for all items).
- (int16_t)startIndex;

//! End index of a partial mission change. -1 is a synonym for the last mission item (i.e. selects all items from start_index). Ignore field if start_index=-1.
- (int16_t)endIndex;

//! System ID of the author of the new mission.
- (uint8_t)originSysid;

//! Compnent ID of the author of the new mission.
- (MAV_COMPONENT)originCompid;

//! Mission type.
- (MAV_MISSION_TYPE)missionType;

@end
