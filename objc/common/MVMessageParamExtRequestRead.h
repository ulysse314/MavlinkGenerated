//
//  MVMessageParamExtRequestRead.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a PARAM_EXT_REQUEST_READ Mavlink message.

 @discussion Request to read the value of a parameter with either the param_id string id or param_index. PARAM_EXT_VALUE or PARAM_EXT_VALUE_TRIMMED should be emitted in response (see field: trimmed).
 */
@interface MVMessageParamExtRequestRead : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent paramId:(char *)paramId paramIndex:(int16_t)paramIndex trimmed:(uint8_t)trimmed;

//! System ID
- (uint8_t)targetSystem;

//! Component ID
- (uint8_t)targetComponent;

//! Parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
- (NSString *)paramId;

//! Parameter index. Set to -1 to use the Parameter ID field as identifier (else param_id will be ignored)
- (int16_t)paramIndex;

//! Request _TRIMMED variants of PARAM_EXT_ messages. Set to 1 if _TRIMMED message variants are supported, and 0 otherwise. This signals the recipient that _TRIMMED messages are supported by the sender (and should be used if supported by the recipient).
- (uint8_t)trimmed;

@end
