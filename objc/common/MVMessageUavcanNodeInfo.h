//
//  MVMessageUavcanNodeInfo.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a UAVCAN_NODE_INFO Mavlink message.

 @discussion General information describing a particular UAVCAN node. Please refer to the definition of the UAVCAN service "uavcan.protocol.GetNodeInfo" for the background information. This message should be emitted by the system whenever a new node appears online, or an existing node reboots. Additionally, it can be emitted upon request from the other end of the MAVLink channel (see MAV_CMD_UAVCAN_GET_NODE_INFO). It is also not prohibited to emit this message unconditionally at a low frequency. The UAVCAN specification is available at http://uavcan.org.
 */
@interface MVMessageUavcanNodeInfo : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec uptimeSec:(uint32_t)uptimeSec name:(char *)name hwVersionMajor:(uint8_t)hwVersionMajor hwVersionMinor:(uint8_t)hwVersionMinor hwUniqueId:(uint8_t *)hwUniqueId swVersionMajor:(uint8_t)swVersionMajor swVersionMinor:(uint8_t)swVersionMinor swVcsCommit:(uint32_t)swVcsCommit;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Time since the start-up of the node.
- (uint32_t)uptimeSec;

//! Node name string. For example, "sapog.px4.io".
- (NSString *)name;

//! Hardware major version number.
- (uint8_t)hwVersionMajor;

//! Hardware minor version number.
- (uint8_t)hwVersionMinor;

//! Hardware unique 128-bit ID.
- (uint16_t)hwUniqueId:(uint8_t *)hw_unique_id;

//! Software major version number.
- (uint8_t)swVersionMajor;

//! Software minor version number.
- (uint8_t)swVersionMinor;

//! Version control system (VCS) revision identifier (e.g. git short commit hash). Zero if unknown.
- (uint32_t)swVcsCommit;

@end
