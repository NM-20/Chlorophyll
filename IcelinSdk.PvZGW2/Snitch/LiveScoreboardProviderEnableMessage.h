#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2C6C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014238AA90
   Address:          00000001430C0A08
   Default Value:    0000000142874950
*/
#pragma pack(push, 8)
struct LiveScoreboardProviderEnableMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(LiveScoreboardProviderEnableMessage) == 48);

}
