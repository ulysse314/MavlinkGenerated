//
//  MVMessageAttitude.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a ATTITUDE Mavlink message.

 @discussion The attitude in the aeronautical frame (right-handed, Z-down, X-front, Y-right).
 */
@interface MVMessageAttitude : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs roll:(float)roll pitch:(float)pitch yaw:(float)yaw rollspeed:(float)rollspeed pitchspeed:(float)pitchspeed yawspeed:(float)yawspeed;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Roll angle (-pi..+pi)
- (float)roll;

//! Pitch angle (-pi..+pi)
- (float)pitch;

//! Yaw angle (-pi..+pi)
- (float)yaw;

//! Roll angular speed
- (float)rollspeed;

//! Pitch angular speed
- (float)pitchspeed;

//! Yaw angular speed
- (float)yawspeed;

@end
