//
//  MVMessageCameraCaptureStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a CAMERA_CAPTURE_STATUS Mavlink message.

 @discussion Information about the status of a capture. Can be requested with a MAV_CMD_REQUEST_MESSAGE command.
 */
@interface MVMessageCameraCaptureStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs imageStatus:(uint8_t)imageStatus videoStatus:(uint8_t)videoStatus imageInterval:(float)imageInterval recordingTimeMs:(uint32_t)recordingTimeMs availableCapacity:(float)availableCapacity imageCount:(int32_t)imageCount;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Current status of image capturing (0: idle, 1: capture in progress, 2: interval set but idle, 3: interval set and capture in progress)
- (uint8_t)imageStatus;

//! Current status of video capturing (0: idle, 1: capture in progress)
- (uint8_t)videoStatus;

//! Image capture interval
- (float)imageInterval;

//! Time since recording started
- (uint32_t)recordingTimeMs;

//! Available storage capacity.
- (float)availableCapacity;

//! Total number of images captured ('forever', or until reset using MAV_CMD_STORAGE_FORMAT).
- (int32_t)imageCount;

@end
