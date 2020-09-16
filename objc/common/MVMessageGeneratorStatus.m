//
//  MVMessageGeneratorStatus.m
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessageGeneratorStatus.h"

@implementation MVMessageGeneratorStatus

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId status:(MAV_GENERATOR_STATUS_FLAG)status generatorSpeed:(uint16_t)generatorSpeed batteryCurrent:(float)batteryCurrent loadCurrent:(float)loadCurrent powerGenerated:(float)powerGenerated busVoltage:(float)busVoltage rectifierTemperature:(int16_t)rectifierTemperature batCurrentSetpoint:(float)batCurrentSetpoint generatorTemperature:(int16_t)generatorTemperature runtime:(uint32_t)runtime timeUntilMaintenance:(int32_t)timeUntilMaintenance {
  if ((self = [super init])) {
    mavlink_msg_generator_status_pack(systemId, componentId, &(self->_message), status, generatorSpeed, batteryCurrent, loadCurrent, powerGenerated, busVoltage, rectifierTemperature, batCurrentSetpoint, generatorTemperature, runtime, timeUntilMaintenance);
  }
  return self;
}

- (MAV_GENERATOR_STATUS_FLAG)status {
  return mavlink_msg_generator_status_get_status(&(self->_message));
}

- (uint16_t)generatorSpeed {
  return mavlink_msg_generator_status_get_generator_speed(&(self->_message));
}

- (float)batteryCurrent {
  return mavlink_msg_generator_status_get_battery_current(&(self->_message));
}

- (float)loadCurrent {
  return mavlink_msg_generator_status_get_load_current(&(self->_message));
}

- (float)powerGenerated {
  return mavlink_msg_generator_status_get_power_generated(&(self->_message));
}

- (float)busVoltage {
  return mavlink_msg_generator_status_get_bus_voltage(&(self->_message));
}

- (int16_t)rectifierTemperature {
  return mavlink_msg_generator_status_get_rectifier_temperature(&(self->_message));
}

- (float)batCurrentSetpoint {
  return mavlink_msg_generator_status_get_bat_current_setpoint(&(self->_message));
}

- (int16_t)generatorTemperature {
  return mavlink_msg_generator_status_get_generator_temperature(&(self->_message));
}

- (uint32_t)runtime {
  return mavlink_msg_generator_status_get_runtime(&(self->_message));
}

- (int32_t)timeUntilMaintenance {
  return mavlink_msg_generator_status_get_time_until_maintenance(&(self->_message));
}

- (NSString *)description {
  return [NSString stringWithFormat:@"%@, status=%lld, generatorSpeed=%d, batteryCurrent=%f, loadCurrent=%f, powerGenerated=%f, busVoltage=%f, rectifierTemperature=%d, batCurrentSetpoint=%f, generatorTemperature=%d, runtime=%d, timeUntilMaintenance=%d", [super description], [self status], [self generatorSpeed], [self batteryCurrent], [self loadCurrent], [self powerGenerated], [self busVoltage], [self rectifierTemperature], [self batCurrentSetpoint], [self generatorTemperature], [self runtime], [self timeUntilMaintenance]];
}

@end
