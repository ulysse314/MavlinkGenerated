//
//  MVMessageButtonChange.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a BUTTON_CHANGE Mavlink message.

 @discussion Report button state change.
 */
@interface MVMessageButtonChange : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs lastChangeMs:(uint32_t)lastChangeMs state:(uint8_t)state;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Time of last change of button state.
- (uint32_t)lastChangeMs;

//! Bitmap for state of buttons.
- (uint8_t)state;

@end
