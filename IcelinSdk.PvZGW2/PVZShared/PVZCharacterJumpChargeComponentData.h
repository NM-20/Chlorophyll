#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864138
   RuntimeId:        21AF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D2D
   VfTable:          0000000142352958
   Address (Base):   00000001430D5230
*/
#pragma pack(push, 16)
class PVZCharacterJumpChargeComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 Thrust; /* 0x0070 */
  Vec3 LowGravThrust; /* 0x0080 */
  FB_FLOAT32 IntroTime; /* 0x0090 */
  FB_FLOAT32 ChargeDuration; /* 0x0094 */
  char pad_0098[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterJumpChargeComponentData) == 160);

}
