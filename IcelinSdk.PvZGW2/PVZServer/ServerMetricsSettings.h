#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428606C8
   RuntimeId:        1E78
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E4F
   VfTable:          00000001423203B0
   Address (Base):   00000001430D0500
*/
#pragma pack(push, 8)
class ServerMetricsSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ReportName; /* 0x0010 */
  FB_BOOLEAN MetricsEnabled; /* 0x0018 */
  FB_BOOLEAN DbxReportEnabled; /* 0x0019 */
  FB_BOOLEAN TickMetricsEnabled; /* 0x001A */
  FB_BOOLEAN PerformanceMetricsEnabled; /* 0x001B */
  FB_BOOLEAN JuiceMetricsEnabled; /* 0x001C */
  FB_BOOLEAN PerformanceProfileStateMetricsEnabled; /* 0x001D */
  char pad_001E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ServerMetricsSettings) == 32);

}
