//
//  MVMessageGimbalManagerSetTiltpan.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a GIMBAL_MANAGER_SET_TILTPAN Mavlink message.

 @discussion High level message to control a gimbal's tilt and pan angles. This message is to be sent to the gimbal manager (e.g. from a ground station). Angles and rates can be set to NaN according to use case.
 */
@interface MVMessageGimbalManagerSetTiltpan : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent flags:(GIMBAL_MANAGER_FLAGS)flags gimbalDeviceId:(uint8_t)gimbalDeviceId tilt:(float)tilt pan:(float)pan tiltRate:(float)tiltRate panRate:(float)panRate;

//! System ID
- (uint8_t)targetSystem;

//! Component ID
- (uint8_t)targetComponent;

//! High level gimbal manager flags to use.
- (GIMBAL_MANAGER_FLAGS)flags;

//! Component ID of gimbal device to address (or 1-6 for non-MAVLink gimbal), 0 for all gimbal device components. (Send command multiple times for more than one but not all gimbals.)
- (uint8_t)gimbalDeviceId;

//! Tilt/pitch angle (positive: up, negative: down, NaN to be ignored).
- (float)tilt;

//! Pan/yaw angle (positive: to the right, negative: to the left, NaN to be ignored).
- (float)pan;

//! Tilt/pitch angular rate (positive: up, negative: down, NaN to be ignored).
- (float)tiltRate;

//! Pan/yaw angular rate (positive: to the right, negative: to the left, NaN to be ignored).
- (float)panRate;

@end
