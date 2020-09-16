//
//  MVMessageMagCalReport.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a MAG_CAL_REPORT Mavlink message.

 @discussion Reports results of completed compass calibration. Sent until MAG_CAL_ACK received.
 */
@interface MVMessageMagCalReport : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId compassId:(uint8_t)compassId calMask:(uint8_t)calMask calStatus:(MAG_CAL_STATUS)calStatus autosaved:(uint8_t)autosaved fitness:(float)fitness ofsX:(float)ofsX ofsY:(float)ofsY ofsZ:(float)ofsZ diagX:(float)diagX diagY:(float)diagY diagZ:(float)diagZ offdiagX:(float)offdiagX offdiagY:(float)offdiagY offdiagZ:(float)offdiagZ orientationConfidence:(float)orientationConfidence oldOrientation:(MAV_SENSOR_ORIENTATION)oldOrientation newOrientation:(MAV_SENSOR_ORIENTATION)newOrientation scaleFactor:(float)scaleFactor;

//! Compass being calibrated.
- (uint8_t)compassId;

//! Bitmask of compasses being calibrated.
- (uint8_t)calMask;

//! Calibration Status.
- (MAG_CAL_STATUS)calStatus;

//! 0=requires a MAV_CMD_DO_ACCEPT_MAG_CAL, 1=saved to parameters.
- (uint8_t)autosaved;

//! RMS milligauss residuals.
- (float)fitness;

//! X offset.
- (float)ofsX;

//! Y offset.
- (float)ofsY;

//! Z offset.
- (float)ofsZ;

//! X diagonal (matrix 11).
- (float)diagX;

//! Y diagonal (matrix 22).
- (float)diagY;

//! Z diagonal (matrix 33).
- (float)diagZ;

//! X off-diagonal (matrix 12 and 21).
- (float)offdiagX;

//! Y off-diagonal (matrix 13 and 31).
- (float)offdiagY;

//! Z off-diagonal (matrix 32 and 23).
- (float)offdiagZ;

//! Confidence in orientation (higher is better).
- (float)orientationConfidence;

//! orientation before calibration.
- (MAV_SENSOR_ORIENTATION)oldOrientation;

//! orientation after calibration.
- (MAV_SENSOR_ORIENTATION)newOrientation;

//! field radius correction factor
- (float)scaleFactor;

@end
