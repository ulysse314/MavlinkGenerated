//
//  MVMessageMagCalReport.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageMagCalReport.h"

@implementation MVMessageMagCalReport

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId compassId:(uint8_t)compassId calMask:(uint8_t)calMask calStatus:(MAG_CAL_STATUS)calStatus autosaved:(uint8_t)autosaved fitness:(float)fitness ofsX:(float)ofsX ofsY:(float)ofsY ofsZ:(float)ofsZ diagX:(float)diagX diagY:(float)diagY diagZ:(float)diagZ offdiagX:(float)offdiagX offdiagY:(float)offdiagY offdiagZ:(float)offdiagZ orientationConfidence:(float)orientationConfidence oldOrientation:(MAV_SENSOR_ORIENTATION)oldOrientation newOrientation:(MAV_SENSOR_ORIENTATION)newOrientation scaleFactor:(float)scaleFactor {
  if ((self = [super init])) {
    mavlink_msg_mag_cal_report_pack(systemId, componentId, &(self->_message), compassId, calMask, calStatus, autosaved, fitness, ofsX, ofsY, ofsZ, diagX, diagY, diagZ, offdiagX, offdiagY, offdiagZ, orientationConfidence, oldOrientation, newOrientation, scaleFactor);
  }
  return self;
}

- (uint8_t)compassId {
  return mavlink_msg_mag_cal_report_get_compass_id(&(self->_message));
}

- (uint8_t)calMask {
  return mavlink_msg_mag_cal_report_get_cal_mask(&(self->_message));
}

- (MAG_CAL_STATUS)calStatus {
  return mavlink_msg_mag_cal_report_get_cal_status(&(self->_message));
}

- (uint8_t)autosaved {
  return mavlink_msg_mag_cal_report_get_autosaved(&(self->_message));
}

- (float)fitness {
  return mavlink_msg_mag_cal_report_get_fitness(&(self->_message));
}

- (float)ofsX {
  return mavlink_msg_mag_cal_report_get_ofs_x(&(self->_message));
}

- (float)ofsY {
  return mavlink_msg_mag_cal_report_get_ofs_y(&(self->_message));
}

- (float)ofsZ {
  return mavlink_msg_mag_cal_report_get_ofs_z(&(self->_message));
}

- (float)diagX {
  return mavlink_msg_mag_cal_report_get_diag_x(&(self->_message));
}

- (float)diagY {
  return mavlink_msg_mag_cal_report_get_diag_y(&(self->_message));
}

- (float)diagZ {
  return mavlink_msg_mag_cal_report_get_diag_z(&(self->_message));
}

- (float)offdiagX {
  return mavlink_msg_mag_cal_report_get_offdiag_x(&(self->_message));
}

- (float)offdiagY {
  return mavlink_msg_mag_cal_report_get_offdiag_y(&(self->_message));
}

- (float)offdiagZ {
  return mavlink_msg_mag_cal_report_get_offdiag_z(&(self->_message));
}

- (float)orientationConfidence {
  return mavlink_msg_mag_cal_report_get_orientation_confidence(&(self->_message));
}

- (MAV_SENSOR_ORIENTATION)oldOrientation {
  return mavlink_msg_mag_cal_report_get_old_orientation(&(self->_message));
}

- (MAV_SENSOR_ORIENTATION)newOrientation {
  return mavlink_msg_mag_cal_report_get_new_orientation(&(self->_message));
}

- (float)scaleFactor {
  return mavlink_msg_mag_cal_report_get_scale_factor(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, compassId=%d, calMask=%d, calStatus=%d, autosaved=%d, fitness=%f, ofsX=%f, ofsY=%f, ofsZ=%f, diagX=%f, diagY=%f, diagZ=%f, offdiagX=%f, offdiagY=%f, offdiagZ=%f, orientationConfidence=%f, oldOrientation=%d, newOrientation=%d, scaleFactor=%f", [super description], [self compassId], [self calMask], [self calStatus], [self autosaved], [self fitness], [self ofsX], [self ofsY], [self ofsZ], [self diagX], [self diagY], [self diagZ], [self offdiagX], [self offdiagY], [self offdiagZ], [self orientationConfidence], [self oldOrientation], [self newOrientation], [self scaleFactor]];
}

@end
