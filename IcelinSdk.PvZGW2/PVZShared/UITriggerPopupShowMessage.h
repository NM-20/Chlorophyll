#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        25BA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014235B068
   Address:          00000001430C3388
   Default Value:    000000014286A998
*/
#pragma pack(push, 8)
struct UITriggerPopupShowMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UITriggerPopupShowMessage) == 48);

}
