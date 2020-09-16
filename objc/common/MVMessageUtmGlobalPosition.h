//
//  MVMessageUtmGlobalPosition.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a UTM_GLOBAL_POSITION Mavlink message.

 @discussion The global position resulting from GPS and sensor fusion.
 */
@interface MVMessageUtmGlobalPosition : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId time:(uint64_t)time uasId:(uint8_t *)uasId lat:(int32_t)lat lon:(int32_t)lon alt:(int32_t)alt relativeAlt:(int32_t)relativeAlt vx:(int16_t)vx vy:(int16_t)vy vz:(int16_t)vz hAcc:(uint16_t)hAcc vAcc:(uint16_t)vAcc velAcc:(uint16_t)velAcc nextLat:(int32_t)nextLat nextLon:(int32_t)nextLon nextAlt:(int32_t)nextAlt updateRate:(uint16_t)updateRate flightState:(UTM_FLIGHT_STATE)flightState flags:(UTM_DATA_AVAIL_FLAGS)flags;

//! Time of applicability of position (microseconds since UNIX epoch).
- (uint64_t)time;

//! Unique UAS ID.
- (uint16_t)uasId:(uint8_t *)uas_id;

//! Latitude (WGS84)
- (int32_t)lat;

//! Longitude (WGS84)
- (int32_t)lon;

//! Altitude (WGS84)
- (int32_t)alt;

//! Altitude above ground
- (int32_t)relativeAlt;

//! Ground X speed (latitude, positive north)
- (int16_t)vx;

//! Ground Y speed (longitude, positive east)
- (int16_t)vy;

//! Ground Z speed (altitude, positive down)
- (int16_t)vz;

//! Horizontal position uncertainty (standard deviation)
- (uint16_t)hAcc;

//! Altitude uncertainty (standard deviation)
- (uint16_t)vAcc;

//! Speed uncertainty (standard deviation)
- (uint16_t)velAcc;

//! Next waypoint, latitude (WGS84)
- (int32_t)nextLat;

//! Next waypoint, longitude (WGS84)
- (int32_t)nextLon;

//! Next waypoint, altitude (WGS84)
- (int32_t)nextAlt;

//! Time until next update. Set to 0 if unknown or in data driven mode.
- (uint16_t)updateRate;

//! Flight state
- (UTM_FLIGHT_STATE)flightState;

//! Bitwise OR combination of the data available flags.
- (UTM_DATA_AVAIL_FLAGS)flags;

@end
