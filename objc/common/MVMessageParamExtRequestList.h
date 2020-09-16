//
//  MVMessageParamExtRequestList.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a PARAM_EXT_REQUEST_LIST Mavlink message.

 @discussion Request all parameters of this component. All parameters should be emitted in response (as PARAM_EXT_VALUE or PARAM_EXT_VALUE_TRIMMED messages - see field: trimmed).
 */
@interface MVMessageParamExtRequestList : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent trimmed:(uint8_t)trimmed;

//! System ID
- (uint8_t)targetSystem;

//! Component ID
- (uint8_t)targetComponent;

//! Request _TRIMMED variants of PARAM_EXT_ messages. Set to 1 if _TRIMMED message variants are supported, and 0 otherwise. This signals the recipient that _TRIMMED messages are supported by the sender (and should be used if supported by the recipient).
- (uint8_t)trimmed;

@end
