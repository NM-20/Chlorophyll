#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833370
   RuntimeId:        00F3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0603
   VfTable:          00000001421E5268
   Address (Base):   000000014311C650
*/
#pragma pack(push, 8)
class PerfHudSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING TimerCategorySetName; /* 0x0010 */
  FB_INT32 HudRightMargin; /* 0x0018 */
  FB_INT32 HudTopMargin; /* 0x001C */
  FB_BOOLEAN Enable; /* 0x0020 */
  FB_BOOLEAN DrawCpuEnable; /* 0x0021 */
  FB_BOOLEAN DrawGpuEnable; /* 0x0022 */
  FB_BOOLEAN DrawSpuEnable; /* 0x0023 */
  FB_BOOLEAN SimpleSummaryMode; /* 0x0024 */
  FB_BOOLEAN TimerCategorySetsEnable; /* 0x0025 */
  FB_BOOLEAN DrawUngroupedTimings; /* 0x0026 */
  FB_BOOLEAN DrawConfigFile; /* 0x0027 */
  FB_UINT8 HudAlpha; /* 0x0028 */
  FB_BOOLEAN HudCompact; /* 0x0029 */
  char pad_002A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PerfHudSettings) == 48);

}
