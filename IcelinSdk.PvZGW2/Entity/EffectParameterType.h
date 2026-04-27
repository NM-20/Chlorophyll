#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A3E8
   RuntimeId:        07B9
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BBA00
*/
enum EffectParameterType
{
  EffectParameterType_Float = 0,
  EffectParameterType_Vec3 = 1,
  EffectParameterType_Bool = 2,
  EffectParameterType_Int = 3,
  EffectParameterType_MeshEmitter = 4,
  EffectParameterType_MeshEmitterMask = 5,
};

}
