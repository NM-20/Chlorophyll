#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428630E8
   RuntimeId:        20EC
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C4CE8
*/
enum PVZCommanderCameraType
{
  PVZCommanderCameraType_NoCamera = 0,
  PVZCommanderCameraType_TargetCamera = 1,
  PVZCommanderCameraType_StaticCamera = 2,
  PVZCommanderCameraType_Count = 3,
};

}
