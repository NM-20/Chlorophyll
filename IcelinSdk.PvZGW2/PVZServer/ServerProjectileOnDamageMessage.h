#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1E9D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142320290
   Address:          00000001430C56A8
   Default Value:    0000000142860E00
*/
#pragma pack(push, 8)
struct ServerProjectileOnDamageMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ServerProjectileOnDamageMessage) == 72);

}
