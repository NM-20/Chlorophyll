#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUICppScreenData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIVisualWidgetType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428717E8
   RuntimeId:        2A81
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06F2
   VfTable:          000000014236C688
   Address (Base):   00000001430F57D0
*/
#pragma pack(push, 16)
class PVZUICommanderScreenData : public PVZUICppScreenData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec4 MapFocusMargins; /* 0x0030 */
  UIVisualWidgetType VisualWidgetType; /* 0x0040 */
  char pad_0044[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PVZUICommanderScreenData) == 80);

}
