//
//  MVMessageCameraImageCaptured.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a CAMERA_IMAGE_CAPTURED Mavlink message.

 @discussion Information about a captured image. This is emitted every time a message is captured. It may be re-requested using MAV_CMD_REQUEST_MESSAGE, using param2 to indicate the sequence number for the missing image.
 */
@interface MVMessageCameraImageCaptured : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs timeUtc:(uint64_t)timeUtc cameraId:(uint8_t)cameraId lat:(int32_t)lat lon:(int32_t)lon alt:(int32_t)alt relativeAlt:(int32_t)relativeAlt q:(float *)q imageIndex:(int32_t)imageIndex captureResult:(int8_t)captureResult fileUrl:(char *)fileUrl;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Timestamp (time since UNIX epoch) in UTC. 0 for unknown.
- (uint64_t)timeUtc;

//! Deprecated/unused. Component IDs are used to differentiate multiple cameras.
- (uint8_t)cameraId;

//! Latitude where image was taken
- (int32_t)lat;

//! Longitude where capture was taken
- (int32_t)lon;

//! Altitude (MSL) where image was taken
- (int32_t)alt;

//! Altitude above ground
- (int32_t)relativeAlt;

//! Quaternion of camera orientation (w, x, y, z order, zero-rotation is 1, 0, 0, 0)
- (uint16_t)q:(float *)q;

//! Zero based index of this image (i.e. a new image will have index CAMERA_CAPTURE_STATUS.image count -1)
- (int32_t)imageIndex;

//! Boolean indicating success (1) or failure (0) while capturing this image.
- (int8_t)captureResult;

//! URL of image taken. Either local storage or http://foo.jpg if camera provides an HTTP interface.
- (NSString *)fileUrl;

@end
