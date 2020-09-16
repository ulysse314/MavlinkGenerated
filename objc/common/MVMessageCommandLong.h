//
//  MVMessageCommandLong.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a COMMAND_LONG Mavlink message.

 @discussion Send a command with up to seven parameters to the MAV. The command microservice is documented at https://mavlink.io/en/services/command.html
 */
@interface MVMessageCommandLong : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent command:(MAV_CMD)command confirmation:(uint8_t)confirmation param1:(float)param1 param2:(float)param2 param3:(float)param3 param4:(float)param4 param5:(float)param5 param6:(float)param6 param7:(float)param7;

//! System which should execute the command
- (uint8_t)targetSystem;

//! Component which should execute the command, 0 for all components
- (uint8_t)targetComponent;

//! Command ID (of command to send).
- (MAV_CMD)command;

//! 0: First transmission of this command. 1-255: Confirmation transmissions (e.g. for kill command)
- (uint8_t)confirmation;

//! Parameter 1 (for the specific command).
- (float)param1;

//! Parameter 2 (for the specific command).
- (float)param2;

//! Parameter 3 (for the specific command).
- (float)param3;

//! Parameter 4 (for the specific command).
- (float)param4;

//! Parameter 5 (for the specific command).
- (float)param5;

//! Parameter 6 (for the specific command).
- (float)param6;

//! Parameter 7 (for the specific command).
- (float)param7;

@end
