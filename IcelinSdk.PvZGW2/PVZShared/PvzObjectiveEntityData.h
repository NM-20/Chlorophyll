#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864578
   RuntimeId:        21F1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C67
   VfTable:          00000001423525F0
   Address (Base):   00000001430E50E0
*/
#pragma pack(push, 8)
class PvzObjectiveEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DisplayTime; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING ObjectiveSid; /* 0x0020 */
  FB_CSTRING LocationId; /* 0x0028 */
  TeamId TeamId; /* 0x0030 */
  char pad_0034[0x0004];
  FB_HANDLE(class MovieTextureAsset) Movie; /* 0x0038 */
  FB_HANDLE(class MovieTextureAsset) LoopingMovie; /* 0x0040 */
  FB_HANDLE(class MovieTextureAsset) OutroMovie; /* 0x0048 */
  FB_HANDLE(class SoundAsset) Audio; /* 0x0050 */
  FB_FLOAT32 AudioStartDelay; /* 0x0058 */
  FB_BOOLEAN UseZomboss; /* 0x005C */
  char pad_005D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PvzObjectiveEntityData) == 96);

}
