#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        23D7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234EC28
   Address:          00000001430C3A08
   Default Value:    0000000142868280
*/
#pragma pack(push, 8)
struct PVZNetworkGroupTeamJoinFailedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkGroupTeamJoinFailedMessage) == 72);

}
