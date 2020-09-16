//
//  MVMessageAisVessel.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a AIS_VESSEL Mavlink message.

 @discussion The location and information of an AIS vessel
 */
@interface MVMessageAisVessel : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId MMSI:(uint32_t)MMSI lat:(int32_t)lat lon:(int32_t)lon COG:(uint16_t)COG heading:(uint16_t)heading velocity:(uint16_t)velocity turnRate:(int8_t)turnRate navigationalStatus:(AIS_NAV_STATUS)navigationalStatus type:(AIS_TYPE)type dimensionBow:(uint16_t)dimensionBow dimensionStern:(uint16_t)dimensionStern dimensionPort:(uint8_t)dimensionPort dimensionStarboard:(uint8_t)dimensionStarboard callsign:(char *)callsign name:(char *)name tslc:(uint16_t)tslc flags:(AIS_FLAGS)flags;

//! Mobile Marine Service Identifier, 9 decimal digits
- (uint32_t)MMSI;

//! Latitude
- (int32_t)lat;

//! Longitude
- (int32_t)lon;

//! Course over ground
- (uint16_t)COG;

//! True heading
- (uint16_t)heading;

//! Speed over ground
- (uint16_t)velocity;

//! Turn rate
- (int8_t)turnRate;

//! Navigational status
- (AIS_NAV_STATUS)navigationalStatus;

//! Type of vessels
- (AIS_TYPE)type;

//! Distance from lat/lon location to bow
- (uint16_t)dimensionBow;

//! Distance from lat/lon location to stern
- (uint16_t)dimensionStern;

//! Distance from lat/lon location to port side
- (uint8_t)dimensionPort;

//! Distance from lat/lon location to starboard side
- (uint8_t)dimensionStarboard;

//! The vessel callsign
- (NSString *)callsign;

//! The vessel name
- (NSString *)name;

//! Time since last communication in seconds
- (uint16_t)tslc;

//! Bitmask to indicate various statuses including valid data fields
- (AIS_FLAGS)flags;

@end
