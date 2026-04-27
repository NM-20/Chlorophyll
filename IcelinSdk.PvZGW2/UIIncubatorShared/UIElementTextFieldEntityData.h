#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementEntityData.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UIElementText.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876878
   RuntimeId:        2DE7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BA5
   VfTable:          00000001423930F8
   Address (Base):   00000001430D8570
*/
#pragma pack(push, 16)
class UIElementTextFieldEntityData : public UIElementEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIElementGenericStyle) Style; /* 0x00E0 */
  UIElementText Text; /* 0x00E8 */
  FB_HANDLE(class UIElementFontStyle) FontStyle; /* 0x0108 */
  FB_HANDLE(class UIElementFontEffect) FontEffect; /* 0x0110 */
  FB_FLOAT32 TextOffset; /* 0x0118 */
  FB_FLOAT32 AutoAdjustLeftPadding; /* 0x011C */
  FB_FLOAT32 AutoAdjustRightPadding; /* 0x0120 */
  char pad_0124[0x0004];
  FB_CSTRING FieldText; /* 0x0128 */
  FB_FLOAT32 YOffset; /* 0x0130 */
  FB_BOOLEAN AutoAdjustWidth; /* 0x0134 */
  FB_BOOLEAN UseAutoScroll; /* 0x0135 */
  FB_BOOLEAN ClipToRect; /* 0x0136 */
  FB_BOOLEAN Password; /* 0x0137 */
  char pad_0138[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0140 */
#pragma pack(pop)

static_assert(sizeof(UIElementTextFieldEntityData) == 320);

}
