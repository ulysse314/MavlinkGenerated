//
//  MVMessageCellularConfig.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a CELLULAR_CONFIG Mavlink message.

 @discussion Configure cellular modems. This message is re-emitted as an acknowledgement by the modem. The message may also be explicitly requested using MAV_CMD_REQUEST_MESSAGE.
 */
@interface MVMessageCellularConfig : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId enableLte:(uint8_t)enableLte enablePin:(uint8_t)enablePin pin:(char *)pin newPin:(char *)newPin apn:(char *)apn puk:(char *)puk roaming:(uint8_t)roaming response:(CELLULAR_CONFIG_RESPONSE)response;

//! Enable/disable LTE. 0: setting unchanged, 1: disabled, 2: enabled. Current setting when sent back as a response.
- (uint8_t)enableLte;

//! Enable/disable PIN on the SIM card. 0: setting unchanged, 1: disabled, 2: enabled. Current setting when sent back as a response.
- (uint8_t)enablePin;

//! PIN sent to the SIM card. Blank when PIN is disabled. Empty when message is sent back as a response.
- (NSString *)pin;

//! New PIN when changing the PIN. Blank to leave it unchanged. Empty when message is sent back as a response.
- (NSString *)newPin;

//! Name of the cellular APN. Blank to leave it unchanged. Current APN when sent back as a response.
- (NSString *)apn;

//! Required PUK code in case the user failed to authenticate 3 times with the PIN. Empty when message is sent back as a response.
- (NSString *)puk;

//! Enable/disable roaming. 0: setting unchanged, 1: disabled, 2: enabled. Current setting when sent back as a response.
- (uint8_t)roaming;

//! Message acceptance response (sent back to GS).
- (CELLULAR_CONFIG_RESPONSE)response;

@end
