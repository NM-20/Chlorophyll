#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2947
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236DDD0
   Address:          00000001430C1BC8
   Default Value:    000000014286FE60
*/
#pragma pack(push, 16)
struct NetworkMeleeAttackStartMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0070];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(NetworkMeleeAttackStartMessage) == 112);

}
