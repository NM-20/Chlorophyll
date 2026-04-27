#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B7D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142240BE8
   Address:          00000001430CB448
   Default Value:    0000000142842BE0
*/
#pragma pack(push, 16)
struct NetworkSpawnHereMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0090];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(NetworkSpawnHereMessage) == 144);

}
