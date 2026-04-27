#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869050
   RuntimeId:        2457
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8F00
   Default Value:    0000000142BB4FC0
*/
#pragma pack(push, 4)
struct StoredWeaponData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 WeaponClass; /* 0x0000 */
  FB_INT32 MagCount; /* 0x0004 */
  FB_INT32 MagCapacity; /* 0x0008 */
  FB_BOOLEAN SwitchToPrimaryWhenOutOfAmmo; /* 0x000C */
  char pad_000D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(StoredWeaponData) == 16);

}
