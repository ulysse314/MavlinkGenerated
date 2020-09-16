//
//  MVMessageCameraTrackingImageStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a CAMERA_TRACKING_IMAGE_STATUS Mavlink message.

 @discussion Camera tracking status, sent while in active tracking. Use MAV_CMD_SET_MESSAGE_INTERVAL to define message interval.
 */
@interface MVMessageCameraTrackingImageStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId trackingStatus:(CAMERA_TRACKING_STATUS_FLAGS)trackingStatus trackingMode:(CAMERA_TRACKING_MODE)trackingMode targetData:(CAMERA_TRACKING_TARGET_DATA)targetData pointX:(float)pointX pointY:(float)pointY radius:(float)radius recTopX:(float)recTopX recTopY:(float)recTopY recBottomX:(float)recBottomX recBottomY:(float)recBottomY;

//! Current tracking status
- (CAMERA_TRACKING_STATUS_FLAGS)trackingStatus;

//! Current tracking mode
- (CAMERA_TRACKING_MODE)trackingMode;

//! Defines location of target data
- (CAMERA_TRACKING_TARGET_DATA)targetData;

//! Current tracked point x value if CAMERA_TRACKING_POINT (normalized 0..1, 0 is left, 1 is right), NAN if unknown
- (float)pointX;

//! Current tracked point y value if CAMERA_TRACKING_POINT (normalized 0..1, 0 is top, 1 is bottom), NAN if unknown
- (float)pointY;

//! Current tracked radius if CAMERA_TRACKING_POINT (normalized 0..1, 0 is image left, 1 is image right), NAN if unknown
- (float)radius;

//! Current tracked rectangle top x value if CAMERA_TRACKING_RECTANGLE (normalized 0..1, 0 is left, 1 is right), NAN if unknown
- (float)recTopX;

//! Current tracked rectangle top y value if CAMERA_TRACKING_RECTANGLE (normalized 0..1, 0 is top, 1 is bottom), NAN if unknown
- (float)recTopY;

//! Current tracked rectangle bottom x value if CAMERA_TRACKING_RECTANGLE (normalized 0..1, 0 is left, 1 is right), NAN if unknown
- (float)recBottomX;

//! Current tracked rectangle bottom y value if CAMERA_TRACKING_RECTANGLE (normalized 0..1, 0 is top, 1 is bottom), NAN if unknown
- (float)recBottomY;

@end
