//
//  MVMessageOpticalFlow.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a OPTICAL_FLOW Mavlink message.

 @discussion Optical flow from a flow sensor (e.g. optical mouse sensor)
 */
@interface MVMessageOpticalFlow : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec sensorId:(uint8_t)sensorId flowX:(int16_t)flowX flowY:(int16_t)flowY flowCompMX:(float)flowCompMX flowCompMY:(float)flowCompMY quality:(uint8_t)quality groundDistance:(float)groundDistance flowRateX:(float)flowRateX flowRateY:(float)flowRateY;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Sensor ID
- (uint8_t)sensorId;

//! Flow in x-sensor direction
- (int16_t)flowX;

//! Flow in y-sensor direction
- (int16_t)flowY;

//! Flow in x-sensor direction, angular-speed compensated
- (float)flowCompMX;

//! Flow in y-sensor direction, angular-speed compensated
- (float)flowCompMY;

//! Optical flow quality / confidence. 0: bad, 255: maximum quality
- (uint8_t)quality;

//! Ground distance. Positive value: distance known. Negative value: Unknown distance
- (float)groundDistance;

//! Flow rate about X axis
- (float)flowRateX;

//! Flow rate about Y axis
- (float)flowRateY;

@end
