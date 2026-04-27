#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        23A2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234F938
   Address:          00000001430C4048
   Default Value:    0000000142867100
*/
#pragma pack(push, 8)
struct PVZNetworkOnPlayerSelectedTeamMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkOnPlayerSelectedTeamMessage) == 80);

}
