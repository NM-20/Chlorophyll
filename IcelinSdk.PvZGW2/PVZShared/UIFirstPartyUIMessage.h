#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2B1A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236BCD8
   Address:          00000001430C1688
   Default Value:    00000001428721C0
*/
#pragma pack(push, 8)
struct UIFirstPartyUIMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UIFirstPartyUIMessage) == 56);

}
