//
//  MVMessageVideoStreamStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a VIDEO_STREAM_STATUS Mavlink message.

 @discussion Information about the status of a video stream. It may be requested using MAV_CMD_REQUEST_MESSAGE.
 */
@interface MVMessageVideoStreamStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId streamId:(uint8_t)streamId flags:(VIDEO_STREAM_STATUS_FLAGS)flags framerate:(float)framerate resolutionH:(uint16_t)resolutionH resolutionV:(uint16_t)resolutionV bitrate:(uint32_t)bitrate rotation:(uint16_t)rotation hfov:(uint16_t)hfov;

//! Video Stream ID (1 for first, 2 for second, etc.)
- (uint8_t)streamId;

//! Bitmap of stream status flags
- (VIDEO_STREAM_STATUS_FLAGS)flags;

//! Frame rate
- (float)framerate;

//! Horizontal resolution
- (uint16_t)resolutionH;

//! Vertical resolution
- (uint16_t)resolutionV;

//! Bit rate
- (uint32_t)bitrate;

//! Video image rotation clockwise
- (uint16_t)rotation;

//! Horizontal Field of view
- (uint16_t)hfov;

@end
