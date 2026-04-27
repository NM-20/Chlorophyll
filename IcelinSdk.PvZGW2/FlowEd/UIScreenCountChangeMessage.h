#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        191B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422C9838
   Address:          00000001430C71C8
   Default Value:    00000001428568D0
*/
#pragma pack(push, 8)
struct UIScreenCountChangeMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIScreenCountChangeMessage) == 48);

}
