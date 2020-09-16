//
//  MVMessageOrbitExecutionStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a ORBIT_EXECUTION_STATUS Mavlink message.

 @discussion Vehicle status report that is sent out while orbit execution is in progress (see MAV_CMD_DO_ORBIT).
 */
@interface MVMessageOrbitExecutionStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec radius:(float)radius frame:(MAV_FRAME)frame x:(int32_t)x y:(int32_t)y z:(float)z;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Radius of the orbit circle. Positive values orbit clockwise, negative values orbit counter-clockwise.
- (float)radius;

//! The coordinate system of the fields: x, y, z.
- (MAV_FRAME)frame;

//! X coordinate of center point. Coordinate system depends on frame field: local = x position in meters * 1e4, global = latitude in degrees * 1e7.
- (int32_t)x;

//! Y coordinate of center point.  Coordinate system depends on frame field: local = x position in meters * 1e4, global = latitude in degrees * 1e7.
- (int32_t)y;

//! Altitude of center point. Coordinate system depends on frame field.
- (float)z;

@end
