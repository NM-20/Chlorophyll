#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CC8
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142252C48
   Address:          00000001430C9BC8
   Default Value:    00000001428476D0
*/
#pragma pack(push, 8)
struct ServerGameplaySetPostRoundLogicMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerGameplaySetPostRoundLogicMessage) == 56);

}
