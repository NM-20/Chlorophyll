#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C26
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142245590
   Address:          00000001430CA628
   Default Value:    0000000142846480
*/
#pragma pack(push, 16)
struct ServerPlayerDebugFriendZoneSpawnMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0070];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(ServerPlayerDebugFriendZoneSpawnMessage) == 112);

}
