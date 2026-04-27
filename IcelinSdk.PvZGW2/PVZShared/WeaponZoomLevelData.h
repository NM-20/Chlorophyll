#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/SightType.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponAnimationSettingsData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D8A0
   RuntimeId:        2822
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ECD
   VfTable:          000000014236F620
   Address (Base):   00000001431059D0
*/
#pragma pack(push, 8)
class WeaponZoomLevelData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 RenderFov; /* 0x0010 */
  char pad_0014[0x0004];
  FB_HANDLE(class FOVTransitionData) RenderFovTransition; /* 0x0018 */
  FB_STDARRAY(FB_FLOAT32) ZoomInOutMeshTransitionFactors; /* 0x0020 */
  FB_FLOAT32 ZoomDisabledTransitionTimer; /* 0x0028 */
  SightType SightType; /* 0x002C */
  WeaponAnimationSettingsData AnimationSettings; /* 0x0030 */
  char pad_004C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(WeaponZoomLevelData) == 80);

}
