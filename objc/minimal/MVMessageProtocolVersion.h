//
//  MVMessageProtocolVersion.h
//  MAVLink communications protocol built from minimal.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a PROTOCOL_VERSION Mavlink message.

 @discussion Version and capability of protocol version. This message can be requested with MAV_CMD_REQUEST_MESSAGE and is used as part of the handshaking to establish which MAVLink version should be used on the network. Every node should respond to a request for PROTOCOL_VERSION to enable the handshaking. Library implementers should consider adding this into the default decoding state machine to allow the protocol core to respond directly.
 */
@interface MVMessageProtocolVersion : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId version:(uint16_t)version minVersion:(uint16_t)minVersion maxVersion:(uint16_t)maxVersion specVersionHash:(uint8_t *)specVersionHash libraryVersionHash:(uint8_t *)libraryVersionHash;

//! Currently active MAVLink version number * 100: v1.0 is 100, v2.0 is 200, etc.
- (uint16_t)version;

//! Minimum MAVLink version supported
- (uint16_t)minVersion;

//! Maximum MAVLink version supported (set to the same value as version by default)
- (uint16_t)maxVersion;

//! The first 8 bytes (not characters printed in hex!) of the git hash.
- (uint16_t)specVersionHash:(uint8_t *)spec_version_hash;

//! The first 8 bytes (not characters printed in hex!) of the git hash.
- (uint16_t)libraryVersionHash:(uint8_t *)library_version_hash;

@end
