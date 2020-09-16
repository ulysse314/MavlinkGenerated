//
//  MVMessageParamAckTransaction.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a PARAM_ACK_TRANSACTION Mavlink message.

 @discussion Response from a PARAM_SET message when it is used in a transaction.
 */
@interface MVMessageParamAckTransaction : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent paramId:(char *)paramId paramValue:(float)paramValue paramType:(MAV_PARAM_TYPE)paramType paramResult:(PARAM_ACK)paramResult;

//! Id of system that sent PARAM_SET message.
- (uint8_t)targetSystem;

//! Id of system that sent PARAM_SET message.
- (uint8_t)targetComponent;

//! Parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
- (NSString *)paramId;

//! Parameter value (new value if PARAM_ACCEPTED, current value otherwise)
- (float)paramValue;

//! Parameter type.
- (MAV_PARAM_TYPE)paramType;

//! Result code.
- (PARAM_ACK)paramResult;

@end
