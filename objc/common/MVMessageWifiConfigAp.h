//
//  MVMessageWifiConfigAp.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a WIFI_CONFIG_AP Mavlink message.

 @discussion Configure WiFi AP SSID, password, and mode. This message is re-emitted as an acknowledgement by the AP. The message may also be explicitly requested using MAV_CMD_REQUEST_MESSAGE
 */
@interface MVMessageWifiConfigAp : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId ssid:(char *)ssid password:(char *)password mode:(WIFI_CONFIG_AP_MODE)mode response:(WIFI_CONFIG_AP_RESPONSE)response;

//! Name of Wi-Fi network (SSID). Blank to leave it unchanged when setting. Current SSID when sent back as a response.
- (NSString *)ssid;

//! Password. Blank for an open AP. MD5 hash when message is sent back as a response.
- (NSString *)password;

//! WiFi Mode.
- (WIFI_CONFIG_AP_MODE)mode;

//! Message acceptance response (sent back to GS).
- (WIFI_CONFIG_AP_RESPONSE)response;

@end
