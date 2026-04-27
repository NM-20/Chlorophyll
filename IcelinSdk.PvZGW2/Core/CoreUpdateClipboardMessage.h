#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        00E2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001421E5360
   Address:          00000001430CD7A8
   Default Value:    0000000142833070
*/
#pragma pack(push, 8)
struct CoreUpdateClipboardMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(CoreUpdateClipboardMessage) == 56);

}
