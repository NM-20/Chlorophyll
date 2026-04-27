#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2393
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234FCF8
   Address:          00000001430C41E8
   Default Value:    0000000142866B50
*/
#pragma pack(push, 8)
struct PVZNetworkCancelStoryMissionMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkCancelStoryMissionMessage) == 96);

}
