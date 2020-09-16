//
//  MVMessageFenceStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a FENCE_STATUS Mavlink message.

 @discussion Status of geo-fencing. Sent in extended status stream when fencing enabled.
 */
@interface MVMessageFenceStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId breachStatus:(uint8_t)breachStatus breachCount:(uint16_t)breachCount breachType:(FENCE_BREACH)breachType breachTime:(uint32_t)breachTime breachMitigation:(FENCE_MITIGATE)breachMitigation;

//! Breach status (0 if currently inside fence, 1 if outside).
- (uint8_t)breachStatus;

//! Number of fence breaches.
- (uint16_t)breachCount;

//! Last breach type.
- (FENCE_BREACH)breachType;

//! Time (since boot) of last breach.
- (uint32_t)breachTime;

//! Active action to prevent fence breach
- (FENCE_MITIGATE)breachMitigation;

@end
