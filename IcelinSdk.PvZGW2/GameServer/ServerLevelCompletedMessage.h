#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CD8
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142252B58
   Address:          00000001430C99C8
   Default Value:    0000000142847A08
*/
#pragma pack(push, 8)
struct ServerLevelCompletedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ServerLevelCompletedMessage) == 48);

}
