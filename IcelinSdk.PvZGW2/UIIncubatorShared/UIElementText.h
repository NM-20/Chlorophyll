#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementAlignment.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876670
   RuntimeId:        2DCF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B7C60
   Default Value:    0000000142876688
*/
#pragma pack(push, 8)
struct UIElementText
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Sid; /* 0x0000 */
  FB_STDARRAY(struct UIElementTextEntry) Entries; /* 0x0008 */
  UIElementAlignment VerticalAlignment; /* 0x0010 */
  UIElementAlignment HorizonalAlignment; /* 0x0014 */
  FB_BOOLEAN Wordwrap; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIElementText) == 32);

}
