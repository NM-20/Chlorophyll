#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZBehavior.h>
#include <IcelinSdk.PvZGW2/PVZShared/ETargetWeaponType.h>
#include <IcelinSdk.PvZGW2/PVZShared/EWeaponAiming.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FA48
   RuntimeId:        1DE7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10F5
   VfTable:          000000014231D6D8
   Address (Base):   00000001430E8680
*/
#pragma pack(push, 8)
class PVZBehaviorAttack : public PVZBehavior
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  ETargetWeaponType WeaponSelection; /* 0x0030 */
  ETargetWeaponType PostWeaponSelection; /* 0x0034 */
  FB_INT32 ForcedWeaponSlot; /* 0x0038 */
  char pad_003C[0x0004];
  FB_HANDLE(class IntegerProvider) ShieldWeaponSlot; /* 0x0040 */
  EWeaponAiming Aiming; /* 0x0048 */
  FB_BOOLEAN CheckAbilitiesRestricted; /* 0x004C */
  FB_BOOLEAN CheckMeleeInteraction; /* 0x004D */
  FB_BOOLEAN CheckAllocatedPressure; /* 0x004E */
  FB_BOOLEAN CheckTargetVisible; /* 0x004F */
  FB_BOOLEAN CheckWeaponReady; /* 0x0050 */
  FB_BOOLEAN CheckTimeToFire; /* 0x0051 */
  FB_BOOLEAN CheckAimValid; /* 0x0052 */
  FB_BOOLEAN CheckMinRange; /* 0x0053 */
  FB_BOOLEAN CheckMaxRange; /* 0x0054 */
  FB_BOOLEAN CheckStagger; /* 0x0055 */
  FB_BOOLEAN CheckMustRecover; /* 0x0056 */
  char pad_0057[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(PVZBehaviorAttack) == 88);

}
