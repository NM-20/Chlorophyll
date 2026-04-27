#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0665
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001421FDF08
   Address:          00000001430CCD28
   Default Value:    00000001428390A8
*/
#pragma pack(push, 8)
struct BreakableModelToComponentsCollapseMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(BreakableModelToComponentsCollapseMessage) == 48);

}
