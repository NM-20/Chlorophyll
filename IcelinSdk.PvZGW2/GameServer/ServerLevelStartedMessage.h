#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CD7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142252B98
   Address:          00000001430C99E8
   Default Value:    00000001428479D0
*/
#pragma pack(push, 8)
struct ServerLevelStartedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerLevelStartedMessage) == 56);

}
