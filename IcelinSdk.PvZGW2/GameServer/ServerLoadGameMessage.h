#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C09
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142245700
   Address:          00000001430CA9C8
   Default Value:    0000000142845F20
*/
#pragma pack(push, 8)
struct ServerLoadGameMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0090];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(ServerLoadGameMessage) == 144);

}
