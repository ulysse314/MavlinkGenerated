//
//  MVMessageOpenDroneIdSelfId.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a OPEN_DRONE_ID_SELF_ID Mavlink message.

 @discussion Data for filling the OpenDroneID Self ID message. The Self ID Message is an opportunity for the operator to (optionally) declare their identity and purpose of the flight. This message can provide additional information that could reduce the threat profile of a UA (Unmanned Aircraft) flying in a particular area or manner.
 */
@interface MVMessageOpenDroneIdSelfId : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent idOrMac:(uint8_t *)idOrMac descriptionType:(MAV_ODID_DESC_TYPE)descriptionType description:(char *)description;

//! System ID (0 for broadcast).
- (uint8_t)targetSystem;

//! Component ID (0 for broadcast).
- (uint8_t)targetComponent;

//! Only used for drone ID data received from other UAs. See detailed description at https://mavlink.io/en/services/opendroneid.html. 
- (uint16_t)idOrMac:(uint8_t *)id_or_mac;

//! Indicates the type of the description field.
- (MAV_ODID_DESC_TYPE)descriptionType;

//! Text description or numeric value expressed as ASCII characters. Shall be filled with nulls in the unused portion of the field.
- (NSString *)description;

@end
