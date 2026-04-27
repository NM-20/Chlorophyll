#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2D2A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014238CD98
   Address:          00000001430C0708
   Default Value:    00000001428758F0
*/
#pragma pack(push, 8)
struct UIBundleUnloadedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UIBundleUnloadedMessage) == 64);

}
