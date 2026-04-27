#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A0F8
   RuntimeId:        2553
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C35E8
   Default Value:    000000014286A110
*/
#pragma pack(push, 8)
struct PVZUIPopupTextInput
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Id; /* 0x0000 */
  FB_CSTRING Label; /* 0x0008 */
  FB_CSTRING DefaultValue; /* 0x0010 */
  FB_BOOLEAN IsPassword; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZUIPopupTextInput) == 32);

}
