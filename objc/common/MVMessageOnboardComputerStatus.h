//
//  MVMessageOnboardComputerStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a ONBOARD_COMPUTER_STATUS Mavlink message.

 @discussion Hardware status sent by an onboard computer.
 */
@interface MVMessageOnboardComputerStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec uptime:(uint32_t)uptime type:(uint8_t)type cpuCores:(uint8_t *)cpuCores cpuCombined:(uint8_t *)cpuCombined gpuCores:(uint8_t *)gpuCores gpuCombined:(uint8_t *)gpuCombined temperatureBoard:(int8_t)temperatureBoard temperatureCore:(int8_t *)temperatureCore fanSpeed:(int16_t *)fanSpeed ramUsage:(uint32_t)ramUsage ramTotal:(uint32_t)ramTotal storageType:(uint32_t *)storageType storageUsage:(uint32_t *)storageUsage storageTotal:(uint32_t *)storageTotal linkType:(uint32_t *)linkType linkTxRate:(uint32_t *)linkTxRate linkRxRate:(uint32_t *)linkRxRate linkTxMax:(uint32_t *)linkTxMax linkRxMax:(uint32_t *)linkRxMax;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Time since system boot.
- (uint32_t)uptime;

//! Type of the onboard computer: 0: Mission computer primary, 1: Mission computer backup 1, 2: Mission computer backup 2, 3: Compute node, 4-5: Compute spares, 6-9: Payload computers.
- (uint8_t)type;

//! CPU usage on the component in percent (100 - idle). A value of UINT8_MAX implies the field is unused.
- (uint16_t)cpuCores:(uint8_t *)cpu_cores;

//! Combined CPU usage as the last 10 slices of 100 MS (a histogram). This allows to identify spikes in load that max out the system, but only for a short amount of time. A value of UINT8_MAX implies the field is unused.
- (uint16_t)cpuCombined:(uint8_t *)cpu_combined;

//! GPU usage on the component in percent (100 - idle). A value of UINT8_MAX implies the field is unused.
- (uint16_t)gpuCores:(uint8_t *)gpu_cores;

//! Combined GPU usage as the last 10 slices of 100 MS (a histogram). This allows to identify spikes in load that max out the system, but only for a short amount of time. A value of UINT8_MAX implies the field is unused.
- (uint16_t)gpuCombined:(uint8_t *)gpu_combined;

//! Temperature of the board. A value of INT8_MAX implies the field is unused.
- (int8_t)temperatureBoard;

//! Temperature of the CPU core. A value of INT8_MAX implies the field is unused.
- (uint16_t)temperatureCore:(int8_t *)temperature_core;

//! Fan speeds. A value of INT16_MAX implies the field is unused.
- (uint16_t)fanSpeed:(int16_t *)fan_speed;

//! Amount of used RAM on the component system. A value of UINT32_MAX implies the field is unused.
- (uint32_t)ramUsage;

//! Total amount of RAM on the component system. A value of UINT32_MAX implies the field is unused.
- (uint32_t)ramTotal;

//! Storage type: 0: HDD, 1: SSD, 2: EMMC, 3: SD card (non-removable), 4: SD card (removable). A value of UINT32_MAX implies the field is unused.
- (uint16_t)storageType:(uint32_t *)storage_type;

//! Amount of used storage space on the component system. A value of UINT32_MAX implies the field is unused.
- (uint16_t)storageUsage:(uint32_t *)storage_usage;

//! Total amount of storage space on the component system. A value of UINT32_MAX implies the field is unused.
- (uint16_t)storageTotal:(uint32_t *)storage_total;

//! Link type: 0-9: UART, 10-19: Wired network, 20-29: Wifi, 30-39: Point-to-point proprietary, 40-49: Mesh proprietary
- (uint16_t)linkType:(uint32_t *)link_type;

//! Network traffic from the component system. A value of UINT32_MAX implies the field is unused.
- (uint16_t)linkTxRate:(uint32_t *)link_tx_rate;

//! Network traffic to the component system. A value of UINT32_MAX implies the field is unused.
- (uint16_t)linkRxRate:(uint32_t *)link_rx_rate;

//! Network capacity from the component system. A value of UINT32_MAX implies the field is unused.
- (uint16_t)linkTxMax:(uint32_t *)link_tx_max;

//! Network capacity to the component system. A value of UINT32_MAX implies the field is unused.
- (uint16_t)linkRxMax:(uint32_t *)link_rx_max;

@end
