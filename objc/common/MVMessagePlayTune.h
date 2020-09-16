//
//  MVMessagePlayTune.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a PLAY_TUNE Mavlink message.

 @discussion Control vehicle tone generation (buzzer).
 */
@interface MVMessagePlayTune : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent tune:(char *)tune tune2:(char *)tune2;

//! System ID
- (uint8_t)targetSystem;

//! Component ID
- (uint8_t)targetComponent;

//! tune in board specific format
- (NSString *)tune;

//! tune extension (appended to tune)
- (NSString *)tune2;

@end
