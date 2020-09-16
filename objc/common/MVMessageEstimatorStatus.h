//
//  MVMessageEstimatorStatus.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a ESTIMATOR_STATUS Mavlink message.

 @discussion Estimator status message including flags, innovation test ratios and estimated accuracies. The flags message is an integer bitmask containing information on which EKF outputs are valid. See the ESTIMATOR_STATUS_FLAGS enum definition for further information. The innovation test ratios show the magnitude of the sensor innovation divided by the innovation check threshold. Under normal operation the innovation test ratios should be below 0.5 with occasional values up to 1.0. Values greater than 1.0 should be rare under normal operation and indicate that a measurement has been rejected by the filter. The user should be notified if an innovation test ratio greater than 1.0 is recorded. Notifications for values in the range between 0.5 and 1.0 should be optional and controllable by the user.
 */
@interface MVMessageEstimatorStatus : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId timeUsec:(uint64_t)timeUsec flags:(ESTIMATOR_STATUS_FLAGS)flags velRatio:(float)velRatio posHorizRatio:(float)posHorizRatio posVertRatio:(float)posVertRatio magRatio:(float)magRatio haglRatio:(float)haglRatio tasRatio:(float)tasRatio posHorizAccuracy:(float)posHorizAccuracy posVertAccuracy:(float)posVertAccuracy;

//! Timestamp (UNIX Epoch time or time since system boot). The receiving end can infer timestamp format (since 1.1.1970 or since system boot) by checking for the magnitude of the number.
- (uint64_t)timeUsec;

//! Bitmap indicating which EKF outputs are valid.
- (ESTIMATOR_STATUS_FLAGS)flags;

//! Velocity innovation test ratio
- (float)velRatio;

//! Horizontal position innovation test ratio
- (float)posHorizRatio;

//! Vertical position innovation test ratio
- (float)posVertRatio;

//! Magnetometer innovation test ratio
- (float)magRatio;

//! Height above terrain innovation test ratio
- (float)haglRatio;

//! True airspeed innovation test ratio
- (float)tasRatio;

//! Horizontal position 1-STD accuracy relative to the EKF local origin
- (float)posHorizAccuracy;

//! Vertical position 1-STD accuracy relative to the EKF local origin
- (float)posVertAccuracy;

@end
