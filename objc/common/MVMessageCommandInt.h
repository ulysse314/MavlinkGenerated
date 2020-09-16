//
//  MVMessageCommandInt.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a COMMAND_INT Mavlink message.

 @discussion Message encoding a command with parameters as scaled integers. Scaling depends on the actual command value. The command microservice is documented at https://mavlink.io/en/services/command.html
 */
@interface MVMessageCommandInt : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent frame:(MAV_FRAME)frame command:(MAV_CMD)command current:(uint8_t)current autocontinue:(uint8_t)autocontinue param1:(float)param1 param2:(float)param2 param3:(float)param3 param4:(float)param4 x:(int32_t)x y:(int32_t)y z:(float)z;

//! System ID
- (uint8_t)targetSystem;

//! Component ID
- (uint8_t)targetComponent;

//! The coordinate system of the COMMAND.
- (MAV_FRAME)frame;

//! The scheduled action for the mission item.
- (MAV_CMD)command;

//! false:0, true:1
- (uint8_t)current;

//! autocontinue to next wp
- (uint8_t)autocontinue;

//! PARAM1, see MAV_CMD enum
- (float)param1;

//! PARAM2, see MAV_CMD enum
- (float)param2;

//! PARAM3, see MAV_CMD enum
- (float)param3;

//! PARAM4, see MAV_CMD enum
- (float)param4;

//! PARAM5 / local: x position in meters * 1e4, global: latitude in degrees * 10^7
- (int32_t)x;

//! PARAM6 / local: y position in meters * 1e4, global: longitude in degrees * 10^7
- (int32_t)y;

//! PARAM7 / z position: global: altitude in meters (relative or absolute, depending on frame).
- (float)z;

@end
