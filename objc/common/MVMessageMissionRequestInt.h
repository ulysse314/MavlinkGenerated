//
//  MVMessageMissionRequestInt.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a MISSION_REQUEST_INT Mavlink message.

 @discussion Request the information of the mission item with the sequence number seq. The response of the system to this message should be a MISSION_ITEM_INT message. https://mavlink.io/en/services/mission.html
 */
@interface MVMessageMissionRequestInt : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent seq:(uint16_t)seq missionType:(MAV_MISSION_TYPE)missionType;

//! System ID
- (uint8_t)targetSystem;

//! Component ID
- (uint8_t)targetComponent;

//! Sequence
- (uint16_t)seq;

//! Mission type.
- (MAV_MISSION_TYPE)missionType;

@end
