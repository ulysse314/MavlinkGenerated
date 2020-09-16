//
//  MVMessageSetupSigning.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a SETUP_SIGNING Mavlink message.

 @discussion Setup a MAVLink2 signing key. If called with secret_key of all zero and zero initial_timestamp will disable signing
 */
@interface MVMessageSetupSigning : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent secretKey:(uint8_t *)secretKey initialTimestamp:(uint64_t)initialTimestamp;

//! system id of the target
- (uint8_t)targetSystem;

//! component ID of the target
- (uint8_t)targetComponent;

//! signing key
- (uint16_t)secretKey:(uint8_t *)secret_key;

//! initial timestamp
- (uint64_t)initialTimestamp;

@end
