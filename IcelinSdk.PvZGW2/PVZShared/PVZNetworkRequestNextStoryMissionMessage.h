#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2394
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234FC58
   Address:          00000001430C41C8
   Default Value:    0000000142866BB0
*/
#pragma pack(push, 8)
struct PVZNetworkRequestNextStoryMissionMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkRequestNextStoryMissionMessage) == 88);

}
