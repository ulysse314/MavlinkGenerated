//
//  MVMessageLoggingDataAcked.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a LOGGING_DATA_ACKED Mavlink message.

 @discussion A message containing logged data which requires a LOGGING_ACK to be sent back
 */
@interface MVMessageLoggingDataAcked : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent sequence:(uint16_t)sequence length:(uint8_t)length firstMessageOffset:(uint8_t)firstMessageOffset data:(uint8_t *)data;

//! system ID of the target
- (uint8_t)targetSystem;

//! component ID of the target
- (uint8_t)targetComponent;

//! sequence number (can wrap)
- (uint16_t)sequence;

//! data length
- (uint8_t)length;

//! offset into data where first message starts. This can be used for recovery, when a previous message got lost (set to 255 if no start exists).
- (uint8_t)firstMessageOffset;

//! logged data
- (uint16_t)data:(uint8_t *)data;

@end
