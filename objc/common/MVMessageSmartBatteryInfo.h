//
//  MVMessageSmartBatteryInfo.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a SMART_BATTERY_INFO Mavlink message.

 @discussion Smart Battery information (static/infrequent update). Use for updates from: smart battery to flight stack, flight stack to GCS. Use instead of BATTERY_STATUS for smart batteries.
 */
@interface MVMessageSmartBatteryInfo : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId id:(uint8_t)id capacityFullSpecification:(int32_t)capacityFullSpecification capacityFull:(int32_t)capacityFull cycleCount:(uint16_t)cycleCount serialNumber:(int32_t)serialNumber deviceName:(char *)deviceName weight:(uint16_t)weight dischargeMinimumVoltage:(uint16_t)dischargeMinimumVoltage chargingMinimumVoltage:(uint16_t)chargingMinimumVoltage restingMinimumVoltage:(uint16_t)restingMinimumVoltage;

//! Battery ID
- (uint8_t)id;

//! Capacity when full according to manufacturer, -1: field not provided.
- (int32_t)capacityFullSpecification;

//! Capacity when full (accounting for battery degradation), -1: field not provided.
- (int32_t)capacityFull;

//! Charge/discharge cycle count. -1: field not provided.
- (uint16_t)cycleCount;

//! Serial number. -1: field not provided.
- (int32_t)serialNumber;

//! Static device name. Encode as manufacturer and product names separated using an underscore.
- (NSString *)deviceName;

//! Battery weight. 0: field not provided.
- (uint16_t)weight;

//! Minimum per-cell voltage when discharging. If not supplied set to UINT16_MAX value.
- (uint16_t)dischargeMinimumVoltage;

//! Minimum per-cell voltage when charging. If not supplied set to UINT16_MAX value.
- (uint16_t)chargingMinimumVoltage;

//! Minimum per-cell voltage when resting. If not supplied set to UINT16_MAX value.
- (uint16_t)restingMinimumVoltage;

@end
