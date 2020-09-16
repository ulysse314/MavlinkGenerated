//
//  MVMessageCameraSettings.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a CAMERA_SETTINGS Mavlink message.

 @discussion Settings of a camera. Can be requested with a MAV_CMD_REQUEST_MESSAGE command.
 */
@interface MVMessageCameraSettings : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs modeId:(CAMERA_MODE)modeId zoomLevel:(float)zoomLevel focusLevel:(float)focusLevel;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Camera mode
- (CAMERA_MODE)modeId;

//! Current zoom level (0.0 to 100.0, NaN if not known)
- (float)zoomLevel;

//! Current focus level (0.0 to 100.0, NaN if not known)
- (float)focusLevel;

@end
