//
//  MVMessageStorageInformation.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a STORAGE_INFORMATION Mavlink message.

 @discussion Information about a storage medium. This message is sent in response to a request with MAV_CMD_REQUEST_MESSAGE and whenever the status of the storage changes (STORAGE_STATUS). Use MAV_CMD_REQUEST_MESSAGE.param2 to indicate the index/id of requested storage: 0 for all, 1 for first, 2 for second, etc.
 */
@interface MVMessageStorageInformation : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs storageId:(uint8_t)storageId storageCount:(uint8_t)storageCount status:(STORAGE_STATUS)status totalCapacity:(float)totalCapacity usedCapacity:(float)usedCapacity availableCapacity:(float)availableCapacity readSpeed:(float)readSpeed writeSpeed:(float)writeSpeed;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Storage ID (1 for first, 2 for second, etc.)
- (uint8_t)storageId;

//! Number of storage devices
- (uint8_t)storageCount;

//! Status of storage
- (STORAGE_STATUS)status;

//! Total capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
- (float)totalCapacity;

//! Used capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
- (float)usedCapacity;

//! Available storage capacity. If storage is not ready (STORAGE_STATUS_READY) value will be ignored.
- (float)availableCapacity;

//! Read speed.
- (float)readSpeed;

//! Write speed.
- (float)writeSpeed;

@end
