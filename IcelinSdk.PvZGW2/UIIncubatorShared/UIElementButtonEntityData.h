#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementEntityData.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UIElementText.h>
#include <IcelinSdk.PvZGW2/UI/UIInputAction.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876918
   RuntimeId:        2DF1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BA8
   VfTable:          0000000142392EB0
   Address (Base):   00000001430E0520
*/
#pragma pack(push, 16)
class UIElementButtonEntityData : public UIElementEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIElementButtonStyle) Style; /* 0x00E0 */
  UIElementText Text; /* 0x00E8 */
  FB_FLOAT32 TextOffset; /* 0x0108 */
  char pad_010C[0x0004];
  FB_HANDLE(class UIElementTrigger) PreAction; /* 0x0110 */
  FB_HANDLE(class UIElementTrigger) Action; /* 0x0118 */
  FB_HANDLE(class UIElementTrigger) ActionGotFocus; /* 0x0120 */
  FB_HANDLE(class UIElementTrigger) ActionLostFocus; /* 0x0128 */
  UIInputAction KeyboardShortcut; /* 0x0130 */
  char pad_0134[0x0004];
  FB_CSTRING EnabledProperty; /* 0x0138 */
  FB_CSTRING ButtonText; /* 0x0140 */
  Vec2 DynamicSize; /* 0x0148 */
  FB_BOOLEAN UseAutoScroll; /* 0x0150 */
  FB_BOOLEAN Enabled; /* 0x0151 */
  char pad_0152[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0160 */
#pragma pack(pop)

static_assert(sizeof(UIElementButtonEntityData) == 352);

}
