#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CustomizationUnlockParts.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponSlot.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864228
   RuntimeId:        21BD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E4C
   VfTable:          0000000142352A38
   Address (Base):   00000001430DA550
*/
#pragma pack(push, 8)
class WeaponCustomizationUnlockParts : public CustomizationUnlockParts
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  ::fb::WeaponSlot WeaponSlot; /* 0x0030 */
  ::fb::WeaponSlot SelectablesPairWithSlot; /* 0x0034 */
  FB_UINT32 SelectablesAvailableWithPairedSlotsIndex; /* 0x0038 */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(WeaponCustomizationUnlockParts) == 64);

}
