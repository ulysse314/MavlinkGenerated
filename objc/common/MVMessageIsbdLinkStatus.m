//
//  MVMessageIsbdLinkStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageIsbdLinkStatus.h"

@implementation MVMessageIsbdLinkStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timestamp:(uint64_t)timestamp lastHeartbeat:(uint64_t)lastHeartbeat failedSessions:(uint16_t)failedSessions successfulSessions:(uint16_t)successfulSessions signalQuality:(uint8_t)signalQuality ringPending:(uint8_t)ringPending txSessionPending:(uint8_t)txSessionPending rxSessionPending:(uint8_t)rxSessionPending {
  if ((self = [super init])) {
    mavlink_msg_isbd_link_status_pack(systemId, componentId, &(self->_message), timestamp, lastHeartbeat, failedSessions, successfulSessions, signalQuality, ringPending, txSessionPending, rxSessionPending);
  }
  return self;
}

- (uint64_t)timestamp {
  return mavlink_msg_isbd_link_status_get_timestamp(&(self->_message));
}

- (uint64_t)lastHeartbeat {
  return mavlink_msg_isbd_link_status_get_last_heartbeat(&(self->_message));
}

- (uint16_t)failedSessions {
  return mavlink_msg_isbd_link_status_get_failed_sessions(&(self->_message));
}

- (uint16_t)successfulSessions {
  return mavlink_msg_isbd_link_status_get_successful_sessions(&(self->_message));
}

- (uint8_t)signalQuality {
  return mavlink_msg_isbd_link_status_get_signal_quality(&(self->_message));
}

- (uint8_t)ringPending {
  return mavlink_msg_isbd_link_status_get_ring_pending(&(self->_message));
}

- (uint8_t)txSessionPending {
  return mavlink_msg_isbd_link_status_get_tx_session_pending(&(self->_message));
}

- (uint8_t)rxSessionPending {
  return mavlink_msg_isbd_link_status_get_rx_session_pending(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timestamp=%lld, lastHeartbeat=%lld, failedSessions=%d, successfulSessions=%d, signalQuality=%d, ringPending=%d, txSessionPending=%d, rxSessionPending=%d", [super description], [self timestamp], [self lastHeartbeat], [self failedSessions], [self successfulSessions], [self signalQuality], [self ringPending], [self txSessionPending], [self rxSessionPending]];
}

@end
