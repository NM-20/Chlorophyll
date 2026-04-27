#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        238B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234FEF0
   Address:          00000001430C42E8
   Default Value:    0000000142866830
*/
#pragma pack(push, 8)
struct PVZNetworkAwardsStatusesMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkAwardsStatusesMessage) == 80);

}
