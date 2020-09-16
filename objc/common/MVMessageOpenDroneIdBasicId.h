//
//  MVMessageOpenDroneIdBasicId.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a OPEN_DRONE_ID_BASIC_ID Mavlink message.

 @discussion Data for filling the OpenDroneID Basic ID message. This and the below messages are primarily meant for feeding data to/from an OpenDroneID implementation. E.g. https://github.com/opendroneid/opendroneid-core-c. These messages are compatible with the ASTM Remote ID standard at https://www.astm.org/Standards/F3411.htm and the ASD-STAN Direct Remote ID standard. The usage of these messages is documented at https://mavlink.io/en/services/opendroneid.html.
 */
@interface MVMessageOpenDroneIdBasicId : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent idOrMac:(uint8_t *)idOrMac idType:(MAV_ODID_ID_TYPE)idType uaType:(MAV_ODID_UA_TYPE)uaType uasId:(uint8_t *)uasId;

//! System ID (0 for broadcast).
- (uint8_t)targetSystem;

//! Component ID (0 for broadcast).
- (uint8_t)targetComponent;

//! Only used for drone ID data received from other UAs. See detailed description at https://mavlink.io/en/services/opendroneid.html. 
- (uint16_t)idOrMac:(uint8_t *)id_or_mac;

//! Indicates the format for the uas_id field of this message.
- (MAV_ODID_ID_TYPE)idType;

//! Indicates the type of UA (Unmanned Aircraft).
- (MAV_ODID_UA_TYPE)uaType;

//! UAS (Unmanned Aircraft System) ID following the format specified by id_type. Shall be filled with nulls in the unused portion of the field.
- (uint16_t)uasId:(uint8_t *)uas_id;

@end
