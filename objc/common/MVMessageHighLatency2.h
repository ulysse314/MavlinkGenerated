//
//  MVMessageHighLatency2.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a HIGH_LATENCY2 Mavlink message.

 @discussion Message appropriate for high latency connections like Iridium (version 2)
 */
@interface MVMessageHighLatency2 : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timestamp:(uint32_t)timestamp type:(MAV_TYPE)type autopilot:(MAV_AUTOPILOT)autopilot customMode:(uint16_t)customMode latitude:(int32_t)latitude longitude:(int32_t)longitude altitude:(int16_t)altitude targetAltitude:(int16_t)targetAltitude heading:(uint8_t)heading targetHeading:(uint8_t)targetHeading targetDistance:(uint16_t)targetDistance throttle:(uint8_t)throttle airspeed:(uint8_t)airspeed airspeedSp:(uint8_t)airspeedSp groundspeed:(uint8_t)groundspeed windspeed:(uint8_t)windspeed windHeading:(uint8_t)windHeading eph:(uint8_t)eph epv:(uint8_t)epv temperatureAir:(int8_t)temperatureAir climbRate:(int8_t)climbRate battery:(int8_t)battery wpNum:(uint16_t)wpNum failureFlags:(HL_FAILURE_FLAG)failureFlags custom0:(int8_t)custom0 custom1:(int8_t)custom1 custom2:(int8_t)custom2;

//! Timestamp (milliseconds since boot or Unix epoch)
- (uint32_t)timestamp;

//! Type of the MAV (quadrotor, helicopter, etc.)
- (MAV_TYPE)type;

//! Autopilot type / class. Use MAV_AUTOPILOT_INVALID for components that are not flight controllers.
- (MAV_AUTOPILOT)autopilot;

//! A bitfield for use for autopilot-specific flags (2 byte version).
- (uint16_t)customMode;

//! Latitude
- (int32_t)latitude;

//! Longitude
- (int32_t)longitude;

//! Altitude above mean sea level
- (int16_t)altitude;

//! Altitude setpoint
- (int16_t)targetAltitude;

//! Heading
- (uint8_t)heading;

//! Heading setpoint
- (uint8_t)targetHeading;

//! Distance to target waypoint or position
- (uint16_t)targetDistance;

//! Throttle
- (uint8_t)throttle;

//! Airspeed
- (uint8_t)airspeed;

//! Airspeed setpoint
- (uint8_t)airspeedSp;

//! Groundspeed
- (uint8_t)groundspeed;

//! Windspeed
- (uint8_t)windspeed;

//! Wind heading
- (uint8_t)windHeading;

//! Maximum error horizontal position since last message
- (uint8_t)eph;

//! Maximum error vertical position since last message
- (uint8_t)epv;

//! Air temperature from airspeed sensor
- (int8_t)temperatureAir;

//! Maximum climb rate magnitude since last message
- (int8_t)climbRate;

//! Battery level (-1 if field not provided).
- (int8_t)battery;

//! Current waypoint number
- (uint16_t)wpNum;

//! Bitmap of failure flags.
- (HL_FAILURE_FLAG)failureFlags;

//! Field for custom payload.
- (int8_t)custom0;

//! Field for custom payload.
- (int8_t)custom1;

//! Field for custom payload.
- (int8_t)custom2;

@end
