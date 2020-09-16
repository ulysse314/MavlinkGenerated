//
//  MVMessageGimbalManagerInformation.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a GIMBAL_MANAGER_INFORMATION Mavlink message.

 @discussion Information about a high level gimbal manager. This message should be requested by a ground station using MAV_CMD_REQUEST_MESSAGE.
 */
@interface MVMessageGimbalManagerInformation : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs capFlags:(GIMBAL_MANAGER_CAP_FLAGS)capFlags gimbalDeviceId:(uint8_t)gimbalDeviceId tiltMax:(float)tiltMax tiltMin:(float)tiltMin tiltRateMax:(float)tiltRateMax panMax:(float)panMax panMin:(float)panMin panRateMax:(float)panRateMax;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Bitmap of gimbal capability flags.
- (GIMBAL_MANAGER_CAP_FLAGS)capFlags;

//! Gimbal device ID that this gimbal manager is responsible for.
- (uint8_t)gimbalDeviceId;

//! Maximum tilt/pitch angle (positive: up, negative: down)
- (float)tiltMax;

//! Minimum tilt/pitch angle (positive: up, negative: down)
- (float)tiltMin;

//! Maximum tilt/pitch angular rate (positive: up, negative: down)
- (float)tiltRateMax;

//! Maximum pan/yaw angle (positive: to the right, negative: to the left)
- (float)panMax;

//! Minimum pan/yaw angle (positive: to the right, negative: to the left)
- (float)panMin;

//! Minimum pan/yaw angular rate (positive: to the right, negative: to the left)
- (float)panRateMax;

@end
