#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0666
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001421FDEF8
   Address:          00000001430CCD08
   Default Value:    00000001428390D8
*/
#pragma pack(push, 8)
struct BreakableModelToComponentsSpawnPartObjectsOnCollapseMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(BreakableModelToComponentsSpawnPartObjectsOnCollapseMessage) == 48);

}
