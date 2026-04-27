#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1E40
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423205F0
   Address:          00000001430C5C28
   Default Value:    0000000142860140
*/
#pragma pack(push, 8)
struct ServerSoldierChangingWeaponMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerSoldierChangingWeaponMessage) == 56);

}
