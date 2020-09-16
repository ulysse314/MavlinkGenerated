//
//  MVMessageSmartBatteryInfo.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageSmartBatteryInfo.h"

@implementation MVMessageSmartBatteryInfo

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId id:(uint8_t)id capacityFullSpecification:(int32_t)capacityFullSpecification capacityFull:(int32_t)capacityFull cycleCount:(uint16_t)cycleCount serialNumber:(int32_t)serialNumber deviceName:(char *)deviceName weight:(uint16_t)weight dischargeMinimumVoltage:(uint16_t)dischargeMinimumVoltage chargingMinimumVoltage:(uint16_t)chargingMinimumVoltage restingMinimumVoltage:(uint16_t)restingMinimumVoltage {
  if ((self = [super init])) {
    mavlink_msg_smart_battery_info_pack(systemId, componentId, &(self->_message), id, capacityFullSpecification, capacityFull, cycleCount, serialNumber, deviceName, weight, dischargeMinimumVoltage, chargingMinimumVoltage, restingMinimumVoltage);
  }
  return self;
}

- (uint8_t)id {
  return mavlink_msg_smart_battery_info_get_id(&(self->_message));
}

- (int32_t)capacityFullSpecification {
  return mavlink_msg_smart_battery_info_get_capacity_full_specification(&(self->_message));
}

- (int32_t)capacityFull {
  return mavlink_msg_smart_battery_info_get_capacity_full(&(self->_message));
}

- (uint16_t)cycleCount {
  return mavlink_msg_smart_battery_info_get_cycle_count(&(self->_message));
}

- (int32_t)serialNumber {
  return mavlink_msg_smart_battery_info_get_serial_number(&(self->_message));
}

- (NSString *)deviceName {
  char string[50];
  mavlink_msg_smart_battery_info_get_device_name(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:50 encoding:NSASCIIStringEncoding];
}

- (uint16_t)weight {
  return mavlink_msg_smart_battery_info_get_weight(&(self->_message));
}

- (uint16_t)dischargeMinimumVoltage {
  return mavlink_msg_smart_battery_info_get_discharge_minimum_voltage(&(self->_message));
}

- (uint16_t)chargingMinimumVoltage {
  return mavlink_msg_smart_battery_info_get_charging_minimum_voltage(&(self->_message));
}

- (uint16_t)restingMinimumVoltage {
  return mavlink_msg_smart_battery_info_get_resting_minimum_voltage(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, id=%d, capacityFullSpecification=%d, capacityFull=%d, cycleCount=%d, serialNumber=%d, deviceName=%@, weight=%d, dischargeMinimumVoltage=%d, chargingMinimumVoltage=%d, restingMinimumVoltage=%d", [super description], [self id], [self capacityFullSpecification], [self capacityFull], [self cycleCount], [self serialNumber], [self deviceName], [self weight], [self dischargeMinimumVoltage], [self chargingMinimumVoltage], [self restingMinimumVoltage]];
}

@end
