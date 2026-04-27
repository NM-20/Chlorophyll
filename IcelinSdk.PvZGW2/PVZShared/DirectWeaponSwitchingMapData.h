#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponSwitchingEnum.h>

namespace fb
{

/* TypeInfo (Array): 000000014286E330
   RuntimeId:        287C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C2C28
   Default Value:    000000014286C218
*/
#pragma pack(push, 4)
struct DirectWeaponSwitchingMapData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 Action; /* 0x0000 */
  FB_FLOAT32 MaxHoldTime; /* 0x0004 */
  WeaponSwitchingEnum ToWeapon; /* 0x0008 */
  FB_FLOAT32 SwitchBackToPrevMaxTimePressed; /* 0x000C */
  FB_FLOAT32 PreventMeleeRepeatTime; /* 0x0010 */
  FB_BOOLEAN FireAndSwitchBackToPrev; /* 0x0014 */
  FB_BOOLEAN UseQuickSwitch; /* 0x0015 */
  char pad_0016[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(DirectWeaponSwitchingMapData) == 24);

}
