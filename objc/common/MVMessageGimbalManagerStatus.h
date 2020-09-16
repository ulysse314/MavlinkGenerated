//
//  MVMessageGimbalManagerStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a GIMBAL_MANAGER_STATUS Mavlink message.

 @discussion Current status about a high level gimbal manager. This message should be broadcast at a low regular rate (e.g. 5Hz).
 */
@interface MVMessageGimbalManagerStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs flags:(GIMBAL_MANAGER_FLAGS)flags gimbalDeviceId:(uint8_t)gimbalDeviceId;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! High level gimbal manager flags currently applied.
- (GIMBAL_MANAGER_FLAGS)flags;

//! Gimbal device ID that this gimbal manager is responsible for.
- (uint8_t)gimbalDeviceId;

@end
