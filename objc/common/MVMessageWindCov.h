//
//  MVMessageWindCov.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a WIND_COV Mavlink message.

 @discussion Wind covariance estimate from vehicle.
 */
@interface MVMessageWindCov : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec windX:(float)windX windY:(float)windY windZ:(float)windZ varHoriz:(float)varHoriz varVert:(float)varVert windAlt:(float)windAlt horizAccuracy:(float)horizAccuracy vertAccuracy:(float)vertAccuracy;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Wind in X (NED) direction
- (float)windX;

//! Wind in Y (NED) direction
- (float)windY;

//! Wind in Z (NED) direction
- (float)windZ;

//! Variability of the wind in XY. RMS of a 1 Hz lowpassed wind estimate.
- (float)varHoriz;

//! Variability of the wind in Z. RMS of a 1 Hz lowpassed wind estimate.
- (float)varVert;

//! Altitude (MSL) that this measurement was taken at
- (float)windAlt;

//! Horizontal speed 1-STD accuracy
- (float)horizAccuracy;

//! Vertical speed 1-STD accuracy
- (float)vertAccuracy;

@end
