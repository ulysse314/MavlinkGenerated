//
//  MVMessageCameraTrackingImageStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageCameraTrackingImageStatus.h"

@implementation MVMessageCameraTrackingImageStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId trackingStatus:(CAMERA_TRACKING_STATUS_FLAGS)trackingStatus trackingMode:(CAMERA_TRACKING_MODE)trackingMode targetData:(CAMERA_TRACKING_TARGET_DATA)targetData pointX:(float)pointX pointY:(float)pointY radius:(float)radius recTopX:(float)recTopX recTopY:(float)recTopY recBottomX:(float)recBottomX recBottomY:(float)recBottomY {
  if ((self = [super init])) {
    mavlink_msg_camera_tracking_image_status_pack(systemId, componentId, &(self->_message), trackingStatus, trackingMode, targetData, pointX, pointY, radius, recTopX, recTopY, recBottomX, recBottomY);
  }
  return self;
}

- (CAMERA_TRACKING_STATUS_FLAGS)trackingStatus {
  return mavlink_msg_camera_tracking_image_status_get_tracking_status(&(self->_message));
}

- (CAMERA_TRACKING_MODE)trackingMode {
  return mavlink_msg_camera_tracking_image_status_get_tracking_mode(&(self->_message));
}

- (CAMERA_TRACKING_TARGET_DATA)targetData {
  return mavlink_msg_camera_tracking_image_status_get_target_data(&(self->_message));
}

- (float)pointX {
  return mavlink_msg_camera_tracking_image_status_get_point_x(&(self->_message));
}

- (float)pointY {
  return mavlink_msg_camera_tracking_image_status_get_point_y(&(self->_message));
}

- (float)radius {
  return mavlink_msg_camera_tracking_image_status_get_radius(&(self->_message));
}

- (float)recTopX {
  return mavlink_msg_camera_tracking_image_status_get_rec_top_x(&(self->_message));
}

- (float)recTopY {
  return mavlink_msg_camera_tracking_image_status_get_rec_top_y(&(self->_message));
}

- (float)recBottomX {
  return mavlink_msg_camera_tracking_image_status_get_rec_bottom_x(&(self->_message));
}

- (float)recBottomY {
  return mavlink_msg_camera_tracking_image_status_get_rec_bottom_y(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, trackingStatus=%d, trackingMode=%d, targetData=%d, pointX=%f, pointY=%f, radius=%f, recTopX=%f, recTopY=%f, recBottomX=%f, recBottomY=%f", [super description], [self trackingStatus], [self trackingMode], [self targetData], [self pointX], [self pointY], [self radius], [self recTopX], [self recTopY], [self recBottomX], [self recBottomY]];
}

@end
