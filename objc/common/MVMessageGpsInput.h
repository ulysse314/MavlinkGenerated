//
//  MVMessageGpsInput.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a GPS_INPUT Mavlink message.

 @discussion GPS sensor input message.  This is a raw sensor value sent by the GPS. This is NOT the global position estimate of the system.
 */
@interface MVMessageGpsInput : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec gpsId:(uint8_t)gpsId ignoreFlags:(GPS_INPUT_IGNORE_FLAGS)ignoreFlags timeWeekMs:(uint32_t)timeWeekMs timeWeek:(uint16_t)timeWeek fixType:(uint8_t)fixType lat:(int32_t)lat lon:(int32_t)lon alt:(float)alt hdop:(float)hdop vdop:(float)vdop vn:(float)vn ve:(float)ve vd:(float)vd speedAccuracy:(float)speedAccuracy horizAccuracy:(float)horizAccuracy vertAccuracy:(float)vertAccuracy satellitesVisible:(uint8_t)satellitesVisible yaw:(uint16_t)yaw;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! ID of the GPS for multiple GPS inputs
- (uint8_t)gpsId;

//! Bitmap indicating which GPS input flags fields to ignore.  All other fields must be provided.
- (GPS_INPUT_IGNORE_FLAGS)ignoreFlags;

//! GPS time (from start of GPS week)
- (uint32_t)timeWeekMs;

//! GPS week number
- (uint16_t)timeWeek;

//! 0-1: no fix, 2: 2D fix, 3: 3D fix. 4: 3D with DGPS. 5: 3D with RTK
- (uint8_t)fixType;

//! Latitude (WGS84)
- (int32_t)lat;

//! Longitude (WGS84)
- (int32_t)lon;

//! Altitude (MSL). Positive for up.
- (float)alt;

//! GPS HDOP horizontal dilution of position
- (float)hdop;

//! GPS VDOP vertical dilution of position
- (float)vdop;

//! GPS velocity in north direction in earth-fixed NED frame
- (float)vn;

//! GPS velocity in east direction in earth-fixed NED frame
- (float)ve;

//! GPS velocity in down direction in earth-fixed NED frame
- (float)vd;

//! GPS speed accuracy
- (float)speedAccuracy;

//! GPS horizontal accuracy
- (float)horizAccuracy;

//! GPS vertical accuracy
- (float)vertAccuracy;

//! Number of satellites visible.
- (uint8_t)satellitesVisible;

//! Yaw of vehicle relative to Earth's North, zero means not available, use 36000 for north
- (uint16_t)yaw;

@end
