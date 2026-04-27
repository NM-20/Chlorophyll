#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/UIBlendMode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428769B8
   RuntimeId:        2DFB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BB1
   VfTable:          0000000142393070
   Address (Base):   00000001430D8510
*/
#pragma pack(push, 16)
class UIElementFillEntityData : public UIElementEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIElementFillData) Style; /* 0x00E0 */
  UIBlendMode BackgroundBlendMode; /* 0x00E8 */
  UIBlendMode OutlineBlendMode; /* 0x00EC */
  FB_BOOLEAN OverrideBackgroundBlendMode; /* 0x00F0 */
  FB_BOOLEAN OverrideOutlineBlendMode; /* 0x00F1 */
  FB_BOOLEAN DrawBackground; /* 0x00F2 */
  FB_BOOLEAN DrawOutline; /* 0x00F3 */
  char pad_00F4[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(UIElementFillEntityData) == 256);

}
