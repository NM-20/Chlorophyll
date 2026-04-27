#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851E60
   RuntimeId:        1504
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EFB
   VfTable:          000000014227EB90
   Address (Base):   00000001430B7410
*/
#pragma pack(push, 8)
class PhysicsSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 ClientClothWorldThreadCount; /* 0x0010 */
  FB_FLOAT32 WindManagerAwakeningRadius; /* 0x0014 */
  FB_UINT32 BlockStreamAllocatorMemory; /* 0x0018 */
  FB_UINT32 StepLocalStreamAllocator; /* 0x001C */
  FB_UINT32 BodyBufferCapacity; /* 0x0020 */
  FB_UINT32 MotionBufferCapacity; /* 0x0024 */
  FB_UINT32 ConstraintBufferCapacity; /* 0x0028 */
  FB_BOOLEAN Enable; /* 0x002C */
  FB_BOOLEAN EnableClothInterpolationJobs; /* 0x002D */
  FB_BOOLEAN EnableClothUpdateJob; /* 0x002E */
  FB_BOOLEAN EnableClothMotionBlur; /* 0x002F */
  FB_BOOLEAN RunClientSimulationSingleThreaded; /* 0x0030 */
  FB_BOOLEAN RunEffectSimulationSingleThreaded; /* 0x0031 */
  FB_BOOLEAN RunServerSimulationSingleThreaded; /* 0x0032 */
  FB_BOOLEAN EnableAIRigidBody; /* 0x0033 */
  FB_BOOLEAN ForestEnable; /* 0x0034 */
  FB_BOOLEAN EnableJobs; /* 0x0035 */
  FB_BOOLEAN RemoveRagdollWhenWoken; /* 0x0036 */
  FB_BOOLEAN RemoveFromWorldOnCollisionOverflow; /* 0x0037 */
  FB_BOOLEAN SingleStepCharacter; /* 0x0038 */
  FB_BOOLEAN ForceSingleStepCharacterInSP; /* 0x0039 */
  FB_BOOLEAN EnableFollowWheelRaycasts; /* 0x003A */
  FB_BOOLEAN EnableClientWheelRaycasts; /* 0x003B */
  FB_BOOLEAN EnableASyncWheelRaycasts; /* 0x003C */
  FB_BOOLEAN UseDelayedWakeUpClient; /* 0x003D */
  FB_BOOLEAN UseDelayedWakeUpServer; /* 0x003E */
  FB_BOOLEAN SuppressDebrisSpawnUntilReady; /* 0x003F */
  FB_BOOLEAN EnablePlayerVSAICollisions; /* 0x0040 */
  FB_BOOLEAN AllowClientAuthoritativeSurfaceVelocity; /* 0x0041 */
  FB_BOOLEAN EnableClientKeyframedCollisions; /* 0x0042 */
  FB_BOOLEAN EnableFXKeyframedCollisions; /* 0x0043 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PhysicsSettings) == 72);

}
