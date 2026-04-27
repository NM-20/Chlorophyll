#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428763C8
   RuntimeId:        2DAC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BB3
   VfTable:          00000001423932E8
   Address (Base):   00000001430E0880
*/
#pragma pack(push, 16)
class UIScrollbarElementEntityData : public UIElementEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIElementScrollbarStyle) ScrollbarStyle; /* 0x00E0 */
  FB_FLOAT32 DynamicScrollPosition; /* 0x00E8 */
  FB_FLOAT32 ContentSize; /* 0x00EC */
  FB_FLOAT32 ScrollStepSize; /* 0x00F0 */
  char pad_00F4[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(UIScrollbarElementEntityData) == 256);

}
