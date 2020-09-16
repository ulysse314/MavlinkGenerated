//
//  MVMessageEfiStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageEfiStatus.h"

@implementation MVMessageEfiStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId health:(uint8_t)health ecuIndex:(float)ecuIndex rpm:(float)rpm fuelConsumed:(float)fuelConsumed fuelFlow:(float)fuelFlow engineLoad:(float)engineLoad throttlePosition:(float)throttlePosition sparkDwellTime:(float)sparkDwellTime barometricPressure:(float)barometricPressure intakeManifoldPressure:(float)intakeManifoldPressure intakeManifoldTemperature:(float)intakeManifoldTemperature cylinderHeadTemperature:(float)cylinderHeadTemperature ignitionTiming:(float)ignitionTiming injectionTime:(float)injectionTime {
  if ((self = [super init])) {
    mavlink_msg_efi_status_pack(systemId, componentId, &(self->_message), health, ecuIndex, rpm, fuelConsumed, fuelFlow, engineLoad, throttlePosition, sparkDwellTime, barometricPressure, intakeManifoldPressure, intakeManifoldTemperature, cylinderHeadTemperature, ignitionTiming, injectionTime);
  }
  return self;
}

- (uint8_t)health {
  return mavlink_msg_efi_status_get_health(&(self->_message));
}

- (float)ecuIndex {
  return mavlink_msg_efi_status_get_ecu_index(&(self->_message));
}

- (float)rpm {
  return mavlink_msg_efi_status_get_rpm(&(self->_message));
}

- (float)fuelConsumed {
  return mavlink_msg_efi_status_get_fuel_consumed(&(self->_message));
}

- (float)fuelFlow {
  return mavlink_msg_efi_status_get_fuel_flow(&(self->_message));
}

- (float)engineLoad {
  return mavlink_msg_efi_status_get_engine_load(&(self->_message));
}

- (float)throttlePosition {
  return mavlink_msg_efi_status_get_throttle_position(&(self->_message));
}

- (float)sparkDwellTime {
  return mavlink_msg_efi_status_get_spark_dwell_time(&(self->_message));
}

- (float)barometricPressure {
  return mavlink_msg_efi_status_get_barometric_pressure(&(self->_message));
}

- (float)intakeManifoldPressure {
  return mavlink_msg_efi_status_get_intake_manifold_pressure(&(self->_message));
}

- (float)intakeManifoldTemperature {
  return mavlink_msg_efi_status_get_intake_manifold_temperature(&(self->_message));
}

- (float)cylinderHeadTemperature {
  return mavlink_msg_efi_status_get_cylinder_head_temperature(&(self->_message));
}

- (float)ignitionTiming {
  return mavlink_msg_efi_status_get_ignition_timing(&(self->_message));
}

- (float)injectionTime {
  return mavlink_msg_efi_status_get_injection_time(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, health=%d, ecuIndex=%f, rpm=%f, fuelConsumed=%f, fuelFlow=%f, engineLoad=%f, throttlePosition=%f, sparkDwellTime=%f, barometricPressure=%f, intakeManifoldPressure=%f, intakeManifoldTemperature=%f, cylinderHeadTemperature=%f, ignitionTiming=%f, injectionTime=%f", [super description], [self health], [self ecuIndex], [self rpm], [self fuelConsumed], [self fuelFlow], [self engineLoad], [self throttlePosition], [self sparkDwellTime], [self barometricPressure], [self intakeManifoldPressure], [self intakeManifoldTemperature], [self cylinderHeadTemperature], [self ignitionTiming], [self injectionTime]];
}

@end
