#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FF60
   RuntimeId:        135E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0676
   VfTable:          0000000142278010
   Address (Base):   00000001430D5E90
*/
#pragma pack(push, 8)
class MovieTextureAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_GUID ChunkGuid; /* 0x0018 */
  FB_UINT32 ChunkSize; /* 0x0028 */
  FB_GUID SubtitleChunkGuid; /* 0x002C */
  FB_UINT32 SubtitleChunkSize; /* 0x003C */
  FB_BOOLEAN HasLocalizedAudioTracks; /* 0x0040 */
  FB_BOOLEAN OverrideBackgroundMusic; /* 0x0041 */
  FB_BOOLEAN PreloadMovie; /* 0x0042 */
  FB_BOOLEAN HasVp6; /* 0x0043 */
  FB_BOOLEAN HasVp8; /* 0x0044 */
  char pad_0045[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(MovieTextureAsset) == 72);

}
