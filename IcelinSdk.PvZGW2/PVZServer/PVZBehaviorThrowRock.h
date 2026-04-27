#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBehavior.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FA68
   RuntimeId:        1DE9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10E6
   VfTable:          000000014231D6C8
   Address (Base):   00000001430F9550
*/
#pragma pack(push, 8)
class PVZBehaviorThrowRock : public PVZBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 WeaponSlot; /* 0x0030 */
  char pad_0034[0x0004];
  FB_HANDLE(class IntegerProvider) ShieldForcedWeaponSlot; /* 0x0038 */
  FB_HANDLE(class BoolProvider) ShouldTaunt; /* 0x0040 */
  FB_FLOAT32 TauntDelayMin; /* 0x0048 */
  FB_FLOAT32 TauntDelayMax; /* 0x004C */
  FB_FLOAT32 ThrowDelayMin; /* 0x0050 */
  FB_FLOAT32 ThrowDelayMax; /* 0x0054 */
  FB_FLOAT32 PostThrowDelay; /* 0x0058 */
  char pad_005C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PVZBehaviorThrowRock) == 96);

}
