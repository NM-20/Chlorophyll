#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F1F0
   RuntimeId:        1299
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8D28
   Default Value:    0000000142BA4837
*/
#pragma pack(push, 1)
struct ActorToBlueprintGuidRow
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0001 */
#pragma pack(pop)

static_assert(sizeof(ActorToBlueprintGuidRow) == 1);

}
