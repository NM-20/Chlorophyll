#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        137C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014227B740
   Address:          00000001430C8A88
   Default Value:    00000001428501F0
*/
#pragma pack(push, 8)
struct SpikeInternalMessageWrapperMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0068];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(SpikeInternalMessageWrapperMessage) == 104);

}
