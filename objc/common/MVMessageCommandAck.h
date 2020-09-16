//
//  MVMessageCommandAck.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a COMMAND_ACK Mavlink message.

 @discussion Report status of a command. Includes feedback whether the command was executed. The command microservice is documented at https://mavlink.io/en/services/command.html
 */
@interface MVMessageCommandAck : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId command:(MAV_CMD)command result:(MAV_RESULT)result progress:(uint8_t)progress resultParam2:(int32_t)resultParam2 targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent;

//! Command ID (of acknowledged command).
- (MAV_CMD)command;

//! Result of command.
- (MAV_RESULT)result;

//! WIP: Also used as result_param1, it can be set with a enum containing the errors reasons of why the command was denied or the progress percentage or 255 if unknown the progress when result is MAV_RESULT_IN_PROGRESS.
- (uint8_t)progress;

//! WIP: Additional parameter of the result, example: which parameter of MAV_CMD_NAV_WAYPOINT caused it to be denied.
- (int32_t)resultParam2;

//! WIP: System which requested the command to be executed
- (uint8_t)targetSystem;

//! WIP: Component which requested the command to be executed
- (uint8_t)targetComponent;

@end
