//
//  MVMessageCellularStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a CELLULAR_STATUS Mavlink message.

 @discussion Report current used cellular network status
 */
@interface MVMessageCellularStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId status:(CELLULAR_STATUS_FLAG)status failureReason:(CELLULAR_NETWORK_FAILED_REASON)failureReason type:(CELLULAR_NETWORK_RADIO_TYPE)type quality:(uint8_t)quality mcc:(uint16_t)mcc mnc:(uint16_t)mnc lac:(uint16_t)lac;

//! Cellular modem status
- (CELLULAR_STATUS_FLAG)status;

//! Failure reason when status in in CELLUAR_STATUS_FAILED
- (CELLULAR_NETWORK_FAILED_REASON)failureReason;

//! Cellular network radio type: gsm, cdma, lte...
- (CELLULAR_NETWORK_RADIO_TYPE)type;

//! Signal quality in percent. If unknown, set to UINT8_MAX
- (uint8_t)quality;

//! Mobile country code. If unknown, set to UINT16_MAX
- (uint16_t)mcc;

//! Mobile network code. If unknown, set to UINT16_MAX
- (uint16_t)mnc;

//! Location area code. If unknown, set to 0
- (uint16_t)lac;

@end
