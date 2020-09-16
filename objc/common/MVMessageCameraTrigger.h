//
//  MVMessageCameraTrigger.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a CAMERA_TRIGGER Mavlink message.

 @discussion Camera-IMU triggering and synchronisation message.
 */
@interface MVMessageCameraTrigger : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec seq:(uint32_t)seq;

//! Timestamp for image frame (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Image frame sequence
- (uint32_t)seq;

@end
