//
//  MVMessageSmartBatteryStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageSmartBatteryStatus.h"

@implementation MVMessageSmartBatteryStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId id:(uint16_t)id capacityRemaining:(int16_t)capacityRemaining current:(int16_t)current temperature:(int16_t)temperature faultBitmask:(MAV_SMART_BATTERY_FAULT)faultBitmask timeRemaining:(int32_t)timeRemaining cellOffset:(uint16_t)cellOffset voltages:(uint16_t *)voltages {
  if ((self = [super init])) {
    mavlink_msg_smart_battery_status_pack(systemId, componentId, &(self->_message), id, capacityRemaining, current, temperature, faultBitmask, timeRemaining, cellOffset, voltages);
  }
  return self;
}

- (uint16_t)id {
  return mavlink_msg_smart_battery_status_get_id(&(self->_message));
}

- (int16_t)capacityRemaining {
  return mavlink_msg_smart_battery_status_get_capacity_remaining(&(self->_message));
}

- (int16_t)current {
  return mavlink_msg_smart_battery_status_get_current(&(self->_message));
}

- (int16_t)temperature {
  return mavlink_msg_smart_battery_status_get_temperature(&(self->_message));
}

- (MAV_SMART_BATTERY_FAULT)faultBitmask {
  return mavlink_msg_smart_battery_status_get_fault_bitmask(&(self->_message));
}

- (int32_t)timeRemaining {
  return mavlink_msg_smart_battery_status_get_time_remaining(&(self->_message));
}

- (uint16_t)cellOffset {
  return mavlink_msg_smart_battery_status_get_cell_offset(&(self->_message));
}

- (uint16_t)voltages:(uint16_t *)voltages {
  return mavlink_msg_smart_battery_status_get_voltages(&(self->_message), voltages);
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, id=%d, capacityRemaining=%d, current=%d, temperature=%d, faultBitmask=%d, timeRemaining=%d, cellOffset=%d, voltages=%@", [super description], [self id], [self capacityRemaining], [self current], [self temperature], [self faultBitmask], [self timeRemaining], [self cellOffset], @"[array of uint16_t[16]]"];
}

@end
