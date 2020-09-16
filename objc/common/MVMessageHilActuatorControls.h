//
//  MVMessageHilActuatorControls.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a HIL_ACTUATOR_CONTROLS Mavlink message.

 @discussion Sent from autopilot to simulation. Hardware in the loop control outputs (replacement for HIL_CONTROLS)
 */
@interface MVMessageHilActuatorControls : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec controls:(float *)controls mode:(MAV_MODE_FLAG)mode flags:(uint64_t)flags;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Control outputs -1 .. 1. Channel assignment depends on the simulated hardware.
- (uint16_t)controls:(float *)controls;

//! System mode. Includes arming state.
- (MAV_MODE_FLAG)mode;

//! Flags as bitfield, 1: indicate simulation using lockstep.
- (uint64_t)flags;

@end
