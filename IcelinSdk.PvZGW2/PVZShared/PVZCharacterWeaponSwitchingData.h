#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286E350
   RuntimeId:        2880
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0683
   VfTable:          000000014236E7B8
   Address (Base):   0000000143105610
*/
#pragma pack(push, 8)
class PVZCharacterWeaponSwitchingData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct WeaponSwitchingMapData) SwitchMap; /* 0x0018 */
  FB_STDARRAY(struct DirectWeaponSwitchingMapData) DirectSwitchMap; /* 0x0020 */
  FB_STDARRAY(enum WeaponSwitchingEnum) AutoDropSlots; /* 0x0028 */
  FB_INT32 ToggleAction; /* 0x0030 */
  FB_FLOAT32 ToggleMaxHoldTime; /* 0x0034 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterWeaponSwitchingData) == 56);

}
