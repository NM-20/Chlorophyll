#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementColor.h>

namespace fb
{

/* TypeInfo (Array): 00000001428766B0
   RuntimeId:        2DD1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0508
   Default Value:    00000001428766F0
*/
#pragma pack(push, 16)
struct UIElementLineStyle
{
  typedef struct ValueTypeInfo TypeInfo_t;

  UIElementColor Color; /* 0x0000 */
  FB_FLOAT32 Width; /* 0x0020 */
  char pad_0024[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIElementLineStyle) == 48);

}
