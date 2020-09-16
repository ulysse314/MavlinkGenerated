//
//  MVMessageOpenDroneIdMessagePack.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a OPEN_DRONE_ID_MESSAGE_PACK Mavlink message.

 @discussion An OpenDroneID message pack is a container for multiple encoded OpenDroneID messages (i.e. not in the format given for the above messages descriptions but after encoding into the compressed OpenDroneID byte format). Used e.g. when transmitting on Bluetooth 5.0 Long Range/Extended Advertising or on WiFi Neighbor Aware Networking.
 */
@interface MVMessageOpenDroneIdMessagePack : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent singleMessageSize:(uint8_t)singleMessageSize msgPackSize:(uint8_t)msgPackSize messages:(uint8_t *)messages;

//! System ID (0 for broadcast).
- (uint8_t)targetSystem;

//! Component ID (0 for broadcast).
- (uint8_t)targetComponent;

//! This field must currently always be equal to 25 (bytes), since all encoded OpenDroneID messages are specificed to have this length.
- (uint8_t)singleMessageSize;

//! Number of encoded messages in the pack (not the number of bytes). Allowed range is 1 - 10.
- (uint8_t)msgPackSize;

//! Concatenation of encoded OpenDroneID messages. Shall be filled with nulls in the unused portion of the field.
- (uint16_t)messages:(uint8_t *)messages;

@end
