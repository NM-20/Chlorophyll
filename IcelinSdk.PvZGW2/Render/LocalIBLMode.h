#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852A60
   RuntimeId:        15CE
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BA2A0
*/
enum LocalIBLMode
{
  LocalIBLMode_Static = 0,
  LocalIBLMode_Dynamic = 1,
  LocalIBLMode_Baked = 2,
  LocalIBLMode_Distant = 3,
};

}
