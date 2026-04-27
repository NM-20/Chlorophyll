#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        191F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422CB580
   Address:          00000001430C7188
   Default Value:    0000000142856960
*/
#pragma pack(push, 8)
struct UIFlowDialogNodeReachedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UIFlowDialogNodeReachedMessage) == 72);

}
