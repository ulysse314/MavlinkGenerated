//
//  MVMessageSerialControl.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a SERIAL_CONTROL Mavlink message.

 @discussion Control a serial port. This can be used for raw access to an onboard serial peripheral such as a GPS or telemetry radio. It is designed to make it possible to update the devices firmware via MAVLink messages or change the devices settings. A message with zero bytes can be used to change just the baudrate.
 */
@interface MVMessageSerialControl : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId device:(SERIAL_CONTROL_DEV)device flags:(SERIAL_CONTROL_FLAG)flags timeout:(uint16_t)timeout baudrate:(uint32_t)baudrate count:(uint8_t)count data:(uint8_t *)data;

//! Serial control device type.
- (SERIAL_CONTROL_DEV)device;

//! Bitmap of serial control flags.
- (SERIAL_CONTROL_FLAG)flags;

//! Timeout for reply data
- (uint16_t)timeout;

//! Baudrate of transfer. Zero means no change.
- (uint32_t)baudrate;

//! how many bytes in this transfer
- (uint8_t)count;

//! serial data
- (uint16_t)data:(uint8_t *)data;

@end
