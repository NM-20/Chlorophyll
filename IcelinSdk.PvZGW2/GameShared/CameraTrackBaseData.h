#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TimelineTrackData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F088
   RuntimeId:        128B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CA6
   VfTable:          0000000142276A50
   Address (Base):   00000001430EBFE0
*/
#pragma pack(push, 8)
class CameraTrackBaseData : public TimelineTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(CameraTrackBaseData) == 40);

}
