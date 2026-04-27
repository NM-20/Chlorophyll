#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrackData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854D68
   RuntimeId:        17C5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CE2
   VfTable:          00000001422B5458
   Address (Base):   00000001430EA360
*/
#pragma pack(push, 8)
class GroupTrackData : public TimelineTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class GroupTrackRootData) RootData; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(GroupTrackData) == 48);

}
