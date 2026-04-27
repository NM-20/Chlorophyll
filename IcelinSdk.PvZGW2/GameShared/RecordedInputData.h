#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BDF0
   RuntimeId:        0FDA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06B6
   VfTable:          0000000142268090
   Address (Base):   0000000143112C90
*/
#pragma pack(push, 8)
class RecordedInputData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct InputRecorderTrackData) TrackData; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(RecordedInputData) == 32);

}
