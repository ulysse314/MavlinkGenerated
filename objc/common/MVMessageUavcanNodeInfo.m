//
//  MVMessageUavcanNodeInfo.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageUavcanNodeInfo.h"

@implementation MVMessageUavcanNodeInfo

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec uptimeSec:(uint32_t)uptimeSec name:(char *)name hwVersionMajor:(uint8_t)hwVersionMajor hwVersionMinor:(uint8_t)hwVersionMinor hwUniqueId:(uint8_t *)hwUniqueId swVersionMajor:(uint8_t)swVersionMajor swVersionMinor:(uint8_t)swVersionMinor swVcsCommit:(uint32_t)swVcsCommit {
  if ((self = [super init])) {
    mavlink_msg_uavcan_node_info_pack(systemId, componentId, &(self->_message), timeUsec, uptimeSec, name, hwVersionMajor, hwVersionMinor, hwUniqueId, swVersionMajor, swVersionMinor, swVcsCommit);
  }
  return self;
}

- (uint64_t)timeUsec {
  return mavlink_msg_uavcan_node_info_get_time_usec(&(self->_message));
}

- (uint32_t)uptimeSec {
  return mavlink_msg_uavcan_node_info_get_uptime_sec(&(self->_message));
}

- (NSString *)name {
  char string[80];
  mavlink_msg_uavcan_node_info_get_name(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:80 encoding:NSASCIIStringEncoding];
}

- (uint8_t)hwVersionMajor {
  return mavlink_msg_uavcan_node_info_get_hw_version_major(&(self->_message));
}

- (uint8_t)hwVersionMinor {
  return mavlink_msg_uavcan_node_info_get_hw_version_minor(&(self->_message));
}

- (uint16_t)hwUniqueId:(uint8_t *)hw_unique_id {
  return mavlink_msg_uavcan_node_info_get_hw_unique_id(&(self->_message), hw_unique_id);
}

- (uint8_t)swVersionMajor {
  return mavlink_msg_uavcan_node_info_get_sw_version_major(&(self->_message));
}

- (uint8_t)swVersionMinor {
  return mavlink_msg_uavcan_node_info_get_sw_version_minor(&(self->_message));
}

- (uint32_t)swVcsCommit {
  return mavlink_msg_uavcan_node_info_get_sw_vcs_commit(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeUsec=%lld, uptimeSec=%d, name=%@, hwVersionMajor=%d, hwVersionMinor=%d, hwUniqueId=%@, swVersionMajor=%d, swVersionMinor=%d, swVcsCommit=%d", [super description], [self timeUsec], [self uptimeSec], [self name], [self hwVersionMajor], [self hwVersionMinor], @"[array of uint8_t[16]]", [self swVersionMajor], [self swVersionMinor], [self swVcsCommit]];
}

@end
