//
//  MVMessageStatustext.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a STATUSTEXT Mavlink message.

 @discussion Status text message. These messages are printed in yellow in the COMM console of QGroundControl. WARNING: They consume quite some bandwidth, so use only for important status and error messages. If implemented wisely, these messages are buffered on the MCU and sent only at a limited rate (e.g. 10 Hz).
 */
@interface MVMessageStatustext : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId severity:(MAV_SEVERITY)severity text:(char *)text id:(uint16_t)id chunkSeq:(uint8_t)chunkSeq;

//! Severity of status. Relies on the definitions within RFC-5424.
- (MAV_SEVERITY)severity;

//! Status text message, without null termination character
- (NSString *)text;

//! Unique (opaque) identifier for this statustext message.  May be used to reassemble a logical long-statustext message from a sequence of chunks.  A value of zero indicates this is the only chunk in the sequence and the message can be emitted immediately.
- (uint16_t)id;

//! This chunk's sequence number; indexing is from zero.  Any null character in the text field is taken to mean this was the last chunk.
- (uint8_t)chunkSeq;

@end
