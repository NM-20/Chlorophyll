#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/MovementActionData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BE10
   RuntimeId:        0FDC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E5B
   VfTable:          0000000142268038
   Address (Base):   0000000143112C30
*/
#pragma pack(push, 8)
class SoldierMovementSequenceData : public MovementActionData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class RecordedInputData) RecordedInput; /* 0x0010 */
  FB_INT32 InputRecordingIndex; /* 0x0018 */
  FB_BOOLEAN IgnoreRecordingIndexFilter; /* 0x001C */
  FB_BOOLEAN ReportWhenFinished; /* 0x001D */
  char pad_001E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SoldierMovementSequenceData) == 32);

}
