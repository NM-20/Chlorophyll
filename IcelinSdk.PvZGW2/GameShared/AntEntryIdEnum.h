#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E148
   RuntimeId:        11C1
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BABE0
*/
enum AntEntryIdEnum
{
  AntEntryIdEnum_Humvee_Driver = 0,
  AntEntryIdEnum_F18F_Navigator = 17,
  AntEntryIdEnum_F18F_Pilot = 16,
  AntEntryIdEnum_VadsGunner = 15,
  AntEntryIdEnum_Vodnik_PassengerRearLeft = 14,
  AntEntryIdEnum_Vodnik_PassengerRearRight = 13,
  AntEntryIdEnum_Vodnik_PassengerFrontRight = 12,
  AntEntryIdEnum_Humvee_PassengerFrontRight = 11,
  AntEntryIdEnum_Vodnik_Gunner = 10,
  AntEntryIdEnum_Vodnik_Driver = 9,
  AntEntryIdEnum_AH64_Gunner = 8,
  AntEntryIdEnum_AH64_Pilot = 7,
  AntEntryIdEnum_AH6_Pilot = 6,
  AntEntryIdEnum_SU37_Pilot = 5,
  AntEntryIdEnum_F16_Pilot = 4,
  AntEntryIdEnum_Humvee_PassengerRearRight = 3,
  AntEntryIdEnum_Humvee_PassengerRearLeft = 2,
  AntEntryIdEnum_Humvee_Gunner = 1,
  AntEntryIdEnum_M1A2_Gunner = 18,
  AntEntryIdEnum_M1A2_Driver = 19,
};

}
