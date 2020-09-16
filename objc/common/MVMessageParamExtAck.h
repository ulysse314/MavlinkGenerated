//
//  MVMessageParamExtAck.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a PARAM_EXT_ACK Mavlink message.

 @discussion Response from a PARAM_EXT_SET message.
 */
@interface MVMessageParamExtAck : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId paramId:(char *)paramId paramValue:(char *)paramValue paramType:(MAV_PARAM_EXT_TYPE)paramType paramResult:(PARAM_ACK)paramResult;

//! Parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
- (NSString *)paramId;

//! Parameter value (new value if PARAM_ACK_ACCEPTED, current value otherwise)
- (NSString *)paramValue;

//! Parameter type.
- (MAV_PARAM_EXT_TYPE)paramType;

//! Result code.
- (PARAM_ACK)paramResult;

@end
