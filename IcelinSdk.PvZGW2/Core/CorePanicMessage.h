#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        00E4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001421E5340
   Address:          00000001430CD768
   Default Value:    00000001428330D8
*/
#pragma pack(push, 8)
struct CorePanicMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(CorePanicMessage) == 48);

}
