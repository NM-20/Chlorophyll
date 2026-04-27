#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870910
   RuntimeId:        29CD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8260
   Default Value:    0000000142870928
*/
#pragma pack(push, 8)
struct UIConnectionEntity1ButtonPopup
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Header; /* 0x0000 */
  FB_CSTRING Text; /* 0x0008 */
  FB_CSTRING ButtonText; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIConnectionEntity1ButtonPopup) == 24);

}
