//
//  MVMessageAutopilotVersion.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a AUTOPILOT_VERSION Mavlink message.

 @discussion Version and capability of autopilot software. This should be emitted in response to a request with MAV_CMD_REQUEST_MESSAGE.
 */
@interface MVMessageAutopilotVersion : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId capabilities:(MAV_PROTOCOL_CAPABILITY)capabilities flightSwVersion:(uint32_t)flightSwVersion middlewareSwVersion:(uint32_t)middlewareSwVersion osSwVersion:(uint32_t)osSwVersion boardVersion:(uint32_t)boardVersion flightCustomVersion:(uint8_t *)flightCustomVersion middlewareCustomVersion:(uint8_t *)middlewareCustomVersion osCustomVersion:(uint8_t *)osCustomVersion vendorId:(uint16_t)vendorId productId:(uint16_t)productId uid:(uint64_t)uid uid2:(uint8_t *)uid2;

//! Bitmap of capabilities
- (MAV_PROTOCOL_CAPABILITY)capabilities;

//! Firmware version number
- (uint32_t)flightSwVersion;

//! Middleware version number
- (uint32_t)middlewareSwVersion;

//! Operating system version number
- (uint32_t)osSwVersion;

//! HW / board version (last 8 bytes should be silicon ID, if any)
- (uint32_t)boardVersion;

//! Custom version field, commonly the first 8 bytes of the git hash. This is not an unique identifier, but should allow to identify the commit using the main version number even for very large code bases.
- (uint16_t)flightCustomVersion:(uint8_t *)flight_custom_version;

//! Custom version field, commonly the first 8 bytes of the git hash. This is not an unique identifier, but should allow to identify the commit using the main version number even for very large code bases.
- (uint16_t)middlewareCustomVersion:(uint8_t *)middleware_custom_version;

//! Custom version field, commonly the first 8 bytes of the git hash. This is not an unique identifier, but should allow to identify the commit using the main version number even for very large code bases.
- (uint16_t)osCustomVersion:(uint8_t *)os_custom_version;

//! ID of the board vendor
- (uint16_t)vendorId;

//! ID of the product
- (uint16_t)productId;

//! UID if provided by hardware (see uid2)
- (uint64_t)uid;

//! UID if provided by hardware (supersedes the uid field. If this is non-zero, use this field, otherwise use uid)
- (uint16_t)uid2:(uint8_t *)uid2;

@end
