//
//  MVMessageGps2Raw.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a GPS2_RAW Mavlink message.

 @discussion Second GPS data.
 */
@interface MVMessageGps2Raw : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec fixType:(GPS_FIX_TYPE)fixType lat:(int32_t)lat lon:(int32_t)lon alt:(int32_t)alt eph:(uint16_t)eph epv:(uint16_t)epv vel:(uint16_t)vel cog:(uint16_t)cog satellitesVisible:(uint8_t)satellitesVisible dgpsNumch:(uint8_t)dgpsNumch dgpsAge:(uint32_t)dgpsAge yaw:(uint16_t)yaw;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! GPS fix type.
- (GPS_FIX_TYPE)fixType;

//! Latitude (WGS84)
- (int32_t)lat;

//! Longitude (WGS84)
- (int32_t)lon;

//! Altitude (MSL). Positive for up.
- (int32_t)alt;

//! GPS HDOP horizontal dilution of position. If unknown, set to: UINT16_MAX
- (uint16_t)eph;

//! GPS VDOP vertical dilution of position. If unknown, set to: UINT16_MAX
- (uint16_t)epv;

//! GPS ground speed. If unknown, set to: UINT16_MAX
- (uint16_t)vel;

//! Course over ground (NOT heading, but direction of movement): 0.0..359.99 degrees. If unknown, set to: UINT16_MAX
- (uint16_t)cog;

//! Number of satellites visible. If unknown, set to 255
- (uint8_t)satellitesVisible;

//! Number of DGPS satellites
- (uint8_t)dgpsNumch;

//! Age of DGPS info
- (uint32_t)dgpsAge;

//! Yaw in earth frame from north. Use 0 if this GPS does not provide yaw. Use 65535 if this GPS is configured to provide yaw and is currently unable to provide it. Use 36000 for north.
- (uint16_t)yaw;

@end
