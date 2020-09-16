//
//  MVMessageParamExtValueTrimmed.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a PARAM_EXT_VALUE_TRIMMED Mavlink message.

 @discussion Emit the value of a parameter. The inclusion of param_count and param_index in the message allows the recipient to keep track of received parameters and allows them to re-request missing parameters after a loss or timeout. Replacement for PARAM_EXT_VALUE.
 */
@interface MVMessageParamExtValueTrimmed : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId paramCount:(uint16_t)paramCount paramIndex:(uint16_t)paramIndex paramType:(MAV_PARAM_EXT_TYPE)paramType paramId:(char *)paramId paramValue:(char *)paramValue;

//! Total number of parameters
- (uint16_t)paramCount;

//! Index of this parameter
- (uint16_t)paramIndex;

//! Parameter type.
- (MAV_PARAM_EXT_TYPE)paramType;

//! Parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
- (NSString *)paramId;

//! Parameter value (zeros get trimmed)
- (NSString *)paramValue;

@end
