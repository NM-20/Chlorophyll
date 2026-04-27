#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854AE8
   RuntimeId:        179D
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B9FC0
*/
enum LayeredTransform_BlendType
{
  LayeredTransform_BlendType_WorldOverride = 0,
  LayeredTransform_BlendType_WorldAdditive = 1,
  LayeredTransform_BlendType_WorldTranslationLocalRotationAdditive = 2,
  LayeredTransform_BlendType_LocalAdditive = 3,
  LayeredTransform_BlendType_Special = 4,
};

}
