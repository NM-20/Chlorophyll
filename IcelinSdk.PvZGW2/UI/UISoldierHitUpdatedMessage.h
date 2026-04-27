#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        180D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422B82C0
   Address:          00000001430C7368
   Default Value:    00000001428552C0
*/
#pragma pack(push, 16)
struct UISoldierHitUpdatedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(UISoldierHitUpdatedMessage) == 80);

}
