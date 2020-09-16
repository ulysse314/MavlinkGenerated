//
//  MVMessageBatteryStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a BATTERY_STATUS Mavlink message.

 @discussion Battery information. Updates GCS with flight controller battery status. Use SMART_BATTERY_* messages instead for smart batteries.
 */
@interface MVMessageBatteryStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId id:(uint8_t)id batteryFunction:(MAV_BATTERY_FUNCTION)batteryFunction type:(MAV_BATTERY_TYPE)type temperature:(int16_t)temperature voltages:(uint16_t *)voltages currentBattery:(int16_t)currentBattery currentConsumed:(int32_t)currentConsumed energyConsumed:(int32_t)energyConsumed batteryRemaining:(int8_t)batteryRemaining timeRemaining:(int32_t)timeRemaining chargeState:(MAV_BATTERY_CHARGE_STATE)chargeState voltagesExt:(uint16_t *)voltagesExt;

//! Battery ID
- (uint8_t)id;

//! Function of the battery
- (MAV_BATTERY_FUNCTION)batteryFunction;

//! Type (chemistry) of the battery
- (MAV_BATTERY_TYPE)type;

//! Temperature of the battery. INT16_MAX for unknown temperature.
- (int16_t)temperature;

//! Battery voltage of cells 1 to 10 (see voltages_ext for cells 11-14). Cells in this field above the valid cell count for this battery should have the UINT16_MAX value. If individual cell voltages are unknown or not measured for this battery, then the overall battery voltage should be filled in cell 0, with all others set to UINT16_MAX. If the voltage of the battery is greater than (UINT16_MAX - 1), then cell 0 should be set to (UINT16_MAX - 1), and cell 1 to the remaining voltage. This can be extended to multiple cells if the total voltage is greater than 2 * (UINT16_MAX - 1).
- (uint16_t)voltages:(uint16_t *)voltages;

//! Battery current, -1: autopilot does not measure the current
- (int16_t)currentBattery;

//! Consumed charge, -1: autopilot does not provide consumption estimate
- (int32_t)currentConsumed;

//! Consumed energy, -1: autopilot does not provide energy consumption estimate
- (int32_t)energyConsumed;

//! Remaining battery energy. Values: [0-100], -1: autopilot does not estimate the remaining battery.
- (int8_t)batteryRemaining;

//! Remaining battery time, 0: autopilot does not provide remaining battery time estimate
- (int32_t)timeRemaining;

//! State for extent of discharge, provided by autopilot for warning or external reactions
- (MAV_BATTERY_CHARGE_STATE)chargeState;

//! Battery voltages for cells 11 to 14. Cells above the valid cell count for this battery should have a value of 0, where zero indicates not supported (note, this is different than for the voltages field and allows empty byte truncation). If the measured value is 0 then 1 should be sent instead.
- (uint16_t)voltagesExt:(uint16_t *)voltages_ext;

@end
