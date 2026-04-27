#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C9E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142252F28
   Address:          00000001430CA108
   Default Value:    0000000142845B18
*/
#pragma pack(push, 8)
struct ServerClubMemberDeletedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerClubMemberDeletedMessage) == 56);

}
