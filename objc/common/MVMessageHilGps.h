//
//  MVMessageHilGps.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a HIL_GPS Mavlink message.

 @discussion The global position, as returned by the Global Positioning System (GPS). This is
                 NOT the global position estimate of the sytem, but rather a RAW sensor value. See message GLOBAL_POSITION for the global position estimate.
 */
@interface MVMessageHilGps : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec fixType:(uint8_t)fixType lat:(int32_t)lat lon:(int32_t)lon alt:(int32_t)alt eph:(uint16_t)eph epv:(uint16_t)epv vel:(uint16_t)vel vn:(int16_t)vn ve:(int16_t)ve vd:(int16_t)vd cog:(uint16_t)cog satellitesVisible:(uint8_t)satellitesVisible id:(uint8_t)id yaw:(uint16_t)yaw;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! 0-1: no fix, 2: 2D fix, 3: 3D fix. Some applications will not use the value of this field unless it is at least two, so always correctly fill in the fix.
- (uint8_t)fixType;

//! Latitude (WGS84)
- (int32_t)lat;

//! Longitude (WGS84)
- (int32_t)lon;

//! Altitude (MSL). Positive for up.
- (int32_t)alt;

//! GPS HDOP horizontal dilution of position. If unknown, set to: 65535
- (uint16_t)eph;

//! GPS VDOP vertical dilution of position. If unknown, set to: 65535
- (uint16_t)epv;

//! GPS ground speed. If unknown, set to: 65535
- (uint16_t)vel;

//! GPS velocity in north direction in earth-fixed NED frame
- (int16_t)vn;

//! GPS velocity in east direction in earth-fixed NED frame
- (int16_t)ve;

//! GPS velocity in down direction in earth-fixed NED frame
- (int16_t)vd;

//! Course over ground (NOT heading, but direction of movement), 0.0..359.99 degrees. If unknown, set to: 65535
- (uint16_t)cog;

//! Number of satellites visible. If unknown, set to 255
- (uint8_t)satellitesVisible;

//! GPS ID (zero indexed). Used for multiple GPS inputs
- (uint8_t)id;

//! Yaw of vehicle relative to Earth's North, zero means not available, use 36000 for north
- (uint16_t)yaw;

@end
