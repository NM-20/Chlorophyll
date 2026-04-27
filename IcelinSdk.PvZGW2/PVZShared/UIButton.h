#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A6E0
   RuntimeId:        2593
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3448
   Default Value:    0000000142866E78
*/
#pragma pack(push, 8)
struct UIButton
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING ButtonLabel; /* 0x0000 */
  FB_CSTRING ButtonId; /* 0x0008 */
  FB_BOOLEAN IsPremium; /* 0x0010 */
  char pad_0011[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIButton) == 24);

}
