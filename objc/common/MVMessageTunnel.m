//
//  MVMessageTunnel.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageTunnel.h"

@implementation MVMessageTunnel

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent payloadType:(MAV_TUNNEL_PAYLOAD_TYPE)payloadType payloadLength:(uint8_t)payloadLength payload:(uint8_t *)payload {
  if ((self = [super init])) {
    mavlink_msg_tunnel_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, payloadType, payloadLength, payload);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_tunnel_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_tunnel_get_target_component(&(self->_message));
}

- (MAV_TUNNEL_PAYLOAD_TYPE)payloadType {
  return mavlink_msg_tunnel_get_payload_type(&(self->_message));
}

- (uint8_t)payloadLength {
  return mavlink_msg_tunnel_get_payload_length(&(self->_message));
}

- (uint16_t)payload:(uint8_t *)payload {
  return mavlink_msg_tunnel_get_payload(&(self->_message), payload);
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, payloadType=%d, payloadLength=%d, payload=%@", [super description], [self targetSystem], [self targetComponent], [self payloadType], [self payloadLength], @"[array of uint8_t[128]]"];
}

@end
