#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementEntityData.h>
#include <IcelinSdk.PvZGW2/UIGFxElement/ElementDisplayLevel.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875CA8
   RuntimeId:        2D59
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BA9
   VfTable:          000000014238DEF0
   Address (Base):   00000001430E0D00
*/
#pragma pack(push, 16)
class UIGFxElementEntityData : public UIElementEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIAsset) Asset; /* 0x00E0 */
  ElementDisplayLevel DisplayLevel; /* 0x00E8 */
  char pad_00EC[0x0004];
  FB_STDARRAY(struct UIActionscriptEvent) Events; /* 0x00F0 */
  FB_STDARRAY(struct UIActionscriptProperty) Properties; /* 0x00F8 */
  FB_STDARRAY(struct UIActionscriptLink) Links; /* 0x0100 */
  FB_BOOLEAN ForceFullScreen; /* 0x0108 */
  FB_BOOLEAN IsInFocus; /* 0x0109 */
  char pad_010A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */
#pragma pack(pop)

static_assert(sizeof(UIGFxElementEntityData) == 272);

}
