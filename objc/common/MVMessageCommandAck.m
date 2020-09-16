//
//  MVMessageCommandAck.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageCommandAck.h"

@implementation MVMessageCommandAck

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId command:(MAV_CMD)command result:(MAV_RESULT)result progress:(uint8_t)progress resultParam2:(int32_t)resultParam2 targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent {
  if ((self = [super init])) {
    mavlink_msg_command_ack_pack(systemId, componentId, &(self->_message), command, result, progress, resultParam2, targetSystem, targetComponent);
  }
  return self;
}

- (MAV_CMD)command {
  return mavlink_msg_command_ack_get_command(&(self->_message));
}

- (MAV_RESULT)result {
  return mavlink_msg_command_ack_get_result(&(self->_message));
}

- (uint8_t)progress {
  return mavlink_msg_command_ack_get_progress(&(self->_message));
}

- (int32_t)resultParam2 {
  return mavlink_msg_command_ack_get_result_param2(&(self->_message));
}

- (uint8_t)targetSystem {
  return mavlink_msg_command_ack_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_command_ack_get_target_component(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, command=%d, result=%d, progress=%d, resultParam2=%d, targetSystem=%d, targetComponent=%d", [super description], [self command], [self result], [self progress], [self resultParam2], [self targetSystem], [self targetComponent]];
}

@end
