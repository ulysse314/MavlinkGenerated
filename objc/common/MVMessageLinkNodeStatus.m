//
//  MVMessageLinkNodeStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageLinkNodeStatus.h"

@implementation MVMessageLinkNodeStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timestamp:(uint64_t)timestamp txBuf:(uint8_t)txBuf rxBuf:(uint8_t)rxBuf txRate:(uint32_t)txRate rxRate:(uint32_t)rxRate rxParseErr:(uint16_t)rxParseErr txOverflows:(uint16_t)txOverflows rxOverflows:(uint16_t)rxOverflows messagesSent:(uint32_t)messagesSent messagesReceived:(uint32_t)messagesReceived messagesLost:(uint32_t)messagesLost {
  if ((self = [super init])) {
    mavlink_msg_link_node_status_pack(systemId, componentId, &(self->_message), timestamp, txBuf, rxBuf, txRate, rxRate, rxParseErr, txOverflows, rxOverflows, messagesSent, messagesReceived, messagesLost);
  }
  return self;
}

- (uint64_t)timestamp {
  return mavlink_msg_link_node_status_get_timestamp(&(self->_message));
}

- (uint8_t)txBuf {
  return mavlink_msg_link_node_status_get_tx_buf(&(self->_message));
}

- (uint8_t)rxBuf {
  return mavlink_msg_link_node_status_get_rx_buf(&(self->_message));
}

- (uint32_t)txRate {
  return mavlink_msg_link_node_status_get_tx_rate(&(self->_message));
}

- (uint32_t)rxRate {
  return mavlink_msg_link_node_status_get_rx_rate(&(self->_message));
}

- (uint16_t)rxParseErr {
  return mavlink_msg_link_node_status_get_rx_parse_err(&(self->_message));
}

- (uint16_t)txOverflows {
  return mavlink_msg_link_node_status_get_tx_overflows(&(self->_message));
}

- (uint16_t)rxOverflows {
  return mavlink_msg_link_node_status_get_rx_overflows(&(self->_message));
}

- (uint32_t)messagesSent {
  return mavlink_msg_link_node_status_get_messages_sent(&(self->_message));
}

- (uint32_t)messagesReceived {
  return mavlink_msg_link_node_status_get_messages_received(&(self->_message));
}

- (uint32_t)messagesLost {
  return mavlink_msg_link_node_status_get_messages_lost(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timestamp=%lld, txBuf=%d, rxBuf=%d, txRate=%d, rxRate=%d, rxParseErr=%d, txOverflows=%d, rxOverflows=%d, messagesSent=%d, messagesReceived=%d, messagesLost=%d", [super description], [self timestamp], [self txBuf], [self rxBuf], [self txRate], [self rxRate], [self rxParseErr], [self txOverflows], [self rxOverflows], [self messagesSent], [self messagesReceived], [self messagesLost]];
}

@end
