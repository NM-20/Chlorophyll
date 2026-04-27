#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetryRowData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428753F0
   RuntimeId:        2CF4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F71
   VfTable:          000000014238C998
   Address (Base):   00000001430E12A0
*/
#pragma pack(push, 8)
class TelemetryLogEvent : public TelemetryRowData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TelemetryLogEvent) == 16);

}
