//
//  MVMessageScaledPressure2.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a SCALED_PRESSURE2 Mavlink message.

 @discussion Barometer readings for 2nd barometer
 */
@interface MVMessageScaledPressure2 : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs pressAbs:(float)pressAbs pressDiff:(float)pressDiff temperature:(int16_t)temperature temperaturePressDiff:(int16_t)temperaturePressDiff;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Absolute pressure
- (float)pressAbs;

//! Differential pressure
- (float)pressDiff;

//! Absolute pressure temperature
- (int16_t)temperature;

//! Differential pressure temperature (UINT16_MAX, if not available)
- (int16_t)temperaturePressDiff;

@end
