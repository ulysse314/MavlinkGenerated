//
//  MVMessageDebugVect.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a DEBUG_VECT Mavlink message.

 @discussion To debug something using a named 3D vector.
 */
@interface MVMessageDebugVect : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId name:(char *)name timeUsec:(uint64_t)timeUsec x:(float)x y:(float)y z:(float)z;

//! Name
- (NSString *)name;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! x
- (float)x;

//! y
- (float)y;

//! z
- (float)z;

@end
