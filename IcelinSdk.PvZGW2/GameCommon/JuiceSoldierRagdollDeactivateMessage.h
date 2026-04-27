#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B5B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142241188
   Address:          00000001430CB808
   Default Value:    0000000142842130
*/
#pragma pack(push, 8)
struct JuiceSoldierRagdollDeactivateMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(JuiceSoldierRagdollDeactivateMessage) == 48);

}
