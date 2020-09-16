//
//  MVMessageComponentInformation.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageComponentInformation.h"

@implementation MVMessageComponentInformation

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs metadataType:(COMP_METADATA_TYPE)metadataType metadataUid:(uint32_t)metadataUid metadataUri:(char *)metadataUri translationUid:(uint32_t)translationUid translationUri:(char *)translationUri {
  if ((self = [super init])) {
    mavlink_msg_component_information_pack(systemId, componentId, &(self->_message), timeBootMs, metadataType, metadataUid, metadataUri, translationUid, translationUri);
  }
  return self;
}

- (uint32_t)timeBootMs {
  return mavlink_msg_component_information_get_time_boot_ms(&(self->_message));
}

- (COMP_METADATA_TYPE)metadataType {
  return mavlink_msg_component_information_get_metadata_type(&(self->_message));
}

- (uint32_t)metadataUid {
  return mavlink_msg_component_information_get_metadata_uid(&(self->_message));
}

- (NSString *)metadataUri {
  char string[70];
  mavlink_msg_component_information_get_metadata_uri(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:70 encoding:NSASCIIStringEncoding];
}

- (uint32_t)translationUid {
  return mavlink_msg_component_information_get_translation_uid(&(self->_message));
}

- (NSString *)translationUri {
  char string[70];
  mavlink_msg_component_information_get_translation_uri(&(self->_message), (char *)&string);
  return [[NSString alloc] initWithBytes:string length:70 encoding:NSASCIIStringEncoding];
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeBootMs=%d, metadataType=%d, metadataUid=%d, metadataUri=%@, translationUid=%d, translationUri=%@", [super description], [self timeBootMs], [self metadataType], [self metadataUid], [self metadataUri], [self translationUid], [self translationUri]];
}

@end
