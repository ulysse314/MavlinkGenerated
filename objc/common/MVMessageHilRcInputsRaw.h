//
//  MVMessageHilRcInputsRaw.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a HIL_RC_INPUTS_RAW Mavlink message.

 @discussion Sent from simulation to autopilot. The RAW values of the RC channels received. The standard PPM modulation is as follows: 1000 microseconds: 0%, 2000 microseconds: 100%. Individual receivers/transmitters might violate this specification.
 */
@interface MVMessageHilRcInputsRaw : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec chan1Raw:(uint16_t)chan1Raw chan2Raw:(uint16_t)chan2Raw chan3Raw:(uint16_t)chan3Raw chan4Raw:(uint16_t)chan4Raw chan5Raw:(uint16_t)chan5Raw chan6Raw:(uint16_t)chan6Raw chan7Raw:(uint16_t)chan7Raw chan8Raw:(uint16_t)chan8Raw chan9Raw:(uint16_t)chan9Raw chan10Raw:(uint16_t)chan10Raw chan11Raw:(uint16_t)chan11Raw chan12Raw:(uint16_t)chan12Raw rssi:(uint8_t)rssi;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! RC channel 1 value
- (uint16_t)chan1Raw;

//! RC channel 2 value
- (uint16_t)chan2Raw;

//! RC channel 3 value
- (uint16_t)chan3Raw;

//! RC channel 4 value
- (uint16_t)chan4Raw;

//! RC channel 5 value
- (uint16_t)chan5Raw;

//! RC channel 6 value
- (uint16_t)chan6Raw;

//! RC channel 7 value
- (uint16_t)chan7Raw;

//! RC channel 8 value
- (uint16_t)chan8Raw;

//! RC channel 9 value
- (uint16_t)chan9Raw;

//! RC channel 10 value
- (uint16_t)chan10Raw;

//! RC channel 11 value
- (uint16_t)chan11Raw;

//! RC channel 12 value
- (uint16_t)chan12Raw;

//! Receive signal strength indicator in device-dependent units/scale. Values: [0-254], 255: invalid/unknown.
- (uint8_t)rssi;

@end
