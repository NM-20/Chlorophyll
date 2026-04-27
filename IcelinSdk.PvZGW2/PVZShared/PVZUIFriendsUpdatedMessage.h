#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2B3E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236B898
   Address:          00000001430C1228
   Default Value:    00000001428726D8
*/
#pragma pack(push, 8)
struct PVZUIFriendsUpdatedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZUIFriendsUpdatedMessage) == 56);

}
