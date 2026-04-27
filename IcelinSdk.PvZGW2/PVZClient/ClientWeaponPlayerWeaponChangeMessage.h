#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1CF2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423100F0
   Address:          00000001430C5DC8
   Default Value:    000000014285E7E0
*/
#pragma pack(push, 8)
struct ClientWeaponPlayerWeaponChangeMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ClientWeaponPlayerWeaponChangeMessage) == 56);

}
