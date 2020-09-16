//
//  MVMessageAttPosMocap.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a ATT_POS_MOCAP Mavlink message.

 @discussion Motion capture attitude and position
 */
@interface MVMessageAttPosMocap : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec q:(float *)q x:(float)x y:(float)y z:(float)z covariance:(float *)covariance;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Attitude quaternion (w, x, y, z order, zero-rotation is 1, 0, 0, 0)
- (uint16_t)q:(float *)q;

//! X position (NED)
- (float)x;

//! Y position (NED)
- (float)y;

//! Z position (NED)
- (float)z;

//! Row-major representation of a pose 6x6 cross-covariance matrix upper right triangle (states: x, y, z, roll, pitch, yaw; first six entries are the first ROW, next five entries are the second ROW, etc.). If unknown, assign NaN value to first element in the array.
- (uint16_t)covariance:(float *)covariance;

@end
