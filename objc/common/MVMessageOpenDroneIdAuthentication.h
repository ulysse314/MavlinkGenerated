//
//  MVMessageOpenDroneIdAuthentication.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a OPEN_DRONE_ID_AUTHENTICATION Mavlink message.

 @discussion Data for filling the OpenDroneID Authentication message. The Authentication Message defines a field that can provide a means of authenticity for the identity of the UAS (Unmanned Aircraft System). The Authentication message can have two different formats. Five data pages are supported. For data page 0, the fields PageCount, Length and TimeStamp are present and AuthData is only 17 bytes. For data page 1 through 4, PageCount, Length and TimeStamp are not present and the size of AuthData is 23 bytes.
 */
@interface MVMessageOpenDroneIdAuthentication : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent idOrMac:(uint8_t *)idOrMac authenticationType:(MAV_ODID_AUTH_TYPE)authenticationType dataPage:(uint8_t)dataPage pageCount:(uint8_t)pageCount length:(uint8_t)length timestamp:(uint32_t)timestamp authenticationData:(uint8_t *)authenticationData;

//! System ID (0 for broadcast).
- (uint8_t)targetSystem;

//! Component ID (0 for broadcast).
- (uint8_t)targetComponent;

//! Only used for drone ID data received from other UAs. See detailed description at https://mavlink.io/en/services/opendroneid.html. 
- (uint16_t)idOrMac:(uint8_t *)id_or_mac;

//! Indicates the type of authentication.
- (MAV_ODID_AUTH_TYPE)authenticationType;

//! Allowed range is 0 - 4.
- (uint8_t)dataPage;

//! This field is only present for page 0. Allowed range is 0 - 5.
- (uint8_t)pageCount;

//! This field is only present for page 0. Total bytes of authentication_data from all data pages. Allowed range is 0 - 109 (17 + 23*4).
- (uint8_t)length;

//! This field is only present for page 0. 32 bit Unix Timestamp in seconds since 00:00:00 01/01/2019.
- (uint32_t)timestamp;

//! Opaque authentication data. For page 0, the size is only 17 bytes. For other pages, the size is 23 bytes. Shall be filled with nulls in the unused portion of the field.
- (uint16_t)authenticationData:(uint8_t *)authentication_data;

@end
