#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AC5
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142232940
   Address:          00000001430CBE28
   Default Value:    0000000142840230
*/
#pragma pack(push, 8)
struct ClientLevelSpawnEntitiesEndMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ClientLevelSpawnEntitiesEndMessage) == 48);

}
