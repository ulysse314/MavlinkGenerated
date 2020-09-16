//
//  MVMessageGlobalPositionIntCov.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a GLOBAL_POSITION_INT_COV Mavlink message.

 @discussion The filtered global position (e.g. fused GPS and accelerometers). The position is in GPS-frame (right-handed, Z-up). It  is designed as scaled integer message since the resolution of float is not sufficient. NOTE: This message is intended for onboard networks / companion computers and higher-bandwidth links and optimized for accuracy and completeness. Please use the GLOBAL_POSITION_INT message for a minimal subset.
 */
@interface MVMessageGlobalPositionIntCov : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec estimatorType:(MAV_ESTIMATOR_TYPE)estimatorType lat:(int32_t)lat lon:(int32_t)lon alt:(int32_t)alt relativeAlt:(int32_t)relativeAlt vx:(float)vx vy:(float)vy vz:(float)vz covariance:(float *)covariance;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Class id of the estimator this estimate originated from.
- (MAV_ESTIMATOR_TYPE)estimatorType;

//! Latitude
- (int32_t)lat;

//! Longitude
- (int32_t)lon;

//! Altitude in meters above MSL
- (int32_t)alt;

//! Altitude above ground
- (int32_t)relativeAlt;

//! Ground X Speed (Latitude)
- (float)vx;

//! Ground Y Speed (Longitude)
- (float)vy;

//! Ground Z Speed (Altitude)
- (float)vz;

//! Row-major representation of a 6x6 position and velocity 6x6 cross-covariance matrix (states: lat, lon, alt, vx, vy, vz; first six entries are the first ROW, next six entries are the second row, etc.). If unknown, assign NaN value to first element in the array.
- (uint16_t)covariance:(float *)covariance;

@end
