//
//  MVMessageTerrainReport.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a TERRAIN_REPORT Mavlink message.

 @discussion Streamed from drone to report progress of terrain map download (or response from a TERRAIN_CHECK request - deprecated). See terrain protocol docs: https://mavlink.io/en/services/terrain.html
 */
@interface MVMessageTerrainReport : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId lat:(int32_t)lat lon:(int32_t)lon spacing:(uint16_t)spacing terrainHeight:(float)terrainHeight currentHeight:(float)currentHeight pending:(uint16_t)pending loaded:(uint16_t)loaded;

//! Latitude
- (int32_t)lat;

//! Longitude
- (int32_t)lon;

//! grid spacing (zero if terrain at this location unavailable)
- (uint16_t)spacing;

//! Terrain height MSL
- (float)terrainHeight;

//! Current vehicle height above lat/lon terrain height
- (float)currentHeight;

//! Number of 4x4 terrain blocks waiting to be received or read from disk
- (uint16_t)pending;

//! Number of 4x4 terrain blocks in memory
- (uint16_t)loaded;

@end
