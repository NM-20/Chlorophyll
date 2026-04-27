#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D7E0
   RuntimeId:        2818
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B6638
   Default Value:    0000000142BFEDD0
*/
#pragma pack(push, 4)
struct PVZWeaponsBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef WeaponPrimingStarted; /* 0x0000 */
  AntRef WeaponFireStarted; /* 0x0014 */
  AntRef TimeSinceFireStarted; /* 0x0028 */
  AntRef WeaponIsFiring; /* 0x003C */
  AntRef SpawnedProjectile; /* 0x0050 */
  AntRef ReloadTimeMultiplier; /* 0x0064 */
  AntRef ShootSpaceIndex; /* 0x0078 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x008C */
#pragma pack(pop)

static_assert(sizeof(PVZWeaponsBinding) == 140);

}
