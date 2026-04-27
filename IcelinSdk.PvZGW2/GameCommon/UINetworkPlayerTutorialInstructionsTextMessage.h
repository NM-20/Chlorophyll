#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BBC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014223FAD8
   Address:          00000001430CAD08
   Default Value:    0000000142845500
*/
#pragma pack(push, 8)
struct UINetworkPlayerTutorialInstructionsTextMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UINetworkPlayerTutorialInstructionsTextMessage) == 88);

}
