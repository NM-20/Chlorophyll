#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871E80
   RuntimeId:        2AE9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C16C8
   Default Value:    0000000142871E98
*/
#pragma pack(push, 8)
struct LongTextLineStyle
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Prefix; /* 0x0000 */
  FB_HANDLE(class UIElementFontStyle) FontStyle; /* 0x0008 */
  FB_HANDLE(class UIElementFontEffect) FontEffect; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(LongTextLineStyle) == 24);

}
