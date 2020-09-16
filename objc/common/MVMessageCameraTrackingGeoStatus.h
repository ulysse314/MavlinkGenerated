//
//  MVMessageCameraTrackingGeoStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a CAMERA_TRACKING_GEO_STATUS Mavlink message.

 @discussion Camera tracking status, sent while in active tracking. Use MAV_CMD_SET_MESSAGE_INTERVAL to define message interval.
 */
@interface MVMessageCameraTrackingGeoStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId trackingStatus:(CAMERA_TRACKING_STATUS_FLAGS)trackingStatus lat:(int32_t)lat lon:(int32_t)lon alt:(float)alt hAcc:(float)hAcc vAcc:(float)vAcc velN:(float)velN velE:(float)velE velD:(float)velD velAcc:(float)velAcc dist:(float)dist hdg:(float)hdg hdgAcc:(float)hdgAcc;

//! Current tracking status
- (CAMERA_TRACKING_STATUS_FLAGS)trackingStatus;

//! Latitude of tracked object
- (int32_t)lat;

//! Longitude of tracked object
- (int32_t)lon;

//! Altitude of tracked object(AMSL, WGS84)
- (float)alt;

//! Horizontal accuracy. NAN if unknown
- (float)hAcc;

//! Vertical accuracy. NAN if unknown
- (float)vAcc;

//! North velocity of tracked object. NAN if unknown
- (float)velN;

//! East velocity of tracked object. NAN if unknown
- (float)velE;

//! Down velocity of tracked object. NAN if unknown
- (float)velD;

//! Velocity accuracy. NAN if unknown
- (float)velAcc;

//! Distance between camera and tracked object. NAN if unknown
- (float)dist;

//! Heading in radians, in NED. NAN if unknown
- (float)hdg;

//! Accuracy of heading, in NED. NAN if unknown
- (float)hdgAcc;

@end
