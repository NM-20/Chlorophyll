#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836AB0
   RuntimeId:        0427
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BC0E0
*/
enum SoundWaveVariationSelection
{
  SoundWaveVariationSelection_Sequential = 0,
  SoundWaveVariationSelection_Random = 1,
  SoundWaveVariationSelection_Shuffle = 2,
  SoundWaveVariationSelection_WeightedShuffle = 3,
};

}
