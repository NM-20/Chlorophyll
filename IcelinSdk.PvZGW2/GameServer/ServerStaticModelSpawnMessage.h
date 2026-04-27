#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CB8
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142252D48
   Address:          00000001430C9DC8
   Default Value:    0000000142847370
*/
#pragma pack(push, 16)
struct ServerStaticModelSpawnMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x00A0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(ServerStaticModelSpawnMessage) == 160);

}
