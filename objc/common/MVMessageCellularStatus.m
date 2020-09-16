//
//  MVMessageCellularStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageCellularStatus.h"

@implementation MVMessageCellularStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId status:(CELLULAR_STATUS_FLAG)status failureReason:(CELLULAR_NETWORK_FAILED_REASON)failureReason type:(CELLULAR_NETWORK_RADIO_TYPE)type quality:(uint8_t)quality mcc:(uint16_t)mcc mnc:(uint16_t)mnc lac:(uint16_t)lac {
  if ((self = [super init])) {
    mavlink_msg_cellular_status_pack(systemId, componentId, &(self->_message), status, failureReason, type, quality, mcc, mnc, lac);
  }
  return self;
}

- (CELLULAR_STATUS_FLAG)status {
  return mavlink_msg_cellular_status_get_status(&(self->_message));
}

- (CELLULAR_NETWORK_FAILED_REASON)failureReason {
  return mavlink_msg_cellular_status_get_failure_reason(&(self->_message));
}

- (CELLULAR_NETWORK_RADIO_TYPE)type {
  return mavlink_msg_cellular_status_get_type(&(self->_message));
}

- (uint8_t)quality {
  return mavlink_msg_cellular_status_get_quality(&(self->_message));
}

- (uint16_t)mcc {
  return mavlink_msg_cellular_status_get_mcc(&(self->_message));
}

- (uint16_t)mnc {
  return mavlink_msg_cellular_status_get_mnc(&(self->_message));
}

- (uint16_t)lac {
  return mavlink_msg_cellular_status_get_lac(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, status=%d, failureReason=%d, type=%d, quality=%d, mcc=%d, mnc=%d, lac=%d", [super description], [self status], [self failureReason], [self type], [self quality], [self mcc], [self mnc], [self lac]];
}

@end
