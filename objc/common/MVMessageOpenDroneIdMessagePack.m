//
//  MVMessageOpenDroneIdMessagePack.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageOpenDroneIdMessagePack.h"

@implementation MVMessageOpenDroneIdMessagePack

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent singleMessageSize:(uint8_t)singleMessageSize msgPackSize:(uint8_t)msgPackSize messages:(uint8_t *)messages {
  if ((self = [super init])) {
    mavlink_msg_open_drone_id_message_pack_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, singleMessageSize, msgPackSize, messages);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_open_drone_id_message_pack_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_open_drone_id_message_pack_get_target_component(&(self->_message));
}

- (uint8_t)singleMessageSize {
  return mavlink_msg_open_drone_id_message_pack_get_single_message_size(&(self->_message));
}

- (uint8_t)msgPackSize {
  return mavlink_msg_open_drone_id_message_pack_get_msg_pack_size(&(self->_message));
}

- (uint16_t)messages:(uint8_t *)messages {
  return mavlink_msg_open_drone_id_message_pack_get_messages(&(self->_message), messages);
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, singleMessageSize=%d, msgPackSize=%d, messages=%@", [super description], [self targetSystem], [self targetComponent], [self singleMessageSize], [self msgPackSize], @"[array of uint8_t[250]]"];
}

@end
