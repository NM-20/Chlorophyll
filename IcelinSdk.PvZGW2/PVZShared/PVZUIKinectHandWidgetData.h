#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UILegacyWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871888
   RuntimeId:        2A8B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BC2
   VfTable:          000000014236C708
   Address (Base):   00000001430E2440
*/
#pragma pack(push, 8)
class PVZUIKinectHandWidgetData : public UILegacyWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZUIKinectHandWidgetData) == 72);

}
