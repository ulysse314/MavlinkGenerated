//
//  MVMessageEfiStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a EFI_STATUS Mavlink message.

 @discussion EFI Status Output
 */
@interface MVMessageEfiStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId health:(uint8_t)health ecuIndex:(float)ecuIndex rpm:(float)rpm fuelConsumed:(float)fuelConsumed fuelFlow:(float)fuelFlow engineLoad:(float)engineLoad throttlePosition:(float)throttlePosition sparkDwellTime:(float)sparkDwellTime barometricPressure:(float)barometricPressure intakeManifoldPressure:(float)intakeManifoldPressure intakeManifoldTemperature:(float)intakeManifoldTemperature cylinderHeadTemperature:(float)cylinderHeadTemperature ignitionTiming:(float)ignitionTiming injectionTime:(float)injectionTime;

//! EFI Health status
- (uint8_t)health;

//! ECU Index
- (float)ecuIndex;

//! RPM
- (float)rpm;

//! Fuel Consumed (grams)
- (float)fuelConsumed;

//! Fuel Flow Rate (g/min)
- (float)fuelFlow;

//! Engine Load (%)
- (float)engineLoad;

//! Throttle Position (%)
- (float)throttlePosition;

//! Spark Dwell Time (ms)
- (float)sparkDwellTime;

//! Barometric Pressure (kPa)
- (float)barometricPressure;

//! Intake Manifold Pressure (kPa)(
- (float)intakeManifoldPressure;

//! Intake Manifold Temperature (degC)
- (float)intakeManifoldTemperature;

//! cylinder_head_temperature (degC)
- (float)cylinderHeadTemperature;

//! Ignition timing for cylinder i (Crank Angle degrees)
- (float)ignitionTiming;

//! Injection time for injector i (ms)
- (float)injectionTime;

@end
