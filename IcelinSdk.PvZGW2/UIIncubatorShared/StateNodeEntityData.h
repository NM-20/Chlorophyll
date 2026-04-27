#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/StateNodeEntityBaseData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876598
   RuntimeId:        2DC8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09E2
   VfTable:          00000001423931A8
   Address (Base):   00000001430E06A0
*/
#pragma pack(push, 8)
class StateNodeEntityData : public StateNodeEntityBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING State; /* 0x0028 */
  FB_CSTRING StateDisplayName; /* 0x0030 */
  FB_STDARRAY(struct StateNavEventInfo) EventTriggersInfo; /* 0x0038 */
  FB_STDARRAY(struct StateNavEventInfo) ConsumedEventsInfo; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(StateNodeEntityData) == 72);

}
