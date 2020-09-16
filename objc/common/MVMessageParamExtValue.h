//
//  MVMessageParamExtValue.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a PARAM_EXT_VALUE Mavlink message.

 @discussion Emit the value of a parameter. The inclusion of param_count and param_index in the message allows the recipient to keep track of received parameters and allows them to re-request missing parameters after a loss or timeout.
 */
@interface MVMessageParamExtValue : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId paramId:(char *)paramId paramValue:(char *)paramValue paramType:(MAV_PARAM_EXT_TYPE)paramType paramCount:(uint16_t)paramCount paramIndex:(uint16_t)paramIndex;

//! Parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
- (NSString *)paramId;

//! Parameter value
- (NSString *)paramValue;

//! Parameter type.
- (MAV_PARAM_EXT_TYPE)paramType;

//! Total number of parameters
- (uint16_t)paramCount;

//! Index of this parameter
- (uint16_t)paramIndex;

@end
