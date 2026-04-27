#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837F30
   RuntimeId:        0568
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BBE20
*/
enum MusicPlaylistType
{
  MusicPlaylistType_PlayFirstAndShuffle = 0,
  MusicPlaylistType_Random = 1,
  MusicPlaylistType_Shuffle = 2,
  MusicPlaylistType_Sequential = 3,
};

}
