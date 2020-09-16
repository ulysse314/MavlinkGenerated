//
//  MVMessageCommandCancel.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageCommandCancel.h"

@implementation MVMessageCommandCancel

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent command:(MAV_CMD)command {
  if ((self = [super init])) {
    mavlink_msg_command_cancel_pack(systemId, componentId, &(self->_message), targetSystem, targetComponent, command);
  }
  return self;
}

- (uint8_t)targetSystem {
  return mavlink_msg_command_cancel_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_command_cancel_get_target_component(&(self->_message));
}

- (MAV_CMD)command {
  return mavlink_msg_command_cancel_get_command(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, targetSystem=%d, targetComponent=%d, command=%d", [super description], [self targetSystem], [self targetComponent], [self command]];
}

@end
