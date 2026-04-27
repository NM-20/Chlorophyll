#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CB0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142252DC8
   Address:          00000001430C9EC8
   Default Value:    00000001428471F0
*/
#pragma pack(push, 16)
struct ServerCollisionExplosionSpawnMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(ServerCollisionExplosionSpawnMessage) == 96);

}
