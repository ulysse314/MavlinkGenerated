//
//  MVMessageParamSet.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a PARAM_SET Mavlink message.

 @discussion Set a parameter value (write new value to permanent storage). Within a transaction the recieving componenent should respond with PARAM_ACK_TRANSACTION to the setter component. IMPORTANT: If sent outside a transaction the receiving component should acknowledge the new parameter value by broadcasting a PARAM_VALUE message to all communication partners (broadcasting ensures that multiple GCS all have an up-to-date list of all parameters). If the sending GCS did not receive a PARAM_VALUE or PARAM_ACK_TRANSACTION message within its timeout time, it should re-send the PARAM_SET message. The parameter microservice is documented at https://mavlink.io/en/services/parameter.html
 */
@interface MVMessageParamSet : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent paramId:(char *)paramId paramValue:(float)paramValue paramType:(MAV_PARAM_TYPE)paramType;

//! System ID
- (uint8_t)targetSystem;

//! Component ID
- (uint8_t)targetComponent;

//! Onboard parameter id, terminated by NULL if the length is less than 16 human-readable chars and WITHOUT null termination (NULL) byte if the length is exactly 16 chars - applications have to provide 16+1 bytes storage if the ID is stored as string
- (NSString *)paramId;

//! Onboard parameter value
- (float)paramValue;

//! Onboard parameter type.
- (MAV_PARAM_TYPE)paramType;

@end
