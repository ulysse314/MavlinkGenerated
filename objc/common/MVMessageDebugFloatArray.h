//
//  MVMessageDebugFloatArray.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a DEBUG_FLOAT_ARRAY Mavlink message.

 @discussion Large debug/prototyping array. The message uses the maximum available payload for data. The array_id and name fields are used to discriminate between messages in code and in user interfaces (respectively). Do not use in production code.
 */
@interface MVMessageDebugFloatArray : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec name:(char *)name arrayId:(uint16_t)arrayId data:(float *)data;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Name, for human-friendly display in a Ground Control Station
- (NSString *)name;

//! Unique ID used to discriminate between arrays
- (uint16_t)arrayId;

//! data
- (uint16_t)data:(float *)data;

@end
