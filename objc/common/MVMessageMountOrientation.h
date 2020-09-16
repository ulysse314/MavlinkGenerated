//
//  MVMessageMountOrientation.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a MOUNT_ORIENTATION Mavlink message.

 @discussion Orientation of a mount
 */
@interface MVMessageMountOrientation : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs roll:(float)roll pitch:(float)pitch yaw:(float)yaw yawAbsolute:(float)yawAbsolute;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Roll in global frame (set to NaN for invalid).
- (float)roll;

//! Pitch in global frame (set to NaN for invalid).
- (float)pitch;

//! Yaw relative to vehicle (set to NaN for invalid).
- (float)yaw;

//! Yaw in absolute frame relative to Earth's North, north is 0 (set to NaN for invalid).
- (float)yawAbsolute;

@end
