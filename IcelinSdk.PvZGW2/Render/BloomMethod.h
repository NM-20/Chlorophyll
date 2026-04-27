#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428530E0
   RuntimeId:        1632
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B71F8
*/
enum BloomMethod
{
  BloomMethod_GaussianSimple = 0,
  BloomMethod_GaussianCustom = 1,
  BloomMethod_FFT = 2,
};

}
