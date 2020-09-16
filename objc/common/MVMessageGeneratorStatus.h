//
//  MVMessageGeneratorStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a GENERATOR_STATUS Mavlink message.

 @discussion Telemetry of power generation system. Alternator or mechanical generator.
 */
@interface MVMessageGeneratorStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId status:(MAV_GENERATOR_STATUS_FLAG)status generatorSpeed:(uint16_t)generatorSpeed batteryCurrent:(float)batteryCurrent loadCurrent:(float)loadCurrent powerGenerated:(float)powerGenerated busVoltage:(float)busVoltage rectifierTemperature:(int16_t)rectifierTemperature batCurrentSetpoint:(float)batCurrentSetpoint generatorTemperature:(int16_t)generatorTemperature runtime:(uint32_t)runtime timeUntilMaintenance:(int32_t)timeUntilMaintenance;

//! Status flags.
- (MAV_GENERATOR_STATUS_FLAG)status;

//! Speed of electrical generator or alternator. UINT16_MAX: field not provided.
- (uint16_t)generatorSpeed;

//! Current into/out of battery. Positive for out. Negative for in. NaN: field not provided.
- (float)batteryCurrent;

//! Current going to the UAV. If battery current not available this is the DC current from the generator. Positive for out. Negative for in. NaN: field not provided
- (float)loadCurrent;

//! The power being generated. NaN: field not provided
- (float)powerGenerated;

//! Voltage of the bus seen at the generator, or battery bus if battery bus is controlled by generator and at a different voltage to main bus.
- (float)busVoltage;

//! The temperature of the rectifier or power converter. INT16_MAX: field not provided.
- (int16_t)rectifierTemperature;

//! The target battery current. Positive for out. Negative for in. NaN: field not provided
- (float)batCurrentSetpoint;

//! The temperature of the mechanical motor, fuel cell core or generator. INT16_MAX: field not provided.
- (int16_t)generatorTemperature;

//! Seconds this generator has run since it was rebooted. UINT32_MAX: field not provided.
- (uint32_t)runtime;

//! Seconds until this generator requires maintenance.  A negative value indicates maintenance is past-due. INT32_MAX: field not provided.
- (int32_t)timeUntilMaintenance;

@end
