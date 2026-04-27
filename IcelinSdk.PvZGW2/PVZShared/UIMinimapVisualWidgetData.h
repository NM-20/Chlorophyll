#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UILegacyWidgetEntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIVisualWidgetType.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementColor.h>

namespace fb
{

/* TypeInfo (Array): 00000001428718F0
   RuntimeId:        2A91
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BC1
   VfTable:          000000014236C4C8
   Address (Base):   00000001430E42A0
*/
#pragma pack(push, 16)
class UIMinimapVisualWidgetData : public UILegacyWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UIVisualWidgetType WidgetType; /* 0x0048 */
  char pad_004C[0x0004];
  FB_CSTRING MaskName; /* 0x0050 */
  char pad_0058[0x0008];
  UIElementColor MinimapColor; /* 0x0060 */
  UIElementColor JointColor; /* 0x0080 */
  UIElementColor JointNameColor1; /* 0x00A0 */
  UIElementColor JointNameColor2; /* 0x00C0 */
  UIElementColor LineColor; /* 0x00E0 */
  UIElementColor AreaColor; /* 0x0100 */
  UIElementColor SecondaryColor; /* 0x0120 */
  FB_FLOAT32 NativeViewWidth; /* 0x0140 */
  FB_FLOAT32 ViewVelocityExpandFactor; /* 0x0144 */
  FB_FLOAT32 ViewVelocityMin; /* 0x0148 */
  FB_FLOAT32 ViewVelocityMax; /* 0x014C */
  FB_CSTRING JointImage; /* 0x0150 */
  FB_HANDLE(class UIElementFontStyle) JointNameFont; /* 0x0158 */
  FB_HANDLE(class UIElementFontEffect) JointNameEffect; /* 0x0160 */
  FB_CSTRING JointNameSequence; /* 0x0168 */
  FB_FLOAT32 LineWidth; /* 0x0170 */
  FB_FLOAT32 PatternWidth; /* 0x0174 */
  FB_FLOAT32 PatternSoftness; /* 0x0178 */
  FB_BOOLEAN UseStencil; /* 0x017C */
  FB_BOOLEAN UseMask; /* 0x017D */
  FB_BOOLEAN RenderCombatArea; /* 0x017E */
  char pad_017F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0180 */
#pragma pack(pop)

static_assert(sizeof(UIMinimapVisualWidgetData) == 384);

}
