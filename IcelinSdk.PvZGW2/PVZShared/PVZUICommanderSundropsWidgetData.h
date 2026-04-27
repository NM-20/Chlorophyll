#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UILegacyWidgetEntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIVisualWidgetType.h>
#include <IcelinSdk.PvZGW2/PVZShared/SundropIconParam.h>

namespace fb
{

/* TypeInfo (Array): 00000001428718D0
   RuntimeId:        2A8F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BC0
   VfTable:          000000014236C740
   Address (Base):   00000001430E23E0
*/
#pragma pack(push, 8)
class PVZUICommanderSundropsWidgetData : public UILegacyWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UIVisualWidgetType VisualWidgetType; /* 0x0048 */
  SundropIconParam ManDownParams; /* 0x004C */
  SundropIconParam TickerParams; /* 0x0054 */
  FB_FLOAT32 CollectAccelerationDuration; /* 0x005C */
  FB_FLOAT32 KinectExpansionRatio; /* 0x0060 */
  char pad_0064[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(PVZUICommanderSundropsWidgetData) == 104);

}
