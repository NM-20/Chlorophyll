#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CAC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142252E08
   Address:          00000001430C9F48
   Default Value:    0000000142847060
*/
#pragma pack(push, 16)
struct ServerCollisionSmokeGrenadeMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(ServerCollisionSmokeGrenadeMessage) == 96);

}
