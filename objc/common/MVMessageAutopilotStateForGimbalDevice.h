//
//  MVMessageAutopilotStateForGimbalDevice.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a AUTOPILOT_STATE_FOR_GIMBAL_DEVICE Mavlink message.

 @discussion Low level message containing autopilot state relevant for a gimbal device. This message is to be sent from the gimbal manager to the gimbal device component. The data of this message server for the gimbal's estimator corrections in particular horizon compensation, as well as the autopilot's control intention e.g. feed forward angular control in z-axis.
 */
@interface MVMessageAutopilotStateForGimbalDevice : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootUs:(uint64_t)timeBootUs targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent q:(float *)q qEstimatedDelayUs:(uint32_t)qEstimatedDelayUs vx:(float)vx vy:(float)vy vz:(float)vz vEstimatedDelayUs:(uint32_t)vEstimatedDelayUs feedForwardAngularVelocityZ:(float)feedForwardAngularVelocityZ estimatorStatus:(ESTIMATOR_STATUS_FLAGS)estimatorStatus landedState:(MAV_LANDED_STATE)landedState;

//! Timestamp (time since system boot).
- (uint64_t)timeBootUs;

//! System ID
- (uint8_t)targetSystem;

//! Component ID
- (uint8_t)targetComponent;

//! Quaternion components of autopilot attitude: w, x, y, z (1 0 0 0 is the null-rotation, Hamiltonian convention).
- (uint16_t)q:(float *)q;

//! Estimated delay of the attitude data.
- (uint32_t)qEstimatedDelayUs;

//! X Speed in NED (North, East, Down).
- (float)vx;

//! Y Speed in NED (North, East, Down).
- (float)vy;

//! Z Speed in NED (North, East, Down).
- (float)vz;

//! Estimated delay of the speed data.
- (uint32_t)vEstimatedDelayUs;

//! Feed forward Z component of angular velocity, positive is yawing to the right, NaN to be ignored. This is to indicate if the autopilot is actively yawing.
- (float)feedForwardAngularVelocityZ;

//! Bitmap indicating which estimator outputs are valid.
- (ESTIMATOR_STATUS_FLAGS)estimatorStatus;

//! The landed state. Is set to MAV_LANDED_STATE_UNDEFINED if landed state is unknown.
- (MAV_LANDED_STATE)landedState;

@end
