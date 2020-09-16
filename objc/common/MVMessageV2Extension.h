//
//  MVMessageV2Extension.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a V2_EXTENSION Mavlink message.

 @discussion Message implementing parts of the V2 payload specs in V1 frames for transitional support.
 */
@interface MVMessageV2Extension : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetNetwork:(uint8_t)targetNetwork targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent messageType:(uint16_t)messageType payload:(uint8_t *)payload;

//! Network ID (0 for broadcast)
- (uint8_t)targetNetwork;

//! System ID (0 for broadcast)
- (uint8_t)targetSystem;

//! Component ID (0 for broadcast)
- (uint8_t)targetComponent;

//! A code that identifies the software component that understands this message (analogous to USB device classes or mime type strings). If this code is less than 32768, it is considered a 'registered' protocol extension and the corresponding entry should be added to https://github.com/mavlink/mavlink/definition_files/extension_message_ids.xml. Software creators can register blocks of message IDs as needed (useful for GCS specific metadata, etc...). Message_types greater than 32767 are considered local experiments and should not be checked in to any widely distributed codebase.
- (uint16_t)messageType;

//! Variable length payload. The length must be encoded in the payload as part of the message_type protocol, e.g. by including the length as payload data, or by terminating the payload data with a non-zero marker. This is required in order to reconstruct zero-terminated payloads that are (or otherwise would be) trimmed by MAVLink 2 empty-byte truncation. The entire content of the payload block is opaque unless you understand the encoding message_type. The particular encoding used can be extension specific and might not always be documented as part of the MAVLink specification.
- (uint16_t)payload:(uint8_t *)payload;

@end
