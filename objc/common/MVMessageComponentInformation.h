//
//  MVMessageComponentInformation.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a COMPONENT_INFORMATION Mavlink message.

 @discussion Information about a component. For camera components instead use CAMERA_INFORMATION, and for autopilots use AUTOPILOT_VERSION. Components including GCSes should consider supporting requests of this message via MAV_CMD_REQUEST_MESSAGE.
 */
@interface MVMessageComponentInformation : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs metadataType:(COMP_METADATA_TYPE)metadataType metadataUid:(uint32_t)metadataUid metadataUri:(char *)metadataUri translationUid:(uint32_t)translationUid translationUri:(char *)translationUri;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! The type of metadata being requested.
- (COMP_METADATA_TYPE)metadataType;

//! Unique uid for this metadata which a gcs can use for created cached metadata and understanding whether it's cache it up to date or whether it needs to download new data.
- (uint32_t)metadataUid;

//! Component definition URI. If prefix mavlinkftp:// file is downloaded from vehicle over mavlink ftp protocol. If prefix http[s]:// file is downloaded over internet. Files are json format. They can end in .gz to indicate file is in gzip format.
- (NSString *)metadataUri;

//! Unique uid for the translation file associated with the metadata.
- (uint32_t)translationUid;

//! The translations for strings within the metadata file. If null the either do not exist or may be included in the metadata file itself. The translations specified here supercede any which may be in the metadata file itself. The uri format is the same as component_metadata_uri . Files are in Json Translation spec format. Empty string indicates no tranlsation file.
- (NSString *)translationUri;

@end
