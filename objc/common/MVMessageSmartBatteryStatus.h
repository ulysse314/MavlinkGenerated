//
//  MVMessageSmartBatteryStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a SMART_BATTERY_STATUS Mavlink message.

 @discussion Smart Battery information (dynamic). Use for updates from: smart battery to flight stack, flight stack to GCS. Use instead of BATTERY_STATUS for smart batteries.
 */
@interface MVMessageSmartBatteryStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId id:(uint16_t)id capacityRemaining:(int16_t)capacityRemaining current:(int16_t)current temperature:(int16_t)temperature faultBitmask:(MAV_SMART_BATTERY_FAULT)faultBitmask timeRemaining:(int32_t)timeRemaining cellOffset:(uint16_t)cellOffset voltages:(uint16_t *)voltages;

//! Battery ID
- (uint16_t)id;

//! Remaining battery energy. Values: [0-100], -1: field not provided.
- (int16_t)capacityRemaining;

//! Battery current (through all cells/loads). Positive if discharging, negative if charging. UINT16_MAX: field not provided.
- (int16_t)current;

//! Battery temperature. -1: field not provided.
- (int16_t)temperature;

//! Fault/health indications.
- (MAV_SMART_BATTERY_FAULT)faultBitmask;

//! Estimated remaining battery time. -1: field not provided.
- (int32_t)timeRemaining;

//! The cell number of the first index in the 'voltages' array field. Using this field allows you to specify cell voltages for batteries with more than 16 cells.
- (uint16_t)cellOffset;

//! Individual cell voltages. Batteries with more 16 cells can use the cell_offset field to specify the cell offset for the array specified in the current message . Index values above the valid cell count for this battery should have the UINT16_MAX value.
- (uint16_t)voltages:(uint16_t *)voltages;

@end
