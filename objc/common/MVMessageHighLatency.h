//
//  MVMessageHighLatency.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a HIGH_LATENCY Mavlink message.

 @discussion Message appropriate for high latency connections like Iridium
 */
@interface MVMessageHighLatency : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId baseMode:(MAV_MODE_FLAG)baseMode customMode:(uint32_t)customMode landedState:(MAV_LANDED_STATE)landedState roll:(int16_t)roll pitch:(int16_t)pitch heading:(uint16_t)heading throttle:(int8_t)throttle headingSp:(int16_t)headingSp latitude:(int32_t)latitude longitude:(int32_t)longitude altitudeAmsl:(int16_t)altitudeAmsl altitudeSp:(int16_t)altitudeSp airspeed:(uint8_t)airspeed airspeedSp:(uint8_t)airspeedSp groundspeed:(uint8_t)groundspeed climbRate:(int8_t)climbRate gpsNsat:(uint8_t)gpsNsat gpsFixType:(GPS_FIX_TYPE)gpsFixType batteryRemaining:(uint8_t)batteryRemaining temperature:(int8_t)temperature temperatureAir:(int8_t)temperatureAir failsafe:(uint8_t)failsafe wpNum:(uint8_t)wpNum wpDistance:(uint16_t)wpDistance;

//! Bitmap of enabled system modes.
- (MAV_MODE_FLAG)baseMode;

//! A bitfield for use for autopilot-specific flags.
- (uint32_t)customMode;

//! The landed state. Is set to MAV_LANDED_STATE_UNDEFINED if landed state is unknown.
- (MAV_LANDED_STATE)landedState;

//! roll
- (int16_t)roll;

//! pitch
- (int16_t)pitch;

//! heading
- (uint16_t)heading;

//! throttle (percentage)
- (int8_t)throttle;

//! heading setpoint
- (int16_t)headingSp;

//! Latitude
- (int32_t)latitude;

//! Longitude
- (int32_t)longitude;

//! Altitude above mean sea level
- (int16_t)altitudeAmsl;

//! Altitude setpoint relative to the home position
- (int16_t)altitudeSp;

//! airspeed
- (uint8_t)airspeed;

//! airspeed setpoint
- (uint8_t)airspeedSp;

//! groundspeed
- (uint8_t)groundspeed;

//! climb rate
- (int8_t)climbRate;

//! Number of satellites visible. If unknown, set to 255
- (uint8_t)gpsNsat;

//! GPS Fix type.
- (GPS_FIX_TYPE)gpsFixType;

//! Remaining battery (percentage)
- (uint8_t)batteryRemaining;

//! Autopilot temperature (degrees C)
- (int8_t)temperature;

//! Air temperature (degrees C) from airspeed sensor
- (int8_t)temperatureAir;

//! failsafe (each bit represents a failsafe where 0=ok, 1=failsafe active (bit0:RC, bit1:batt, bit2:GPS, bit3:GCS, bit4:fence)
- (uint8_t)failsafe;

//! current waypoint number
- (uint8_t)wpNum;

//! distance to target
- (uint16_t)wpDistance;

@end
