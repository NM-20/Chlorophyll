#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        23B0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234F528
   Address:          00000001430C3E88
   Default Value:    0000000142867540
*/
#pragma pack(push, 8)
struct NetworkSpawnWaveFromIndexMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(NetworkSpawnWaveFromIndexMessage) == 80);

}
