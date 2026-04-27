#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/RecordTrackBaseData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428548A8
   RuntimeId:        1777
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CCC
   VfTable:          00000001422B4B40
   Address (Base):   00000001430EA600
*/
#pragma pack(push, 8)
class RecordTrackChildrenData : public RecordTrackBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(RecordTrackChildrenData) == 64);

}
