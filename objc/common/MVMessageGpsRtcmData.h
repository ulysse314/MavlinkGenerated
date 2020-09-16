//
//  MVMessageGpsRtcmData.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a GPS_RTCM_DATA Mavlink message.

 @discussion RTCM message for injecting into the onboard GPS (used for DGPS)
 */
@interface MVMessageGpsRtcmData : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId flags:(uint8_t)flags len:(uint8_t)len data:(uint8_t *)data;

//! LSB: 1 means message is fragmented, next 2 bits are the fragment ID, the remaining 5 bits are used for the sequence ID. Messages are only to be flushed to the GPS when the entire message has been reconstructed on the autopilot. The fragment ID specifies which order the fragments should be assembled into a buffer, while the sequence ID is used to detect a mismatch between different buffers. The buffer is considered fully reconstructed when either all 4 fragments are present, or all the fragments before the first fragment with a non full payload is received. This management is used to ensure that normal GPS operation doesn't corrupt RTCM data, and to recover from a unreliable transport delivery order.
- (uint8_t)flags;

//! data length
- (uint8_t)len;

//! RTCM message (may be fragmented)
- (uint16_t)data:(uint8_t *)data;

@end
