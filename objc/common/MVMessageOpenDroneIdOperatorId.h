//
//  MVMessageOpenDroneIdOperatorId.h
//  MAVLink communications protocol built from common.xml
//
//  Created by mavgen_objc.py
//  http://qgroundcontrol.org/mavlink
//

#import "MVMessage.h"

/*!
 Class that represents a OPEN_DRONE_ID_OPERATOR_ID Mavlink message.

 @discussion Data for filling the OpenDroneID Operator ID message, which contains the CAA (Civil Aviation Authority) issued operator ID.
 */
@interface MVMessageOpenDroneIdOperatorId : MVMessage

- (id)initWithSystemId:(uint8_t)systemId componentId:(uint8_t)componentId targetSystem:(uint8_t)targetSystem targetComponent:(uint8_t)targetComponent idOrMac:(uint8_t *)idOrMac operatorIdType:(MAV_ODID_OPERATOR_ID_TYPE)operatorIdType operatorId:(char *)operatorId;

//! System ID (0 for broadcast).
- (uint8_t)targetSystem;

//! Component ID (0 for broadcast).
- (uint8_t)targetComponent;

//! Only used for drone ID data received from other UAs. See detailed description at https://mavlink.io/en/services/opendroneid.html. 
- (uint16_t)idOrMac:(uint8_t *)id_or_mac;

//! Indicates the type of the operator_id field.
- (MAV_ODID_OPERATOR_ID_TYPE)operatorIdType;

//! Text description or numeric value expressed as ASCII characters. Shall be filled with nulls in the unused portion of the field.
- (NSString *)operatorId;

@end
