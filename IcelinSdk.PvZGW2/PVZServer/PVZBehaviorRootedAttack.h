#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBehavior.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FB88
   RuntimeId:        1DFB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10EE
   VfTable:          000000014231D638
   Address (Base):   00000001430F91F0
*/
#pragma pack(push, 8)
class PVZBehaviorRootedAttack : public PVZBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 WeaponSlot; /* 0x0030 */
  FB_FLOAT32 LostTargetTime; /* 0x0034 */
  FB_BOOLEAN CheckAbilitiesRestricted; /* 0x0038 */
  FB_BOOLEAN CheckMeleeInteraction; /* 0x0039 */
  FB_BOOLEAN CheckAllocatedPressure; /* 0x003A */
  FB_BOOLEAN CheckTargetVisible; /* 0x003B */
  FB_BOOLEAN CheckWeaponReady; /* 0x003C */
  FB_BOOLEAN CheckTimeToFire; /* 0x003D */
  FB_BOOLEAN CheckAimValid; /* 0x003E */
  FB_BOOLEAN CheckMinRange; /* 0x003F */
  FB_BOOLEAN CheckMaxRange; /* 0x0040 */
  FB_BOOLEAN CheckStagger; /* 0x0041 */
  char pad_0042[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZBehaviorRootedAttack) == 72);

}
