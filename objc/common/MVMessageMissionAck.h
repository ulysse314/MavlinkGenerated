//
//  MVMessageMissionAck.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a MISSION_ACK Mavlink message.

 @discussion Acknowledgment message during waypoint handling. The type field states if this message is a positive ack (type=0) or if an error happened (type=non-zero).
 */
@interface MVMessageMissionAck : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent type:(MAV_MISSION_RESULT)type missionType:(MAV_MISSION_TYPE)missionType;

//! System ID
- (uint8_t)targetSystem;

//! Component ID
- (uint8_t)targetComponent;

//! Mission result.
- (MAV_MISSION_RESULT)type;

//! Mission type.
- (MAV_MISSION_TYPE)missionType;

@end
