#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852F00
   RuntimeId:        1614
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BA1A0
*/
enum TonemapMethod
{
  TonemapMethod_None = 4,
  TonemapMethod_Linear = 0,
  TonemapMethod_Filmic = 1,
  TonemapMethod_FilmicNeutral = 2,
  TonemapMethod_LinearApproxGamma = 3,
  TonemapMethodCount = 4,
};

}
