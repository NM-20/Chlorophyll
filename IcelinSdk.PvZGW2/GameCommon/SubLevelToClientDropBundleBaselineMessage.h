#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B3C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142241358
   Address:          00000001430CBBA8
   Default Value:    0000000142841BE0
*/
#pragma pack(push, 8)
struct SubLevelToClientDropBundleBaselineMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(SubLevelToClientDropBundleBaselineMessage) == 80);

}
