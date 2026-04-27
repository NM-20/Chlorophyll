#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837C50
   RuntimeId:        053A
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BBE80
*/
enum MusicPhraseSelectionType
{
  MusicPhraseSelectionType_PlayFirstAndShuffle = 0,
  MusicPhraseSelectionType_PlayAllAndShuffle = 1,
  MusicPhraseSelectionType_Random = 2,
  MusicPhraseSelectionType_Range = 3,
  MusicPhraseSelectionType_Sequential = 4,
  MusicPhraseSelectionType_Shuffle = 5,
  MusicPhraseSelectionType_Weighted = 6,
};

}
