//
//  MVMessageOpenDroneIdSystem.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a OPEN_DRONE_ID_SYSTEM Mavlink message.

 @discussion Data for filling the OpenDroneID System message. The System Message contains general system information including the operator location and possible aircraft group information.
 */
@interface MVMessageOpenDroneIdSystem : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent idOrMac:(uint8_t *)idOrMac operatorLocationType:(MAV_ODID_OPERATOR_LOCATION_TYPE)operatorLocationType classificationType:(MAV_ODID_CLASSIFICATION_TYPE)classificationType operatorLatitude:(int32_t)operatorLatitude operatorLongitude:(int32_t)operatorLongitude areaCount:(uint16_t)areaCount areaRadius:(uint16_t)areaRadius areaCeiling:(float)areaCeiling areaFloor:(float)areaFloor categoryEu:(MAV_ODID_CATEGORY_EU)categoryEu classEu:(MAV_ODID_CLASS_EU)classEu;

//! System ID (0 for broadcast).
- (uint8_t)targetSystem;

//! Component ID (0 for broadcast).
- (uint8_t)targetComponent;

//! Only used for drone ID data received from other UAs. See detailed description at https://mavlink.io/en/services/opendroneid.html. 
- (uint16_t)idOrMac:(uint8_t *)id_or_mac;

//! Specifies the operator location type.
- (MAV_ODID_OPERATOR_LOCATION_TYPE)operatorLocationType;

//! Specifies the classification type of the UA.
- (MAV_ODID_CLASSIFICATION_TYPE)classificationType;

//! Latitude of the operator. If unknown: 0 (both Lat/Lon).
- (int32_t)operatorLatitude;

//! Longitude of the operator. If unknown: 0 (both Lat/Lon).
- (int32_t)operatorLongitude;

//! Number of aircraft in the area, group or formation (default 1).
- (uint16_t)areaCount;

//! Radius of the cylindrical area of the group or formation (default 0).
- (uint16_t)areaRadius;

//! Area Operations Ceiling relative to WGS84. If unknown: -1000 m.
- (float)areaCeiling;

//! Area Operations Floor relative to WGS84. If unknown: -1000 m.
- (float)areaFloor;

//! When classification_type is MAV_ODID_CLASSIFICATION_TYPE_EU, specifies the category of the UA.
- (MAV_ODID_CATEGORY_EU)categoryEu;

//! When classification_type is MAV_ODID_CLASSIFICATION_TYPE_EU, specifies the class of the UA.
- (MAV_ODID_CLASS_EU)classEu;

@end
