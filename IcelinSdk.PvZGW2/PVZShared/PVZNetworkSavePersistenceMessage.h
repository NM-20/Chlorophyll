#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        23AA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234FA78
   Address:          00000001430C3F48
   Default Value:    00000001428672F0
*/
#pragma pack(push, 8)
struct PVZNetworkSavePersistenceMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkSavePersistenceMessage) == 72);

}
