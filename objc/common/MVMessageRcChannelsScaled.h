//
//  MVMessageRcChannelsScaled.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a RC_CHANNELS_SCALED Mavlink message.

 @discussion The scaled values of the RC channels received: (-100%) -10000, (0%) 0, (100%) 10000. Channels that are inactive should be set to UINT16_MAX.
 */
@interface MVMessageRcChannelsScaled : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs port:(uint8_t)port chan1Scaled:(int16_t)chan1Scaled chan2Scaled:(int16_t)chan2Scaled chan3Scaled:(int16_t)chan3Scaled chan4Scaled:(int16_t)chan4Scaled chan5Scaled:(int16_t)chan5Scaled chan6Scaled:(int16_t)chan6Scaled chan7Scaled:(int16_t)chan7Scaled chan8Scaled:(int16_t)chan8Scaled rssi:(uint8_t)rssi;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Servo output port (set of 8 outputs = 1 port). Flight stacks running on Pixhawk should use: 0 = MAIN, 1 = AUX.
- (uint8_t)port;

//! RC channel 1 value scaled.
- (int16_t)chan1Scaled;

//! RC channel 2 value scaled.
- (int16_t)chan2Scaled;

//! RC channel 3 value scaled.
- (int16_t)chan3Scaled;

//! RC channel 4 value scaled.
- (int16_t)chan4Scaled;

//! RC channel 5 value scaled.
- (int16_t)chan5Scaled;

//! RC channel 6 value scaled.
- (int16_t)chan6Scaled;

//! RC channel 7 value scaled.
- (int16_t)chan7Scaled;

//! RC channel 8 value scaled.
- (int16_t)chan8Scaled;

//! Receive signal strength indicator in device-dependent units/scale. Values: [0-254], 255: invalid/unknown.
- (uint8_t)rssi;

@end
