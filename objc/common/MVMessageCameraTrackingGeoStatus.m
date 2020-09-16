//
//  MVMessageCameraTrackingGeoStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageCameraTrackingGeoStatus.h"

@implementation MVMessageCameraTrackingGeoStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId trackingStatus:(CAMERA_TRACKING_STATUS_FLAGS)trackingStatus lat:(int32_t)lat lon:(int32_t)lon alt:(float)alt hAcc:(float)hAcc vAcc:(float)vAcc velN:(float)velN velE:(float)velE velD:(float)velD velAcc:(float)velAcc dist:(float)dist hdg:(float)hdg hdgAcc:(float)hdgAcc {
  if ((self = [super init])) {
    mavlink_msg_camera_tracking_geo_status_pack(systemId, componentId, &(self->_message), trackingStatus, lat, lon, alt, hAcc, vAcc, velN, velE, velD, velAcc, dist, hdg, hdgAcc);
  }
  return self;
}

- (CAMERA_TRACKING_STATUS_FLAGS)trackingStatus {
  return mavlink_msg_camera_tracking_geo_status_get_tracking_status(&(self->_message));
}

- (int32_t)lat {
  return mavlink_msg_camera_tracking_geo_status_get_lat(&(self->_message));
}

- (int32_t)lon {
  return mavlink_msg_camera_tracking_geo_status_get_lon(&(self->_message));
}

- (float)alt {
  return mavlink_msg_camera_tracking_geo_status_get_alt(&(self->_message));
}

- (float)hAcc {
  return mavlink_msg_camera_tracking_geo_status_get_h_acc(&(self->_message));
}

- (float)vAcc {
  return mavlink_msg_camera_tracking_geo_status_get_v_acc(&(self->_message));
}

- (float)velN {
  return mavlink_msg_camera_tracking_geo_status_get_vel_n(&(self->_message));
}

- (float)velE {
  return mavlink_msg_camera_tracking_geo_status_get_vel_e(&(self->_message));
}

- (float)velD {
  return mavlink_msg_camera_tracking_geo_status_get_vel_d(&(self->_message));
}

- (float)velAcc {
  return mavlink_msg_camera_tracking_geo_status_get_vel_acc(&(self->_message));
}

- (float)dist {
  return mavlink_msg_camera_tracking_geo_status_get_dist(&(self->_message));
}

- (float)hdg {
  return mavlink_msg_camera_tracking_geo_status_get_hdg(&(self->_message));
}

- (float)hdgAcc {
  return mavlink_msg_camera_tracking_geo_status_get_hdg_acc(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, trackingStatus=%d, lat=%d, lon=%d, alt=%f, hAcc=%f, vAcc=%f, velN=%f, velE=%f, velD=%f, velAcc=%f, dist=%f, hdg=%f, hdgAcc=%f", [super description], [self trackingStatus], [self lat], [self lon], [self alt], [self hAcc], [self vAcc], [self velN], [self velE], [self velD], [self velAcc], [self dist], [self hdg], [self hdgAcc]];
}

@end
