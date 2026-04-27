#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A930
   RuntimeId:        25B7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C33C8
   Default Value:    000000014286A948
*/
#pragma pack(push, 8)
struct UIPopupTextInput
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

static_assert(sizeof(UIPopupTextInput) == 32);

}
