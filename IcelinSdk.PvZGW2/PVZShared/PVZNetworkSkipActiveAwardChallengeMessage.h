#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2380
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142350458
   Address:          00000001430C43E8
   Default Value:    0000000142866600
*/
#pragma pack(push, 8)
struct PVZNetworkSkipActiveAwardChallengeMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkSkipActiveAwardChallengeMessage) == 96);

}
