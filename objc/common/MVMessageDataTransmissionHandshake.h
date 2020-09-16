//
//  MVMessageDataTransmissionHandshake.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a DATA_TRANSMISSION_HANDSHAKE Mavlink message.

 @discussion Handshake message to initiate, control and stop image streaming when using the Image Transmission Protocol: https://mavlink.io/en/services/image_transmission.html.
 */
@interface MVMessageDataTransmissionHandshake : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId type:(MAVLINK_DATA_STREAM_TYPE)type size:(uint32_t)size width:(uint16_t)width height:(uint16_t)height packets:(uint16_t)packets payload:(uint8_t)payload jpgQuality:(uint8_t)jpgQuality;

//! Type of requested/acknowledged data.
- (MAVLINK_DATA_STREAM_TYPE)type;

//! total data size (set on ACK only).
- (uint32_t)size;

//! Width of a matrix or image.
- (uint16_t)width;

//! Height of a matrix or image.
- (uint16_t)height;

//! Number of packets being sent (set on ACK only).
- (uint16_t)packets;

//! Payload size per packet (normally 253 byte, see DATA field size in message ENCAPSULATED_DATA) (set on ACK only).
- (uint8_t)payload;

//! JPEG quality. Values: [1-100].
- (uint8_t)jpgQuality;

@end
