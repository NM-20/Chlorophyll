#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameObjectData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Render/LocalPlayerViewId.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D960
   RuntimeId:        1151
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DC5
   VfTable:          0000000142273C40
   Address (Base):   00000001430BEF50
*/
#pragma pack(push, 16)
class CameraData : public GameObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 PreFadeTime; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 OcclusionRayOffset; /* 0x0020 */
  FB_FLOAT32 FadeOutTime; /* 0x0030 */
  FB_FLOAT32 FadeTime; /* 0x0034 */
  FB_FLOAT32 FadeWaitTime; /* 0x0038 */
  FB_FLOAT32 NearPlane; /* 0x003C */
  FB_FLOAT32 ShadowViewDistanceScale; /* 0x0040 */
  FB_FLOAT32 SoundOcclusion; /* 0x0044 */
  FB_FLOAT32 SoundListenerRadius; /* 0x0048 */
  FB_FLOAT32 SoundListenerFov; /* 0x004C */
  FB_FLOAT32 ShakeFactor; /* 0x0050 */
  LocalPlayerViewId ViewId; /* 0x0054 */
  FB_BOOLEAN OnlyFadeIn; /* 0x0058 */
  FB_BOOLEAN StayFadedWhileStreaming; /* 0x0059 */
  char pad_005A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(CameraData) == 96);

}
