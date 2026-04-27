#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833390
   RuntimeId:        00F5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FE8
   VfTable:          00000001421E5258
   Address (Base):   000000014311C5F0
*/
#pragma pack(push, 8)
class PerfJournalSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 JournalSampleInterval; /* 0x0010 */
  FB_INT32 JournalFrameCount; /* 0x0014 */
  FB_FLOAT32 AutoJournalThresholdMs; /* 0x0018 */
  FB_INT32 AutoJournalMinFrames; /* 0x001C */
  FB_BOOLEAN Enable; /* 0x0020 */
  FB_BOOLEAN JournalExpensiveStats; /* 0x0021 */
  FB_BOOLEAN JournalAllSPU; /* 0x0022 */
  FB_BOOLEAN JournalReportAverage; /* 0x0023 */
  FB_BOOLEAN AutoJournalEnable; /* 0x0024 */
  FB_BOOLEAN AutoJournalScreenshot; /* 0x0025 */
  char pad_0026[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PerfJournalSettings) == 40);

}
