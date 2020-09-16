//
//  MVMessageAutopilotStateForGimbalDevice.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageAutopilotStateForGimbalDevice.h"

@implementation MVMessageAutopilotStateForGimbalDevice

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeBootUs:(uint64_t)timeBootUs targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent q:(float *)q qEstimatedDelayUs:(uint32_t)qEstimatedDelayUs vx:(float)vx vy:(float)vy vz:(float)vz vEstimatedDelayUs:(uint32_t)vEstimatedDelayUs feedForwardAngularVelocityZ:(float)feedForwardAngularVelocityZ estimatorStatus:(ESTIMATOR_STATUS_FLAGS)estimatorStatus landedState:(MAV_LANDED_STATE)landedState {
  if ((self = [super init])) {
    mavlink_msg_autopilot_state_for_gimbal_device_pack(systemId, componentId, &(self->_message), timeBootUs, targetSystem, targetComponent, q, qEstimatedDelayUs, vx, vy, vz, vEstimatedDelayUs, feedForwardAngularVelocityZ, estimatorStatus, landedState);
  }
  return self;
}

- (uint64_t)timeBootUs {
  return mavlink_msg_autopilot_state_for_gimbal_device_get_time_boot_us(&(self->_message));
}

- (uint8_t)targetSystem {
  return mavlink_msg_autopilot_state_for_gimbal_device_get_target_system(&(self->_message));
}

- (uint8_t)targetComponent {
  return mavlink_msg_autopilot_state_for_gimbal_device_get_target_component(&(self->_message));
}

- (uint16_t)q:(float *)q {
  return mavlink_msg_autopilot_state_for_gimbal_device_get_q(&(self->_message), q);
}

- (uint32_t)qEstimatedDelayUs {
  return mavlink_msg_autopilot_state_for_gimbal_device_get_q_estimated_delay_us(&(self->_message));
}

- (float)vx {
  return mavlink_msg_autopilot_state_for_gimbal_device_get_vx(&(self->_message));
}

- (float)vy {
  return mavlink_msg_autopilot_state_for_gimbal_device_get_vy(&(self->_message));
}

- (float)vz {
  return mavlink_msg_autopilot_state_for_gimbal_device_get_vz(&(self->_message));
}

- (uint32_t)vEstimatedDelayUs {
  return mavlink_msg_autopilot_state_for_gimbal_device_get_v_estimated_delay_us(&(self->_message));
}

- (float)feedForwardAngularVelocityZ {
  return mavlink_msg_autopilot_state_for_gimbal_device_get_feed_forward_angular_velocity_z(&(self->_message));
}

- (ESTIMATOR_STATUS_FLAGS)estimatorStatus {
  return mavlink_msg_autopilot_state_for_gimbal_device_get_estimator_status(&(self->_message));
}

- (MAV_LANDED_STATE)landedState {
  return mavlink_msg_autopilot_state_for_gimbal_device_get_landed_state(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, timeBootUs=%lld, targetSystem=%d, targetComponent=%d, q=%@, qEstimatedDelayUs=%d, vx=%f, vy=%f, vz=%f, vEstimatedDelayUs=%d, feedForwardAngularVelocityZ=%f, estimatorStatus=%d, landedState=%d", [super description], [self timeBootUs], [self targetSystem], [self targetComponent], @"[array of float[4]]", [self qEstimatedDelayUs], [self vx], [self vy], [self vz], [self vEstimatedDelayUs], [self feedForwardAngularVelocityZ], [self estimatorStatus], [self landedState]];
}

@end
