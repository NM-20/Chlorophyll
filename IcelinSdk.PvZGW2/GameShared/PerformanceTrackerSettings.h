#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AD68
   RuntimeId:        0EF1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11C2
   VfTable:          0000000142262B20
   Address (Base):   00000001431139B0
*/
#pragma pack(push, 8)
class PerformanceTrackerSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Interval; /* 0x0020 */
  FB_BOOLEAN Enabled; /* 0x0024 */
  FB_BOOLEAN SupressPerformanceStatsOnIdle; /* 0x0025 */
  FB_BOOLEAN SupressPerformanceStatsUntilSpawned; /* 0x0026 */
  FB_BOOLEAN JuiceLogPerformance; /* 0x0027 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PerformanceTrackerSettings) == 40);

}
