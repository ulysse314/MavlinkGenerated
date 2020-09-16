//
//  MVMessageAltitude.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a ALTITUDE Mavlink message.

 @discussion The current system altitude.
 */
@interface MVMessageAltitude : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec altitudeMonotonic:(float)altitudeMonotonic altitudeAmsl:(float)altitudeAmsl altitudeLocal:(float)altitudeLocal altitudeRelative:(float)altitudeRelative altitudeTerrain:(float)altitudeTerrain bottomClearance:(float)bottomClearance;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! This altitude measure is initialized on system boot and monotonic (it is never reset, but represents the local altitude change). The only guarantee on this field is that it will never be reset and is consistent within a flight. The recommended value for this field is the uncorrected barometric altitude at boot time. This altitude will also drift and vary between flights.
- (float)altitudeMonotonic;

//! This altitude measure is strictly above mean sea level and might be non-monotonic (it might reset on events like GPS lock or when a new QNH value is set). It should be the altitude to which global altitude waypoints are compared to. Note that it is *not* the GPS altitude, however, most GPS modules already output MSL by default and not the WGS84 altitude.
- (float)altitudeAmsl;

//! This is the local altitude in the local coordinate frame. It is not the altitude above home, but in reference to the coordinate origin (0, 0, 0). It is up-positive.
- (float)altitudeLocal;

//! This is the altitude above the home position. It resets on each change of the current home position.
- (float)altitudeRelative;

//! This is the altitude above terrain. It might be fed by a terrain database or an altimeter. Values smaller than -1000 should be interpreted as unknown.
- (float)altitudeTerrain;

//! This is not the altitude, but the clear space below the system according to the fused clearance estimate. It generally should max out at the maximum range of e.g. the laser altimeter. It is generally a moving target. A negative value indicates no measurement available.
- (float)bottomClearance;

@end
