//
//  MVMessageSupportedTunes.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a SUPPORTED_TUNES Mavlink message.

 @discussion Tune formats supported by vehicle. This should be emitted as response to MAV_CMD_REQUEST_MESSAGE.
 */
@interface MVMessageSupportedTunes : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent format:(TUNE_FORMAT)format;

//! System ID
- (uint8_t)targetSystem;

//! Component ID
- (uint8_t)targetComponent;

//! Bitfield of supported tune formats.
- (TUNE_FORMAT)format;

@end
