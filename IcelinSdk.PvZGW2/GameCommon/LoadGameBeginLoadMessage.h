#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B5D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142241128
   Address:          00000001430CB7C8
   Default Value:    00000001428421B0
*/
#pragma pack(push, 8)
struct LoadGameBeginLoadMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x00A0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(LoadGameBeginLoadMessage) == 160);

}
