#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZWeaponsBinding.h>

namespace fb
{

/* TypeInfo (Array): 00000001428639C8
   RuntimeId:        2139
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D18
   VfTable:          0000000142353468
   Address (Base):   00000001430D5110
*/
#pragma pack(push, 16)
class PVZVehicleWeaponComponentData : public WeaponComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZWeaponsBinding PVZWeaponsAnimationBinding; /* 0x00D0 */
  FB_BOOLEAN FireAndSwitchBackToPrevious; /* 0x015C */
  char pad_015D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0160 */
#pragma pack(pop)

static_assert(sizeof(PVZVehicleWeaponComponentData) == 352);

}
