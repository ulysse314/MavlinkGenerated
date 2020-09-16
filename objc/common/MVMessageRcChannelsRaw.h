//
//  MVMessageRcChannelsRaw.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a RC_CHANNELS_RAW Mavlink message.

 @discussion The RAW values of the RC channels received. The standard PPM modulation is as follows: 1000 microseconds: 0%, 2000 microseconds: 100%. A value of UINT16_MAX implies the channel is unused. Individual receivers/transmitters might violate this specification.
 */
@interface MVMessageRcChannelsRaw : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootMs:(uint32_t)timeBootMs port:(uint8_t)port chan1Raw:(uint16_t)chan1Raw chan2Raw:(uint16_t)chan2Raw chan3Raw:(uint16_t)chan3Raw chan4Raw:(uint16_t)chan4Raw chan5Raw:(uint16_t)chan5Raw chan6Raw:(uint16_t)chan6Raw chan7Raw:(uint16_t)chan7Raw chan8Raw:(uint16_t)chan8Raw rssi:(uint8_t)rssi;

//! Timestamp (time since system boot).
- (uint32_t)timeBootMs;

//! Servo output port (set of 8 outputs = 1 port). Flight stacks running on Pixhawk should use: 0 = MAIN, 1 = AUX.
- (uint8_t)port;

//! RC channel 1 value.
- (uint16_t)chan1Raw;

//! RC channel 2 value.
- (uint16_t)chan2Raw;

//! RC channel 3 value.
- (uint16_t)chan3Raw;

//! RC channel 4 value.
- (uint16_t)chan4Raw;

//! RC channel 5 value.
- (uint16_t)chan5Raw;

//! RC channel 6 value.
- (uint16_t)chan6Raw;

//! RC channel 7 value.
- (uint16_t)chan7Raw;

//! RC channel 8 value.
- (uint16_t)chan8Raw;

//! Receive signal strength indicator in device-dependent units/scale. Values: [0-254], 255: invalid/unknown.
- (uint8_t)rssi;

@end
