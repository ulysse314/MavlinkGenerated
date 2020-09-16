//
//  MVMessageLandingTarget.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a LANDING_TARGET Mavlink message.

 @discussion The location of a landing target. See: https://mavlink.io/en/services/landing_target.html
 */
@interface MVMessageLandingTarget : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec targetNum:(uint8_t)targetNum frame:(MAV_FRAME)frame angleX:(float)angleX angleY:(float)angleY distance:(float)distance sizeX:(float)sizeX sizeY:(float)sizeY x:(float)x y:(float)y z:(float)z q:(float *)q type:(LANDING_TARGET_TYPE)type positionValid:(uint8_t)positionValid;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! The ID of the target if multiple targets are present
- (uint8_t)targetNum;

//! Coordinate frame used for following fields.
- (MAV_FRAME)frame;

//! X-axis angular offset of the target from the center of the image
- (float)angleX;

//! Y-axis angular offset of the target from the center of the image
- (float)angleY;

//! Distance to the target from the vehicle
- (float)distance;

//! Size of target along x-axis
- (float)sizeX;

//! Size of target along y-axis
- (float)sizeY;

//! X Position of the landing target in MAV_FRAME
- (float)x;

//! Y Position of the landing target in MAV_FRAME
- (float)y;

//! Z Position of the landing target in MAV_FRAME
- (float)z;

//! Quaternion of landing target orientation (w, x, y, z order, zero-rotation is 1, 0, 0, 0)
- (uint16_t)q:(float *)q;

//! Type of landing target
- (LANDING_TARGET_TYPE)type;

//! Boolean indicating whether the position fields (x, y, z, q, type) contain valid target position information (valid: 1, invalid: 0). Default is 0 (invalid).
- (uint8_t)positionValid;

@end
