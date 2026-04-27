#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1E9C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423202A0
   Address:          00000001430C56C8
   Default Value:    0000000142860D90
*/
#pragma pack(push, 8)
struct ServerProjectileOnPotentialHitMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerProjectileOnPotentialHitMessage) == 56);

}
