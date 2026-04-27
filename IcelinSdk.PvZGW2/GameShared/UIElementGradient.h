#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementColor.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C4C8
   RuntimeId:        1040
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB020
   Default Value:    000000014284C4E0
*/
#pragma pack(push, 16)
struct UIElementGradient
{
  typedef struct ValueTypeInfo TypeInfo_t;

  UIElementColor TopLeftColor; /* 0x0000 */
  UIElementColor TopRightColor; /* 0x0020 */
  UIElementColor BottomLeftColor; /* 0x0040 */
  UIElementColor BottomRightColor; /* 0x0060 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(UIElementGradient) == 128);

}
