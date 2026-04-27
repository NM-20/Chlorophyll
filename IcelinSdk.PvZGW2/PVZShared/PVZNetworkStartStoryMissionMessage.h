#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2392
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142350048
   Address:          00000001430C4208
   Default Value:    0000000142866AF0
*/
#pragma pack(push, 8)
struct PVZNetworkStartStoryMissionMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0060];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkStartStoryMissionMessage) == 96);

}
