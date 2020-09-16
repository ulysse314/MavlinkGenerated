//
//  MVMessageStorageInformation.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageStorageInformation.h"

@implementation MVMessageStorageInformation

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs storageId:(uint8_t)storageId storageCount:(uint8_t)storageCount status:(STORAGE_STATUS)status totalCapacity:(float)totalCapacity usedCapacity:(float)usedCapacity availableCapacity:(float)availableCapacity readSpeed:(float)readSpeed writeSpeed:(float)writeSpeed {
  if ((self = [super init])) {
    mavlink_msg_storage_information_pack(systemId, componentId, &(self->_message), timeBootMs, storageId, storageCount, status, totalCapacity, usedCapacity, availableCapacity, readSpeed, writeSpeed);
  }
  return self;
}

- (uint32_t)timeBootMs {
  return mavlink_msg_storage_information_get_time_boot_ms(&(self->_message));
}

- (uint8_t)storageId {
  return mavlink_msg_storage_information_get_storage_id(&(self->_message));
}

- (uint8_t)storageCount {
  return mavlink_msg_storage_information_get_storage_count(&(self->_message));
}

- (STORAGE_STATUS)status {
  return mavlink_msg_storage_information_get_status(&(self->_message));
}

- (float)totalCapacity {
  return mavlink_msg_storage_information_get_total_capacity(&(self->_message));
}

- (float)usedCapacity {
  return mavlink_msg_storage_information_get_used_capacity(&(self->_message));
}

- (float)availableCapacity {
  return mavlink_msg_storage_information_get_available_capacity(&(self->_message));
}

- (float)readSpeed {
  return mavlink_msg_storage_information_get_read_speed(&(self->_message));
}

- (float)writeSpeed {
  return mavlink_msg_storage_information_get_write_speed(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeBootMs=%d, storageId=%d, storageCount=%d, status=%d, totalCapacity=%f, usedCapacity=%f, availableCapacity=%f, readSpeed=%f, writeSpeed=%f", [super description], [self timeBootMs], [self storageId], [self storageCount], [self status], [self totalCapacity], [self usedCapacity], [self availableCapacity], [self readSpeed], [self writeSpeed]];
}

@end
