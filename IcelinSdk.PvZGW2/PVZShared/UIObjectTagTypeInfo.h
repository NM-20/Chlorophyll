#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIObjectTagType.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A800
   RuntimeId:        25A5
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3428
   Default Value:    000000014286A818
*/
#pragma pack(push, 8)
struct UIObjectTagTypeInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  UIObjectTagType TagType; /* 0x0000 */
  char pad_0004[0x0004];
  FB_HANDLE(class UIScreenRenderEntityData) ScreenEntityBlueprint; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UIObjectTagTypeInfo) == 16);

}
