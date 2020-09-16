//
//  MVMessageVibration.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a VIBRATION Mavlink message.

 @discussion Vibration levels and accelerometer clipping
 */
@interface MVMessageVibration : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec vibrationX:(float)vibrationX vibrationY:(float)vibrationY vibrationZ:(float)vibrationZ clipping0:(uint32_t)clipping0 clipping1:(uint32_t)clipping1 clipping2:(uint32_t)clipping2;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Vibration levels on X-axis
- (float)vibrationX;

//! Vibration levels on Y-axis
- (float)vibrationY;

//! Vibration levels on Z-axis
- (float)vibrationZ;

//! first accelerometer clipping count
- (uint32_t)clipping0;

//! second accelerometer clipping count
- (uint32_t)clipping1;

//! third accelerometer clipping count
- (uint32_t)clipping2;

@end
