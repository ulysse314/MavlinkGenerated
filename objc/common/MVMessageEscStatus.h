//
//  MVMessageEscStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a ESC_STATUS Mavlink message.

 @discussion ESC information for higher rate streaming. Recommended streaming rate is ~10 Hz. Information that changes more slowly is sent in ESC_INFO. It should typically only be streamed on high-bandwidth links (i.e. to a companion computer).
 */
@interface MVMessageEscStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId index:(uint8_t)index timeUsec:(uint64_t)timeUsec rpm:(int32_t *)rpm voltage:(float *)voltage current:(float *)current;

//! Index of the first ESC in this message. minValue = 0, maxValue = 60, increment = 4.
- (uint8_t)index;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude the number.
- (uint64_t)timeUsec;

//! Reported motor RPM from each ESC (negative for reverse rotation).
- (uint16_t)rpm:(int32_t *)rpm;

//! Voltage measured from each ESC.
- (uint16_t)voltage:(float *)voltage;

//! Current measured from each ESC.
- (uint16_t)current:(float *)current;

@end
