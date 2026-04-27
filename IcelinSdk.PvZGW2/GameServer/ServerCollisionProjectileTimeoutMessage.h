#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CAF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142252E18
   Address:          00000001430C9EE8
   Default Value:    0000000142847190
*/
#pragma pack(push, 16)
struct ServerCollisionProjectileTimeoutMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(ServerCollisionProjectileTimeoutMessage) == 96);

}
