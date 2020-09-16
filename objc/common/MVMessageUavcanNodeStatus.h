//
//  MVMessageUavcanNodeStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a UAVCAN_NODE_STATUS Mavlink message.

 @discussion General status information of an UAVCAN node. Please refer to the definition of the UAVCAN message "uavcan.protocol.NodeStatus" for the background information. The UAVCAN specification is available at http://uavcan.org.
 */
@interface MVMessageUavcanNodeStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec uptimeSec:(uint32_t)uptimeSec health:(UAVCAN_NODE_HEALTH)health mode:(UAVCAN_NODE_MODE)mode subMode:(uint8_t)subMode vendorSpecificStatusCode:(uint16_t)vendorSpecificStatusCode;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Time since the start-up of the node.
- (uint32_t)uptimeSec;

//! Generalized node health status.
- (UAVCAN_NODE_HEALTH)health;

//! Generalized operating mode.
- (UAVCAN_NODE_MODE)mode;

//! Not used currently.
- (uint8_t)subMode;

//! Vendor-specific status information.
- (uint16_t)vendorSpecificStatusCode;

@end
