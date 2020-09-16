//
//  MVMessageDistanceSensor.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a DISTANCE_SENSOR Mavlink message.

 @discussion Distance sensor information for an onboard rangefinder.
 */
@interface MVMessageDistanceSensor : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs minDistance:(uint16_t)minDistance maxDistance:(uint16_t)maxDistance currentDistance:(uint16_t)currentDistance type:(MAV_DISTANCE_SENSOR)type id:(uint8_t)id orientation:(MAV_SENSOR_ORIENTATION)orientation covariance:(uint8_t)covariance horizontalFov:(float)horizontalFov verticalFov:(float)verticalFov quaternion:(float *)quaternion signalQuality:(uint8_t)signalQuality;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Minimum distance the sensor can measure
- (uint16_t)minDistance;

//! Maximum distance the sensor can measure
- (uint16_t)maxDistance;

//! Current distance reading
- (uint16_t)currentDistance;

//! Type of distance sensor.
- (MAV_DISTANCE_SENSOR)type;

//! Onboard ID of the sensor
- (uint8_t)id;

//! Direction the sensor faces. downward-facing: ROTATION_PITCH_270, upward-facing: ROTATION_PITCH_90, backward-facing: ROTATION_PITCH_180, forward-facing: ROTATION_NONE, left-facing: ROTATION_YAW_90, right-facing: ROTATION_YAW_270
- (MAV_SENSOR_ORIENTATION)orientation;

//! Measurement variance. Max standard deviation is 6cm. 255 if unknown.
- (uint8_t)covariance;

//! Horizontal Field of View (angle) where the distance measurement is valid and the field of view is known. Otherwise this is set to 0.
- (float)horizontalFov;

//! Vertical Field of View (angle) where the distance measurement is valid and the field of view is known. Otherwise this is set to 0.
- (float)verticalFov;

//! Quaternion of the sensor orientation in vehicle body frame (w, x, y, z order, zero-rotation is 1, 0, 0, 0). Zero-rotation is along the vehicle body x-axis. This field is required if the orientation is set to MAV_SENSOR_ROTATION_CUSTOM. Set it to 0 if invalid."
- (uint16_t)quaternion:(float *)quaternion;

//! Signal quality of the sensor. Specific to each sensor type, representing the relation of the signal strength with the target reflectivity, distance, size or aspect, but normalised as a percentage. 0 = unknown/unset signal quality, 1 = invalid signal, 100 = perfect signal.
- (uint8_t)signalQuality;

@end
