//
//  MVMessageOpenDroneIdLocation.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a OPEN_DRONE_ID_LOCATION Mavlink message.

 @discussion Data for filling the OpenDroneID Location message. The float data types are 32-bit IEEE 754. The Location message provides the location, altitude, direction and speed of the aircraft.
 */
@interface MVMessageOpenDroneIdLocation : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent idOrMac:(uint8_t *)idOrMac status:(MAV_ODID_STATUS)status direction:(uint16_t)direction speedHorizontal:(uint16_t)speedHorizontal speedVertical:(int16_t)speedVertical latitude:(int32_t)latitude longitude:(int32_t)longitude altitudeBarometric:(float)altitudeBarometric altitudeGeodetic:(float)altitudeGeodetic heightReference:(MAV_ODID_HEIGHT_REF)heightReference height:(float)height horizontalAccuracy:(MAV_ODID_HOR_ACC)horizontalAccuracy verticalAccuracy:(MAV_ODID_VER_ACC)verticalAccuracy barometerAccuracy:(MAV_ODID_VER_ACC)barometerAccuracy speedAccuracy:(MAV_ODID_SPEED_ACC)speedAccuracy timestamp:(float)timestamp timestampAccuracy:(MAV_ODID_TIME_ACC)timestampAccuracy;

//! System ID (0 for broadcast).
- (uint8_t)targetSystem;

//! Component ID (0 for broadcast).
- (uint8_t)targetComponent;

//! Only used for drone ID data received from other UAs. See detailed description at https://mavlink.io/en/services/opendroneid.html. 
- (uint16_t)idOrMac:(uint8_t *)id_or_mac;

//! Indicates whether the unmanned aircraft is on the ground or in the air.
- (MAV_ODID_STATUS)status;

//! Direction over ground (not heading, but direction of movement) measured clockwise from true North: 0 - 35999 centi-degrees. If unknown: 36100 centi-degrees.
- (uint16_t)direction;

//! Ground speed. Positive only. If unknown: 25500 cm/s. If speed is larger than 25425 cm/s, use 25425 cm/s.
- (uint16_t)speedHorizontal;

//! The vertical speed. Up is positive. If unknown: 6300 cm/s. If speed is larger than 6200 cm/s, use 6200 cm/s. If lower than -6200 cm/s, use -6200 cm/s.
- (int16_t)speedVertical;

//! Current latitude of the unmanned aircraft. If unknown: 0 (both Lat/Lon).
- (int32_t)latitude;

//! Current longitude of the unmanned aircraft. If unknown: 0 (both Lat/Lon).
- (int32_t)longitude;

//! The altitude calculated from the barometric pressue. Reference is against 29.92inHg or 1013.2mb. If unknown: -1000 m.
- (float)altitudeBarometric;

//! The geodetic altitude as defined by WGS84. If unknown: -1000 m.
- (float)altitudeGeodetic;

//! Indicates the reference point for the height field.
- (MAV_ODID_HEIGHT_REF)heightReference;

//! The current height of the unmanned aircraft above the take-off location or the ground as indicated by height_reference. If unknown: -1000 m.
- (float)height;

//! The accuracy of the horizontal position.
- (MAV_ODID_HOR_ACC)horizontalAccuracy;

//! The accuracy of the vertical position.
- (MAV_ODID_VER_ACC)verticalAccuracy;

//! The accuracy of the barometric altitude.
- (MAV_ODID_VER_ACC)barometerAccuracy;

//! The accuracy of the horizontal and vertical speed.
- (MAV_ODID_SPEED_ACC)speedAccuracy;

//! Seconds after the full hour with reference to UTC time. Typically the GPS outputs a time-of-week value in milliseconds. First convert that to UTC and then convert for this field using ((float) (time_week_ms % (60*60*1000))) / 1000.
- (float)timestamp;

//! The accuracy of the timestamps.
- (MAV_ODID_TIME_ACC)timestampAccuracy;

@end
