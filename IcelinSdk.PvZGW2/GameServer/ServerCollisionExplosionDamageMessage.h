#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CB1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142252DB8
   Address:          00000001430C9EA8
   Default Value:    0000000142847250
*/
#pragma pack(push, 16)
struct ServerCollisionExplosionDamageMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(ServerCollisionExplosionDamageMessage) == 96);

}
