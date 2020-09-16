//
//  MVMessageGimbalDeviceInformation.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a GIMBAL_DEVICE_INFORMATION Mavlink message.

 @discussion Information about a low level gimbal. This message should be requested by the gimbal manager or a ground station using MAV_CMD_REQUEST_MESSAGE.
 */
@interface MVMessageGimbalDeviceInformation : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs vendorName:(uint8_t *)vendorName modelName:(uint8_t *)modelName firmwareVersion:(uint32_t)firmwareVersion capFlags:(GIMBAL_DEVICE_CAP_FLAGS)capFlags tiltMax:(float)tiltMax tiltMin:(float)tiltMin tiltRateMax:(float)tiltRateMax panMax:(float)panMax panMin:(float)panMin panRateMax:(float)panRateMax;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Name of the gimbal vendor
- (uint16_t)vendorName:(uint8_t *)vendor_name;

//! Name of the gimbal model
- (uint16_t)modelName:(uint8_t *)model_name;

//! Version of the gimbal firmware, encoded as: (Dev & 0xff) << 24 | (Patch & 0xff) << 16 | (Minor & 0xff) << 8 | (Major & 0xff)
- (uint32_t)firmwareVersion;

//! Bitmap of gimbal capability flags.
- (GIMBAL_DEVICE_CAP_FLAGS)capFlags;

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
