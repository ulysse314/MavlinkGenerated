//
//  MVMessageObstacleDistance.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a OBSTACLE_DISTANCE Mavlink message.

 @discussion Obstacle distances in front of the sensor, starting from the left in increment degrees to the right
 */
@interface MVMessageObstacleDistance : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec sensorType:(MAV_DISTANCE_SENSOR)sensorType distances:(uint16_t *)distances increment:(uint8_t)increment minDistance:(uint16_t)minDistance maxDistance:(uint16_t)maxDistance incrementF:(float)incrementF angleOffset:(float)angleOffset frame:(MAV_FRAME)frame;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Class id of the distance sensor type.
- (MAV_DISTANCE_SENSOR)sensorType;

//! Distance of obstacles around the vehicle with index 0 corresponding to north + angle_offset, unless otherwise specified in the frame. A value of 0 is valid and means that the obstacle is practically touching the sensor. A value of max_distance +1 means no obstacle is present. A value of UINT16_MAX for unknown/not used. In a array element, one unit corresponds to 1cm.
- (uint16_t)distances:(uint16_t *)distances;

//! Angular width in degrees of each array element. Increment direction is clockwise. This field is ignored if increment_f is non-zero.
- (uint8_t)increment;

//! Minimum distance the sensor can measure.
- (uint16_t)minDistance;

//! Maximum distance the sensor can measure.
- (uint16_t)maxDistance;

//! Angular width in degrees of each array element as a float. If non-zero then this value is used instead of the uint8_t increment field. Positive is clockwise direction, negative is counter-clockwise.
- (float)incrementF;

//! Relative angle offset of the 0-index element in the distances array. Value of 0 corresponds to forward. Positive is clockwise direction, negative is counter-clockwise.
- (float)angleOffset;

//! Coordinate frame of reference for the yaw rotation and offset of the sensor data. Defaults to MAV_FRAME_GLOBAL, which is north aligned. For body-mounted sensors use MAV_FRAME_BODY_FRD, which is vehicle front aligned.
- (MAV_FRAME)frame;

@end
