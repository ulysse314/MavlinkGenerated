//
//  MVMessageMissionRequestPartialList.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a MISSION_REQUEST_PARTIAL_LIST Mavlink message.

 @discussion Request a partial list of mission items from the system/component. https://mavlink.io/en/services/mission.html. If start and end index are the same, just send one waypoint.
 */
@interface MVMessageMissionRequestPartialList : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent startIndex:(int16_t)startIndex endIndex:(int16_t)endIndex missionType:(MAV_MISSION_TYPE)missionType;

//! System ID
- (uint8_t)targetSystem;

//! Component ID
- (uint8_t)targetComponent;

//! Start index
- (int16_t)startIndex;

//! End index, -1 by default (-1: send list to end). Else a valid index of the list
- (int16_t)endIndex;

//! Mission type.
- (MAV_MISSION_TYPE)missionType;

@end
