#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameObjectData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854A28
   RuntimeId:        178F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CA5
   VfTable:          00000001422B4848
   Address (Base):   00000001430B6D30
*/
#pragma pack(push, 8)
class TimelineTrackData : public GameObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class TimelineTrackDataConditionsBase) Conditions; /* 0x0018 */
  FB_BOOLEAN ExposePins; /* 0x0020 */
  FB_BOOLEAN IsDisabled; /* 0x0021 */
  FB_BOOLEAN DependsOnAnimation; /* 0x0022 */
  char pad_0023[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TimelineTrackData) == 40);

}
