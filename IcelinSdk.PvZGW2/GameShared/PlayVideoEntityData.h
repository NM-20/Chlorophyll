#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849400
   RuntimeId:        0D80
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09A6
   VfTable:          00000001422600F0
   Address (Base):   00000001430EDDE0
*/
#pragma pack(push, 8)
class PlayVideoEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MovieTextureAsset) Movie; /* 0x0018 */
  FB_HANDLE(class MovieTextureAsset) DynamicMovieIn; /* 0x0020 */
  FB_HANDLE(class MovieTextureAsset) DynamicMovieLoopClip; /* 0x0028 */
  FB_HANDLE(class MovieTextureAsset) DynamicMovieOutroClip; /* 0x0030 */
  FB_CSTRING NetworkStreamingUrl; /* 0x0038 */
  FB_CSTRING VideoIdentifier; /* 0x0040 */
  FB_HANDLE(class SoundAsset) Audio; /* 0x0048 */
  FB_BOOLEAN KeepBlackScreen; /* 0x0050 */
  FB_BOOLEAN AllowSkip; /* 0x0051 */
  FB_BOOLEAN DrawInWidget; /* 0x0052 */
  FB_BOOLEAN RenderWorld; /* 0x0053 */
  FB_BOOLEAN PlayAboveUI; /* 0x0054 */
  FB_BOOLEAN Loop; /* 0x0055 */
  char pad_0056[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(PlayVideoEntityData) == 88);

}
