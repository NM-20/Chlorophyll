#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        238C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142350188
   Address:          00000001430C42C8
   Default Value:    0000000142866880
*/
#pragma pack(push, 8)
struct PVZNetworkRequestAwardsStatusesMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkRequestAwardsStatusesMessage) == 96);

}
