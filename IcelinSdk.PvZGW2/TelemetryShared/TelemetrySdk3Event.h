#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetryLogEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875410
   RuntimeId:        2CF6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F93
   VfTable:          000000014238C988
   Address (Base):   00000001430F4DB0
*/
#pragma pack(push, 8)
class TelemetrySdk3Event : public TelemetryLogEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 ModuleId; /* 0x0010 */
  FB_UINT32 GroupId; /* 0x0014 */
  FB_UINT32 StringId; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdk3Event) == 32);

}
