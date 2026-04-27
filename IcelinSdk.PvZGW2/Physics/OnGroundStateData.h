#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterStateData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428516E0
   RuntimeId:        1492
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0876
   VfTable:          000000014227F440
   Address (Base):   00000001430EB260
*/
#pragma pack(push, 8)
class OnGroundStateData : public CharacterStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 JumpDelay; /* 0x0018 */
  FB_FLOAT32 JumpStaminaPenalty; /* 0x001C */
  FB_FLOAT32 AllowedDistanceFromGround; /* 0x0020 */
  FB_FLOAT32 UphillSpeedModifier; /* 0x0024 */
  FB_FLOAT32 UphillSpeedModifierMaxAngle; /* 0x0028 */
  FB_FLOAT32 DownhillSpeedModifier; /* 0x002C */
  FB_FLOAT32 DownhillSpeedModifierMaxAngle; /* 0x0030 */
  FB_FLOAT32 HillSpeedModifierDeadZone; /* 0x0034 */
  FB_BOOLEAN GroundHugging; /* 0x0038 */
  FB_BOOLEAN LimitDownwardVelocity; /* 0x0039 */
  char pad_003A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(OnGroundStateData) == 64);

}
