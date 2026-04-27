#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EA9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423201A0
   Address:          00000001430C5528
   Default Value:    00000001428610A0
*/
#pragma pack(push, 8)
struct ServerWeaponPlayerPrimaryWeaponPrimingBeginMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerWeaponPlayerPrimaryWeaponPrimingBeginMessage) == 56);

}
