//
//  MVMessageCommandCancel.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a COMMAND_CANCEL Mavlink message.

 @discussion Cancel a long running command. The target system should respond with a COMMAND_ACK to the original command with result=MAV_RESULT_CANCELLED if the long running process was cancelled. If it has already completed, the cancel action can be ignored. The cancel action can be retried until some sort of acknowledgement to the original command has been received. The command microservice is documented at https://mavlink.io/en/services/command.html
 */
@interface MVMessageCommandCancel : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent command:(MAV_CMD)command;

//! System executing long running command. Should not be broadcast (0).
- (uint8_t)targetSystem;

//! Component executing long running command.
- (uint8_t)targetComponent;

//! Command ID (of command to cancel).
- (MAV_CMD)command;

@end
