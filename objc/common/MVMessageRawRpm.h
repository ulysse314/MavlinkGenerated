//
//  MVMessageRawRpm.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a RAW_RPM Mavlink message.

 @discussion RPM sensor data message.
 */
@interface MVMessageRawRpm : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId index:(uint8_t)index frequency:(float)frequency;

//! Index of this RPM sensor (0-indexed)
- (uint8_t)index;

//! Indicated rate
- (float)frequency;

@end
