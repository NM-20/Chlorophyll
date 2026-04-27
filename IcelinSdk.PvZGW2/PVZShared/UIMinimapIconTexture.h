#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIHudIcon.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A3F0
   RuntimeId:        2575
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C34C8
   Default Value:    0000000142866CF8
*/
#pragma pack(push, 8)
struct UIMinimapIconTexture
{
  typedef struct ValueTypeInfo TypeInfo_t;

  UIHudIcon IconType; /* 0x0000 */
  char pad_0004[0x0004];
  FB_CSTRING Name; /* 0x0008 */
  FB_STDARRAY(struct UIMinimapIconTextureState) States; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIMinimapIconTexture) == 24);

}
