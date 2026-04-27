#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870948
   RuntimeId:        29CF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8240
   Default Value:    0000000142870960
*/
#pragma pack(push, 8)
struct UIConnectionEntity2ButtonPopup
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Header; /* 0x0000 */
  FB_CSTRING Text; /* 0x0008 */
  FB_CSTRING Button1Text; /* 0x0010 */
  FB_CSTRING Button2Text; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIConnectionEntity2ButtonPopup) == 32);

}
