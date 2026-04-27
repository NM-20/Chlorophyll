#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIWidgetEntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIVisualWidgetType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871868
   RuntimeId:        2A89
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BE0
   VfTable:          000000014236C7C0
   Address (Base):   00000001430E24A0
*/
#pragma pack(push, 8)
class PVZUIMinimapIconsWidgetData : public UIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UIVisualWidgetType VisualWidgetType; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZUIMinimapIconsWidgetData) == 72);

}
