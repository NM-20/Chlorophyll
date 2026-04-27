#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428716E8
   RuntimeId:        2A71
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1788
   Default Value:    0000000142871368
*/
#pragma pack(push, 8)
struct BlackMarketDialogueEntry
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING DialogueEntry; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(BlackMarketDialogueEntry) == 8);

}
