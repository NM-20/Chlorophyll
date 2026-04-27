#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2B1D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236BC28
   Address:          00000001430C1628
   Default Value:    00000001428722A8
*/
#pragma pack(push, 8)
struct UIPVZHideObjectiveMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIPVZHideObjectiveMessage) == 48);

}
