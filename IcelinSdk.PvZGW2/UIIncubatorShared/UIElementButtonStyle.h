#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UIElementStyle.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementColor.h>

namespace fb
{

/* TypeInfo (Array): 00000001428767D8
   RuntimeId:        2DDD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          066A
   VfTable:          00000001423930C8
   Address (Base):   0000000143102EB0
*/
#pragma pack(push, 16)
class UIElementButtonStyle : public UIElementStyle
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING TextureId; /* 0x0018 */
  UIElementColor NormalTextColor; /* 0x0020 */
  UIElementColor HoveredTextColor; /* 0x0040 */
  UIElementColor PressedTextColor; /* 0x0060 */
  UIElementColor DisabledTextColor; /* 0x0080 */
  FB_HANDLE(class UIElementFillData) FillDataNormal; /* 0x00A0 */
  FB_HANDLE(class UIElementFillData) FillDataHovered; /* 0x00A8 */
  FB_HANDLE(class UIElementFillData) FillDataPressed; /* 0x00B0 */
  FB_HANDLE(class UIElementFillData) FillDataDisabled; /* 0x00B8 */
  FB_HANDLE(class UIElementFontStyle) NormalFontStyle; /* 0x00C0 */
  FB_HANDLE(class UIElementFontEffect) NormalFontEffect; /* 0x00C8 */
  FB_HANDLE(class UIElementFontStyle) HoveredFontStyle; /* 0x00D0 */
  FB_HANDLE(class UIElementFontEffect) HoveredFontEffect; /* 0x00D8 */
  FB_HANDLE(class UIElementFontStyle) PressedFontStyle; /* 0x00E0 */
  FB_HANDLE(class UIElementFontEffect) PressedFontEffect; /* 0x00E8 */
  FB_HANDLE(class UIElementFontStyle) DisabledFontStyle; /* 0x00F0 */
  FB_HANDLE(class UIElementFontEffect) DisabledFontEffect; /* 0x00F8 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(UIElementButtonStyle) == 256);

}
