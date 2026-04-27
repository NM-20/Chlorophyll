#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C10
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142245690
   Address:          00000001430CA8E8
   Default Value:    0000000142846070
*/
#pragma pack(push, 8)
struct ServerLevelUnloadedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ServerLevelUnloadedMessage) == 48);

}
