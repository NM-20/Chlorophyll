#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B538
   RuntimeId:        08CA
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BB860
*/
enum RenderingOverride
{
  RenderingOverride_Inherit = 0,
  RenderingOverride_Enable = 1,
  RenderingOverride_Disable = 2,
  RenderingOverride_Legacy = 3,
};

}
