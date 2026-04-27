#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/MirrorDamageTrapezoid.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponSlot.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864158
   RuntimeId:        21B1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D8C
   VfTable:          00000001423528D8
   Address (Base):   00000001430D51D0
*/
#pragma pack(push, 16)
class PVZCharacterWeaponSwitchingComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  MirrorDamageTrapezoid MeleeTrapezoid; /* 0x0070 */
  FB_FLOAT32 GroundToAirThreshold; /* 0x00C0 */
  FB_FLOAT32 AirToGroundThreshold; /* 0x00C4 */
  WeaponSlot PrimaryWeaponSlot; /* 0x00C8 */
  WeaponSlot InAirWeaponSlot; /* 0x00CC */
  WeaponSlot MeleeWeaponSlot; /* 0x00D0 */
  WeaponSlot ZoomWeaponSlot; /* 0x00D4 */
  char pad_00D8[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterWeaponSwitchingComponentData) == 224);

}
