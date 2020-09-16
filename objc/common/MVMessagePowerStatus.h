//
//  MVMessagePowerStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a POWER_STATUS Mavlink message.

 @discussion Power supply status
 */
@interface MVMessagePowerStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId Vcc:(uint16_t)Vcc Vservo:(uint16_t)Vservo flags:(MAV_POWER_STATUS)flags;

//! 5V rail voltage.
- (uint16_t)Vcc;

//! Servo rail voltage.
- (uint16_t)Vservo;

//! Bitmap of power supply status flags.
- (MAV_POWER_STATUS)flags;

@end
