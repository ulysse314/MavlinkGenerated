//
//  MVMessageParamExtSetTrimmed.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a PARAM_EXT_SET_TRIMMED Mavlink message.

 @discussion Set a parameter value. In order to deal with message loss (and retransmission of PARAM_EXT_SET_TRIMMED), when setting a parameter value and the new value is the same as the current value, you will immediately get a PARAM_ACK_ACCEPTED response. If the current state is PARAM_ACK_IN_PROGRESS, you will accordingly receive a PARAM_ACK_IN_PROGRESS in response. If there is no response to this message, and it is unknown whether the _TRIMMED messages are supported (because no PARAM_EXT_REQUEST_READ or PARAM_EXT_REQUEST_LIST has been performed yet), then fall back to PARAM_EXT_SET.
 */
@interface MVMessageParamExtSetTrimmed : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent paramType:(MAV_PARAM_EXT_TYPE)paramType paramId:(char *)paramId paramValue:(char *)paramValue;

//! System ID
- (uint8_t)targetSystem;

//! Component ID
- (uint8_t)targetComponent;

//! Parameter type.
- (MAV_PARAM_EXT_TYPE)paramType;

//! Parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
- (NSString *)paramId;

//! Parameter value (zeros get trimmed)
- (NSString *)paramValue;

@end
