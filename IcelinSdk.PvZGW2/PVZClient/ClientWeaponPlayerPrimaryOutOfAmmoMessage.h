#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CF6
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423100B0
   Address:          00000001430C5D48
   Default Value:    000000014285E8B8
*/
#pragma pack(push, 8)
struct ClientWeaponPlayerPrimaryOutOfAmmoMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ClientWeaponPlayerPrimaryOutOfAmmoMessage) == 56);

}
