//
//  MVMessageUavcanNodeStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageUavcanNodeStatus.h"

@implementation MVMessageUavcanNodeStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec uptimeSec:(uint32_t)uptimeSec health:(UAVCAN_NODE_HEALTH)health mode:(UAVCAN_NODE_MODE)mode subMode:(uint8_t)subMode vendorSpecificStatusCode:(uint16_t)vendorSpecificStatusCode {
  if ((self = [super init])) {
    mavlink_msg_uavcan_node_status_pack(systemId, componentId, &(self->_message), timeUsec, uptimeSec, health, mode, subMode, vendorSpecificStatusCode);
  }
  return self;
}

- (uint64_t)timeUsec {
  return mavlink_msg_uavcan_node_status_get_time_usec(&(self->_message));
}

- (uint32_t)uptimeSec {
  return mavlink_msg_uavcan_node_status_get_uptime_sec(&(self->_message));
}

- (UAVCAN_NODE_HEALTH)health {
  return mavlink_msg_uavcan_node_status_get_health(&(self->_message));
}

- (UAVCAN_NODE_MODE)mode {
  return mavlink_msg_uavcan_node_status_get_mode(&(self->_message));
}

- (uint8_t)subMode {
  return mavlink_msg_uavcan_node_status_get_sub_mode(&(self->_message));
}

- (uint16_t)vendorSpecificStatusCode {
  return mavlink_msg_uavcan_node_status_get_vendor_specific_status_code(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeUsec=%lld, uptimeSec=%d, health=%d, mode=%d, subMode=%d, vendorSpecificStatusCode=%d", [super description], [self timeUsec], [self uptimeSec], [self health], [self mode], [self subMode], [self vendorSpecificStatusCode]];
}

@end
