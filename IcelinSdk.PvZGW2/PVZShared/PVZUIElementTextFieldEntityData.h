#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UIElementTextFieldEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871A10
   RuntimeId:        2AA3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BA6
   VfTable:          000000014236C5A8
   Address (Base):   00000001430D9170
*/
#pragma pack(push, 16)
class PVZUIElementTextFieldEntityData : public UIElementTextFieldEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 ColorOverride; /* 0x0140 */
  FB_FLOAT32 TextScale; /* 0x0150 */
  FB_FLOAT32 RowSpacing; /* 0x0154 */
  FB_INT32 VerticalAlignOverride; /* 0x0158 */
  FB_INT32 HorizontalAlignOverride; /* 0x015C */
  FB_STDARRAY(struct LanguageRowSpacing) LanguageSpacingOverride; /* 0x0160 */
  FB_HANDLE(class UIElementFontEffect) FontEffectOverride; /* 0x0168 */
  FB_BOOLEAN UseStaticMask; /* 0x0170 */
  FB_BOOLEAN ShrinkToFit; /* 0x0171 */
  char pad_0172[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0180 */
#pragma pack(pop)

static_assert(sizeof(PVZUIElementTextFieldEntityData) == 384);

}
