//
//  MVMessageLoggingAck.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a LOGGING_ACK Mavlink message.

 @discussion An ack for a LOGGING_DATA_ACKED message
 */
@interface MVMessageLoggingAck : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent sequence:(uint16_t)sequence;

//! system ID of the target
- (uint8_t)targetSystem;

//! component ID of the target
- (uint8_t)targetComponent;

//! sequence number (must match the one in LOGGING_DATA_ACKED)
- (uint16_t)sequence;

@end
