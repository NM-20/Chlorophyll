#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CC28
   RuntimeId:        10A2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D4C
   VfTable:          00000001422673C0
   Address (Base):   0000000143112570
*/
#pragma pack(push, 16)
class AnimationTurretRotationComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct TurretRotationInfo) Rotations; /* 0x0070 */
  FB_INT32 SoldierBaseIndex; /* 0x0078 */
  FB_BOOLEAN UseVehicleWorldTransform; /* 0x007C */
  FB_BOOLEAN OutputWorldTransform; /* 0x007D */
  char pad_007E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(AnimationTurretRotationComponentData) == 128);

}
