#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852A00
   RuntimeId:        15C8
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C8468
*/
enum PBRLightType
{
  PBRLightType_AreaLight = 0,
  PBRLightType_AreaLightShadow = 1,
  PBRLightType_PunctualLight = 2,
  PBRLightType_PunctualLightShadow = 3,
  PBRLightType_LocalIBL = 4,
  PBRLightType_LocalPR = 5,
  PBRLightTypeCount = 6,
};

}
