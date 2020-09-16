//
//  MVMessageEscInfo.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a ESC_INFO Mavlink message.

 @discussion ESC information for lower rate streaming. Recommended streaming rate 1Hz. See ESC_STATUS for higher-rate ESC data.
 */
@interface MVMessageEscInfo : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId index:(uint8_t)index timeUsec:(uint64_t)timeUsec counter:(uint16_t)counter count:(uint8_t)count connectionType:(ESC_CONNECTION_TYPE)connectionType info:(uint8_t)info failureFlags:(ESC_FAILURE_FLAGS *)failureFlags errorCount:(uint32_t *)errorCount temperature:(uint8_t *)temperature;

//! Index of the first ESC in this message. minValue = 0, maxValue = 60, increment = 4.
- (uint8_t)index;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude the number.
- (uint64_t)timeUsec;

//! Counter of data packets received.
- (uint16_t)counter;

//! Total number of ESCs in all messages of this type. Message fields with an index higher than this should be ignored because they contain invalid data.
- (uint8_t)count;

//! Connection type protocol for all ESC.
- (ESC_CONNECTION_TYPE)connectionType;

//! Information regarding online/offline status of each ESC.
- (uint8_t)info;

//! Bitmap of ESC failure flags.
- (uint16_t)failureFlags:(uint16_t *)failure_flags;

//! Number of reported errors by each ESC since boot.
- (uint16_t)errorCount:(uint32_t *)error_count;

//! Temperature measured by each ESC. UINT8_MAX if data not supplied by ESC.
- (uint16_t)temperature:(uint8_t *)temperature;

@end
