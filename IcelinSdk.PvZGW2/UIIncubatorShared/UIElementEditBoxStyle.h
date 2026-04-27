#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UIElementStyle.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementColor.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876858
   RuntimeId:        2DE5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0669
   VfTable:          0000000142393130
   Address (Base):   0000000143102D30
*/
#pragma pack(push, 16)
class UIElementEditBoxStyle : public UIElementStyle
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIElementFillData) FillDataNormal; /* 0x0018 */
  UIElementColor BarColor; /* 0x0020 */
  FB_HANDLE(class UIElementFillData) FillDataHovered; /* 0x0040 */
  FB_HANDLE(class UIElementFillData) FillDataActive; /* 0x0048 */
  FB_HANDLE(class UIElementFontStyle) FontStyleNormal; /* 0x0050 */
  FB_HANDLE(class UIElementFontEffect) FontEffectNormal; /* 0x0058 */
  FB_FLOAT32 MarginTop; /* 0x0060 */
  FB_FLOAT32 MarginLeft; /* 0x0064 */
  FB_FLOAT32 MarginRight; /* 0x0068 */
  FB_FLOAT32 MarginBottom; /* 0x006C */
  FB_FLOAT32 BarThickness; /* 0x0070 */
  FB_FLOAT32 BarOffsetX; /* 0x0074 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(UIElementEditBoxStyle) == 128);

}
