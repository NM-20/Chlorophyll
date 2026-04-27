#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EA0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142320130
   Address:          00000001430C5648
   Default Value:    0000000142860EE0
*/
#pragma pack(push, 16)
struct ServerWeaponMortarStrikeMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ServerWeaponMortarStrikeMessage) == 80);

}
