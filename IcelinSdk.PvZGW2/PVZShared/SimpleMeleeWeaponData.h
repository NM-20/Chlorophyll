#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FE48
   RuntimeId:        2946
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F04
   VfTable:          000000014236DE20
   Address (Base):   00000001430D8810
*/
#pragma pack(push, 8)
class SimpleMeleeWeaponData : public WeaponData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 MeleeType; /* 0x0018 */
  FB_FLOAT32 AttackRangeMultiplier; /* 0x001C */
  FB_FLOAT32 MeleeChargeBaseDeathValue; /* 0x0020 */
  FB_BOOLEAN UseCannedAnimation; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SimpleMeleeWeaponData) == 40);

}
