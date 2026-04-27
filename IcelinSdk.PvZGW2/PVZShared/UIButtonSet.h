#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A700
   RuntimeId:        2595
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8DA0
   Default Value:    0000000142866FA8
*/
#pragma pack(push, 8)
struct UIButtonSet
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(struct UIButton) Buttons; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(UIButtonSet) == 8);

}
