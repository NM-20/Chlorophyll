#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/RecordTrackBaseData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F510
   RuntimeId:        12CB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CCF
   VfTable:          0000000142276570
   Address (Base):   00000001430EBEC0
*/
#pragma pack(push, 8)
class RecordVehicleTrackData : public RecordTrackBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class RecordTrackChildrenData) ChildrenTracks; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(RecordVehicleTrackData) == 72);

}
