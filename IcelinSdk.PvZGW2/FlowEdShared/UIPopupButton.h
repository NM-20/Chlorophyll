#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UI/UIInputAction.h>

namespace fb
{

/* TypeInfo (Array): 00000001428570B8
   RuntimeId:        198B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C70A8
   Default Value:    00000001428570D0
*/
#pragma pack(push, 8)
struct UIPopupButton
{
  typedef struct ValueTypeInfo TypeInfo_t;

  UIInputAction InputConcept; /* 0x0000 */
  char pad_0004[0x0004];
  FB_CSTRING Label; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UIPopupButton) == 16);

}
