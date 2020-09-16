//
//  MVMessageTunnel.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a TUNNEL Mavlink message.

 @discussion Message for transporting "arbitrary" variable-length data from one component to another (broadcast is not forbidden, but discouraged). The encoding of the data is usually extension specific, i.e. determined by the source, and is usually not documented as part of the MAVLink specification.
 */
@interface MVMessageTunnel : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent payloadType:(MAV_TUNNEL_PAYLOAD_TYPE)payloadType payloadLength:(uint8_t)payloadLength payload:(uint8_t *)payload;

//! System ID (can be 0 for broadcast, but this is discouraged)
- (uint8_t)targetSystem;

//! Component ID (can be 0 for broadcast, but this is discouraged)
- (uint8_t)targetComponent;

//! A code that identifies the content of the payload (0 for unknown, which is the default). If this code is less than 32768, it is a 'registered' payload type and the corresponding code should be added to the MAV_TUNNEL_PAYLOAD_TYPE enum. Software creators can register blocks of types as needed. Codes greater than 32767 are considered local experiments and should not be checked in to any widely distributed codebase.
- (MAV_TUNNEL_PAYLOAD_TYPE)payloadType;

//! Length of the data transported in payload
- (uint8_t)payloadLength;

//! Variable length payload. The payload length is defined by payload_length. The entire content of this block is opaque unless you understand the encoding specified by payload_type.
- (uint16_t)payload:(uint8_t *)payload;

@end
