//
//  MVMessageTimeEstimateToTarget.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a TIME_ESTIMATE_TO_TARGET Mavlink message.

 @discussion Time/duration estimates for various events and actions given the current vehicle state and position.
 */
@interface MVMessageTimeEstimateToTarget : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId safeReturn:(int32_t)safeReturn land:(int32_t)land missionNextItem:(int32_t)missionNextItem missionEnd:(int32_t)missionEnd commandedAction:(int32_t)commandedAction;

//! Estimated time to complete the vehicle's configured "safe return" action from its current position (e.g. RTL, Smart RTL, etc.). -1 indicates that the vehicle is landed, or that no time estimate available.
- (int32_t)safeReturn;

//! Estimated time for vehicle to complete the LAND action from its current position. -1 indicates that the vehicle is landed, or that no time estimate available.
- (int32_t)land;

//! Estimated time for reaching/completing the currently active mission item. -1 means no time estimate available.
- (int32_t)missionNextItem;

//! Estimated time for completing the current mission. -1 means no mission active and/or no estimate available.
- (int32_t)missionEnd;

//! Estimated time for completing the current commanded action (i.e. Go To, Takeoff, Land, etc.). -1 means no action active and/or no estimate available.
- (int32_t)commandedAction;

@end
