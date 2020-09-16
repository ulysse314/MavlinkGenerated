//
//  MVMessageSysStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a SYS_STATUS Mavlink message.

 @discussion The general system state. If the system is following the MAVLink standard, the system state is mainly defined by three orthogonal states/modes: The system mode, which is either LOCKED (motors shut down and locked), MANUAL (system under RC control), GUIDED (system with autonomous position control, position setpoint controlled manually) or AUTO (system guided by path/waypoint planner). The NAV_MODE defined the current flight state: LIFTOFF (often an open-loop maneuver), LANDING, WAYPOINTS or VECTOR. This represents the internal navigation state machine. The system status shows whether the system is currently active or not and if an emergency occurred. During the CRITICAL and EMERGENCY states the MAV is still considered to be active, but should start emergency procedures autonomously. After a failure occurred it should first move from active to critical to allow manual intervention and then move to emergency after a certain timeout.
 */
@interface MVMessageSysStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId onboardControlSensorsPresent:(MAV_SYS_STATUS_SENSOR)onboardControlSensorsPresent onboardControlSensorsEnabled:(MAV_SYS_STATUS_SENSOR)onboardControlSensorsEnabled onboardControlSensorsHealth:(MAV_SYS_STATUS_SENSOR)onboardControlSensorsHealth load:(uint16_t)load voltageBattery:(uint16_t)voltageBattery currentBattery:(int16_t)currentBattery batteryRemaining:(int8_t)batteryRemaining dropRateComm:(uint16_t)dropRateComm errorsComm:(uint16_t)errorsComm errorsCount1:(uint16_t)errorsCount1 errorsCount2:(uint16_t)errorsCount2 errorsCount3:(uint16_t)errorsCount3 errorsCount4:(uint16_t)errorsCount4;

//! Bitmap showing which onboard controllers and sensors are present. Value of 0: not present. Value of 1: present.
- (MAV_SYS_STATUS_SENSOR)onboardControlSensorsPresent;

//! Bitmap showing which onboard controllers and sensors are enabled:  Value of 0: not enabled. Value of 1: enabled.
- (MAV_SYS_STATUS_SENSOR)onboardControlSensorsEnabled;

//! Bitmap showing which onboard controllers and sensors have an error (or are operational). Value of 0: error. Value of 1: healthy.
- (MAV_SYS_STATUS_SENSOR)onboardControlSensorsHealth;

//! Maximum usage in percent of the mainloop time. Values: [0-1000] - should always be below 1000
- (uint16_t)load;

//! Battery voltage, UINT16_MAX: Voltage not sent by autopilot
- (uint16_t)voltageBattery;

//! Battery current, -1: Current not sent by autopilot
- (int16_t)currentBattery;

//! Battery energy remaining, -1: Battery remaining energy not sent by autopilot
- (int8_t)batteryRemaining;

//! Communication drop rate, (UART, I2C, SPI, CAN), dropped packets on all links (packets that were corrupted on reception on the MAV)
- (uint16_t)dropRateComm;

//! Communication errors (UART, I2C, SPI, CAN), dropped packets on all links (packets that were corrupted on reception on the MAV)
- (uint16_t)errorsComm;

//! Autopilot-specific errors
- (uint16_t)errorsCount1;

//! Autopilot-specific errors
- (uint16_t)errorsCount2;

//! Autopilot-specific errors
- (uint16_t)errorsCount3;

//! Autopilot-specific errors
- (uint16_t)errorsCount4;

@end
