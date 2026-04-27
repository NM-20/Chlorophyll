#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIStickerBookUnlock.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871128
   RuntimeId:        2A2F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B81C0
   Default Value:    0000000142871140
*/
#pragma pack(push, 8)
struct UIStickerBookWeapon
{
  typedef struct ValueTypeInfo TypeInfo_t;

  UIStickerBookUnlock Unlock; /* 0x0000 */
  FB_CSTRING AmmoDesc; /* 0x0038 */
  FB_CSTRING ReloadDesc; /* 0x0040 */
  FB_CSTRING DamageDesc; /* 0x0048 */
  FB_CSTRING UseDesc; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UIStickerBookWeapon) == 88);

}
