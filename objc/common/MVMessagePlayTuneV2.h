//
//  MVMessagePlayTuneV2.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a PLAY_TUNE_V2 Mavlink message.

 @discussion Play vehicle tone/tune (buzzer). Supersedes message PLAY_TUNE.
 */
@interface MVMessagePlayTuneV2 : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent format:(TUNE_FORMAT)format tune:(char *)tune;

//! System ID
- (uint8_t)targetSystem;

//! Component ID
- (uint8_t)targetComponent;

//! Tune format
- (TUNE_FORMAT)format;

//! Tune definition as a NULL-terminated string.
- (NSString *)tune;

@end
