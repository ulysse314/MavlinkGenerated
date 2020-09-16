//
//  MVMessageOpticalFlowRad.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a OPTICAL_FLOW_RAD Mavlink message.

 @discussion Optical flow from an angular rate flow sensor (e.g. PX4FLOW or mouse sensor)
 */
@interface MVMessageOpticalFlowRad : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec sensorId:(uint8_t)sensorId integrationTimeUs:(uint32_t)integrationTimeUs integratedX:(float)integratedX integratedY:(float)integratedY integratedXgyro:(float)integratedXgyro integratedYgyro:(float)integratedYgyro integratedZgyro:(float)integratedZgyro temperature:(int16_t)temperature quality:(uint8_t)quality timeDeltaDistanceUs:(uint32_t)timeDeltaDistanceUs distance:(float)distance;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Sensor ID
- (uint8_t)sensorId;

//! Integration time. Divide integrated_x and integrated_y by the integration time to obtain average flow. The integration time also indicates the.
- (uint32_t)integrationTimeUs;

//! Flow around X axis (Sensor RH rotation about the X axis induces a positive flow. Sensor linear motion along the positive Y axis induces a negative flow.)
- (float)integratedX;

//! Flow around Y axis (Sensor RH rotation about the Y axis induces a positive flow. Sensor linear motion along the positive X axis induces a positive flow.)
- (float)integratedY;

//! RH rotation around X axis
- (float)integratedXgyro;

//! RH rotation around Y axis
- (float)integratedYgyro;

//! RH rotation around Z axis
- (float)integratedZgyro;

//! Temperature
- (int16_t)temperature;

//! Optical flow quality / confidence. 0: no valid flow, 255: maximum quality
- (uint8_t)quality;

//! Time since the distance was sampled.
- (uint32_t)timeDeltaDistanceUs;

//! Distance to the center of the flow field. Positive value (including zero): distance known. Negative value: Unknown distance.
- (float)distance;

@end
