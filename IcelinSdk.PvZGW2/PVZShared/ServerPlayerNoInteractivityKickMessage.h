#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2893
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236E6E0
   Address:          00000001430C29A8
   Default Value:    000000014286E4D8
*/
#pragma pack(push, 8)
struct ServerPlayerNoInteractivityKickMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerPlayerNoInteractivityKickMessage) == 56);

}
