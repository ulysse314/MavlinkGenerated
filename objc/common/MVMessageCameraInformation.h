//
//  MVMessageCameraInformation.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a CAMERA_INFORMATION Mavlink message.

 @discussion Information about a camera. Can be requested with a MAV_CMD_REQUEST_MESSAGE command.
 */
@interface MVMessageCameraInformation : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs vendorName:(uint8_t *)vendorName modelName:(uint8_t *)modelName firmwareVersion:(uint32_t)firmwareVersion focalLength:(float)focalLength sensorSizeH:(float)sensorSizeH sensorSizeV:(float)sensorSizeV resolutionH:(uint16_t)resolutionH resolutionV:(uint16_t)resolutionV lensId:(uint8_t)lensId flags:(CAMERA_CAP_FLAGS)flags camDefinitionVersion:(uint16_t)camDefinitionVersion camDefinitionUri:(char *)camDefinitionUri;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Name of the camera vendor
- (uint16_t)vendorName:(uint8_t *)vendor_name;

//! Name of the camera model
- (uint16_t)modelName:(uint8_t *)model_name;

//! Version of the camera firmware, encoded as: (Dev & 0xff) << 24 | (Patch & 0xff) << 16 | (Minor & 0xff) << 8 | (Major & 0xff)
- (uint32_t)firmwareVersion;

//! Focal length
- (float)focalLength;

//! Image sensor size horizontal
- (float)sensorSizeH;

//! Image sensor size vertical
- (float)sensorSizeV;

//! Horizontal image resolution
- (uint16_t)resolutionH;

//! Vertical image resolution
- (uint16_t)resolutionV;

//! Reserved for a lens ID
- (uint8_t)lensId;

//! Bitmap of camera capability flags.
- (CAMERA_CAP_FLAGS)flags;

//! Camera definition version (iteration)
- (uint16_t)camDefinitionVersion;

//! Camera definition URI (if any, otherwise only basic functions will be available). HTTP- (http://) and MAVLink FTP- (mavlinkftp://) formatted URIs are allowed (and both must be supported by any GCS that implements the Camera Protocol).
- (NSString *)camDefinitionUri;

@end
