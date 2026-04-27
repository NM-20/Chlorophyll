#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/LinkTrackData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854888
   RuntimeId:        1775
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CCB
   VfTable:          00000001422B4AF0
   Address (Base):   00000001430DAF10
*/
#pragma pack(push, 8)
class RecordTrackBaseData : public LinkTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 FramesToSkipPerKey; /* 0x0038 */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(RecordTrackBaseData) == 64);

}
