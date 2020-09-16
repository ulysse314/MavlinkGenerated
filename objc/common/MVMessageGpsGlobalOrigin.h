//
//  MVMessageGpsGlobalOrigin.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a GPS_GLOBAL_ORIGIN Mavlink message.

 @discussion Publishes the GPS co-ordinates of the vehicle local origin (0,0,0) position. Emitted whenever a new GPS-Local position mapping is requested or set - e.g. following SET_GPS_GLOBAL_ORIGIN message.
 */
@interface MVMessageGpsGlobalOrigin : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId latitude:(int32_t)latitude longitude:(int32_t)longitude altitude:(int32_t)altitude timeUsec:(uint64_t)timeUsec;

//! Latitude (WGS84)
- (int32_t)latitude;

//! Longitude (WGS84)
- (int32_t)longitude;

//! Altitude (MSL). Positive for up.
- (int32_t)altitude;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

@end
