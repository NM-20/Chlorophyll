#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIWidgetEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementAlignment.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871EB8
   RuntimeId:        2AEB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BC9
   VfTable:          000000014236BF28
   Address (Base):   00000001430E3FA0
*/
#pragma pack(push, 8)
class UILongTextWidgetData : public PVZUIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Text; /* 0x0048 */
  FB_HANDLE(class UIElementFontStyle) FontStyle; /* 0x0050 */
  FB_HANDLE(class UIElementFontEffect) FontEffect; /* 0x0058 */
  UIElementAlignment Alignment; /* 0x0060 */
  FB_FLOAT32 EmptyLineHeight; /* 0x0064 */
  FB_STDARRAY(struct LongTextLineStyle) LineStyles; /* 0x0068 */
  FB_FLOAT32 ParagraphMargin; /* 0x0070 */
  FB_INT32 ElementsLayoutedPerFrame; /* 0x0074 */
  FB_FLOAT32 ScrollSpeed; /* 0x0078 */
  FB_FLOAT32 ScrollDelay; /* 0x007C */
  FB_INT32 FramesDelayWhenHoldingButtonDown; /* 0x0080 */
  FB_BOOLEAN AutoScroll; /* 0x0084 */
  FB_BOOLEAN ScrollPastBottomText; /* 0x0085 */
  FB_BOOLEAN ScrollPastTopText; /* 0x0086 */
  char pad_0087[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0088 */
#pragma pack(pop)

static_assert(sizeof(UILongTextWidgetData) == 136);

}
