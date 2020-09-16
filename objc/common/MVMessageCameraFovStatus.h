//
//  MVMessageCameraFovStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a CAMERA_FOV_STATUS Mavlink message.

 @discussion Information about the field of view of a camera. Can be requested with a MAV_CMD_REQUEST_MESSAGE command.
 */
@interface MVMessageCameraFovStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs latCamera:(int32_t)latCamera lonCamera:(int32_t)lonCamera altCamera:(int32_t)altCamera latImage:(int32_t)latImage lonImage:(int32_t)lonImage altImage:(int32_t)altImage q:(float *)q hfov:(float)hfov vfov:(float)vfov;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Latitude of camera (INT32_MAX if unknown).
- (int32_t)latCamera;

//! Longitude of camera (INT32_MAX if unknown).
- (int32_t)lonCamera;

//! Altitude (MSL) of camera (INT32_MAX if unknown).
- (int32_t)altCamera;

//! Latitude of center of image (INT32_MAX if unknown, INT32_MIN if at infinity, not intersecting with horizon).
- (int32_t)latImage;

//! Longitude of center of image (INT32_MAX if unknown, INT32_MIN if at infinity, not intersecting with horizon).
- (int32_t)lonImage;

//! Altitude (MSL) of center of image (INT32_MAX if unknown, INT32_MIN if at infinity, not intersecting with horizon).
- (int32_t)altImage;

//! Quaternion of camera orientation (w, x, y, z order, zero-rotation is 1, 0, 0, 0)
- (uint16_t)q:(float *)q;

//! Horizontal field of view (NaN if unknown).
- (float)hfov;

//! Vertical field of view (NaN if unknown).
- (float)vfov;

@end
