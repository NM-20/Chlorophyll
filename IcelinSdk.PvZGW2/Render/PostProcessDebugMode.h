#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142853060
   RuntimeId:        162A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BA180
*/
enum PostProcessDebugMode
{
  PpdmDefault = 0,
  PpdmBloom = 1,
  PpdmBloomStep = 2,
  PpdmDofBlur = 3,
  PpdmBlur = 4,
  PpdmBlurStep = 5,
  PpdmDepth = 6,
  PpdmBlurPyramidStep = 7,
};

}
