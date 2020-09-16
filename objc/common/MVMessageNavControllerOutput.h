//
//  MVMessageNavControllerOutput.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a NAV_CONTROLLER_OUTPUT Mavlink message.

 @discussion The state of the fixed wing navigation and position controller.
 */
@interface MVMessageNavControllerOutput : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId navRoll:(float)navRoll navPitch:(float)navPitch navBearing:(int16_t)navBearing targetBearing:(int16_t)targetBearing wpDist:(uint16_t)wpDist altError:(float)altError aspdError:(float)aspdError xtrackError:(float)xtrackError;

//! Current desired roll
- (float)navRoll;

//! Current desired pitch
- (float)navPitch;

//! Current desired heading
- (int16_t)navBearing;

//! Bearing to current waypoint/target
- (int16_t)targetBearing;

//! Distance to active waypoint
- (uint16_t)wpDist;

//! Current altitude error
- (float)altError;

//! Current airspeed error
- (float)aspdError;

//! Current crosstrack error on x-y plane
- (float)xtrackError;

@end
