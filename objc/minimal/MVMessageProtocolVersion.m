//
//  MVMessageProtocolVersion.m
//  MAVLink communications protocol built from minimal.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageProtocolVersion.h"

@implementation MVMessageProtocolVersion

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId version:(uint16_t)version minVersion:(uint16_t)minVersion maxVersion:(uint16_t)maxVersion specVersionHash:(uint8_t *)specVersionHash libraryVersionHash:(uint8_t *)libraryVersionHash {
  if ((self = [super init])) {
    mavlink_msg_protocol_version_pack(systemId, componentId, &(self->_message), version, minVersion, maxVersion, specVersionHash, libraryVersionHash);
  }
  return self;
}

- (uint16_t)version {
  return mavlink_msg_protocol_version_get_version(&(self->_message));
}

- (uint16_t)minVersion {
  return mavlink_msg_protocol_version_get_min_version(&(self->_message));
}

- (uint16_t)maxVersion {
  return mavlink_msg_protocol_version_get_max_version(&(self->_message));
}

- (uint16_t)specVersionHash:(uint8_t *)spec_version_hash {
  return mavlink_msg_protocol_version_get_spec_version_hash(&(self->_message), spec_version_hash);
}

- (uint16_t)libraryVersionHash:(uint8_t *)library_version_hash {
  return mavlink_msg_protocol_version_get_library_version_hash(&(self->_message), library_version_hash);
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, version=%d, minVersion=%d, maxVersion=%d, specVersionHash=%@, libraryVersionHash=%@", [super description], [self version], [self minVersion], [self maxVersion], @"[array of uint8_t[8]]", @"[array of uint8_t[8]]"];
}

@end
