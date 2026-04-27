#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428536E0
   RuntimeId:        1688
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430C7FA8
*/
enum MaterialModel
{
  MaterialModel_Standard = 0,
  MaterialModel_Metallic = 1,
  MaterialModel_Skin = 2,
  MaterialModel_DynamicEnvmap = 3,
  MaterialModel_Hair = 4,
  MaterialModel_Translucent = 5,
};

}
