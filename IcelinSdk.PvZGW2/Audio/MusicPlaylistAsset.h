#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/MusicBaseAsset.h>
#include <IcelinSdk.PvZGW2/Audio/MusicPlaylistType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837F70
   RuntimeId:        056C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0643
   VfTable:          00000001421F9A48
   Address (Base):   00000001430FF8B0
*/
#pragma pack(push, 8)
class MusicPlaylistAsset : public MusicBaseAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  MusicPlaylistType PlaylistType; /* 0x0028 */
  char pad_002C[0x0004];
  FB_REFARRAY(class MusicAsset) Assets; /* 0x0030 */
  FB_REFARRAY(class MusicPlaylistSelector) Selectors; /* 0x0038 */
  FB_HANDLE(class SynchedFadeData) Fade; /* 0x0040 */
  FB_FLOAT32 MinDelay; /* 0x0048 */
  FB_FLOAT32 MaxDelay; /* 0x004C */
  FB_BOOLEAN Repeat; /* 0x0050 */
  char pad_0051[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(MusicPlaylistAsset) == 88);

}
