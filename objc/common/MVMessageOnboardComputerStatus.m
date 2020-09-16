//
//  MVMessageOnboardComputerStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageOnboardComputerStatus.h"

@implementation MVMessageOnboardComputerStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec uptime:(uint32_t)uptime type:(uint8_t)type cpuCores:(uint8_t *)cpuCores cpuCombined:(uint8_t *)cpuCombined gpuCores:(uint8_t *)gpuCores gpuCombined:(uint8_t *)gpuCombined temperatureBoard:(int8_t)temperatureBoard temperatureCore:(int8_t *)temperatureCore fanSpeed:(int16_t *)fanSpeed ramUsage:(uint32_t)ramUsage ramTotal:(uint32_t)ramTotal storageType:(uint32_t *)storageType storageUsage:(uint32_t *)storageUsage storageTotal:(uint32_t *)storageTotal linkType:(uint32_t *)linkType linkTxRate:(uint32_t *)linkTxRate linkRxRate:(uint32_t *)linkRxRate linkTxMax:(uint32_t *)linkTxMax linkRxMax:(uint32_t *)linkRxMax {
  if ((self = [super init])) {
    mavlink_msg_onboard_computer_status_pack(systemId, componentId, &(self->_message), timeUsec, uptime, type, cpuCores, cpuCombined, gpuCores, gpuCombined, temperatureBoard, temperatureCore, fanSpeed, ramUsage, ramTotal, storageType, storageUsage, storageTotal, linkType, linkTxRate, linkRxRate, linkTxMax, linkRxMax);
  }
  return self;
}

- (uint64_t)timeUsec {
  return mavlink_msg_onboard_computer_status_get_time_usec(&(self->_message));
}

- (uint32_t)uptime {
  return mavlink_msg_onboard_computer_status_get_uptime(&(self->_message));
}

- (uint8_t)type {
  return mavlink_msg_onboard_computer_status_get_type(&(self->_message));
}

- (uint16_t)cpuCores:(uint8_t *)cpu_cores {
  return mavlink_msg_onboard_computer_status_get_cpu_cores(&(self->_message), cpu_cores);
}

- (uint16_t)cpuCombined:(uint8_t *)cpu_combined {
  return mavlink_msg_onboard_computer_status_get_cpu_combined(&(self->_message), cpu_combined);
}

- (uint16_t)gpuCores:(uint8_t *)gpu_cores {
  return mavlink_msg_onboard_computer_status_get_gpu_cores(&(self->_message), gpu_cores);
}

- (uint16_t)gpuCombined:(uint8_t *)gpu_combined {
  return mavlink_msg_onboard_computer_status_get_gpu_combined(&(self->_message), gpu_combined);
}

- (int8_t)temperatureBoard {
  return mavlink_msg_onboard_computer_status_get_temperature_board(&(self->_message));
}

- (uint16_t)temperatureCore:(int8_t *)temperature_core {
  return mavlink_msg_onboard_computer_status_get_temperature_core(&(self->_message), temperature_core);
}

- (uint16_t)fanSpeed:(int16_t *)fan_speed {
  return mavlink_msg_onboard_computer_status_get_fan_speed(&(self->_message), fan_speed);
}

- (uint32_t)ramUsage {
  return mavlink_msg_onboard_computer_status_get_ram_usage(&(self->_message));
}

- (uint32_t)ramTotal {
  return mavlink_msg_onboard_computer_status_get_ram_total(&(self->_message));
}

- (uint16_t)storageType:(uint32_t *)storage_type {
  return mavlink_msg_onboard_computer_status_get_storage_type(&(self->_message), storage_type);
}

- (uint16_t)storageUsage:(uint32_t *)storage_usage {
  return mavlink_msg_onboard_computer_status_get_storage_usage(&(self->_message), storage_usage);
}

- (uint16_t)storageTotal:(uint32_t *)storage_total {
  return mavlink_msg_onboard_computer_status_get_storage_total(&(self->_message), storage_total);
}

- (uint16_t)linkType:(uint32_t *)link_type {
  return mavlink_msg_onboard_computer_status_get_link_type(&(self->_message), link_type);
}

- (uint16_t)linkTxRate:(uint32_t *)link_tx_rate {
  return mavlink_msg_onboard_computer_status_get_link_tx_rate(&(self->_message), link_tx_rate);
}

- (uint16_t)linkRxRate:(uint32_t *)link_rx_rate {
  return mavlink_msg_onboard_computer_status_get_link_rx_rate(&(self->_message), link_rx_rate);
}

- (uint16_t)linkTxMax:(uint32_t *)link_tx_max {
  return mavlink_msg_onboard_computer_status_get_link_tx_max(&(self->_message), link_tx_max);
}

- (uint16_t)linkRxMax:(uint32_t *)link_rx_max {
  return mavlink_msg_onboard_computer_status_get_link_rx_max(&(self->_message), link_rx_max);
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeUsec=%lld, uptime=%d, type=%d, cpuCores=%@, cpuCombined=%@, gpuCores=%@, gpuCombined=%@, temperatureBoard=%d, temperatureCore=%@, fanSpeed=%@, ramUsage=%d, ramTotal=%d, storageType=%@, storageUsage=%@, storageTotal=%@, linkType=%@, linkTxRate=%@, linkRxRate=%@, linkTxMax=%@, linkRxMax=%@", [super description], [self timeUsec], [self uptime], [self type], @"[array of uint8_t[8]]", @"[array of uint8_t[10]]", @"[array of uint8_t[4]]", @"[array of uint8_t[10]]", [self temperatureBoard], @"[array of int8_t[8]]", @"[array of int16_t[4]]", [self ramUsage], [self ramTotal], @"[array of uint32_t[4]]", @"[array of uint32_t[4]]", @"[array of uint32_t[4]]", @"[array of uint32_t[6]]", @"[array of uint32_t[6]]", @"[array of uint32_t[6]]", @"[array of uint32_t[6]]", @"[array of uint32_t[6]]"];
}

@end
