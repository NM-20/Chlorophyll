#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/GameDataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/AimingPoseData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DBD8
   RuntimeId:        2848
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DD1
   VfTable:          000000014236E930
   Address (Base):   00000001431057F0
*/
#pragma pack(push, 8)
class SoldierAimingSimulationData : public GameDataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class ZoomLevelData) ZoomLevels; /* 0x0010 */
  FB_HANDLE(class SoldierAimAssistData) AimAssist; /* 0x0018 */
  AimingPoseData StandPose; /* 0x0020 */
  AimingPoseData CrouchPose; /* 0x0038 */
  AimingPoseData PronePose; /* 0x0050 */
  FB_FLOAT32 ZoomTransitionTime; /* 0x0068 */
  char pad_006C[0x0004];
  FB_STDARRAY(struct ZoomLevelSpecificTransitionTime) ZoomTransitionTimeArray; /* 0x0070 */
  FB_FLOAT32 FovDelayTime; /* 0x0078 */
  FB_FLOAT32 FovTransitionTime; /* 0x007C */
  FB_FLOAT32 AimingRange; /* 0x0080 */
  FB_FLOAT32 LockAimToTargetSpeed; /* 0x0084 */
  FB_REFARRAY(class AimerModifierData) Modifiers; /* 0x0088 */
  FB_BOOLEAN ReturnToZoomAfterReload; /* 0x0090 */
  char pad_0091[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */
#pragma pack(pop)

static_assert(sizeof(SoldierAimingSimulationData) == 152);

}
