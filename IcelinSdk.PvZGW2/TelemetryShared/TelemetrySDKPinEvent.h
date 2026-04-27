#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetryLogEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874FB0
   RuntimeId:        2CAD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F72
   VfTable:          000000014238CC00
   Address (Base):   00000001430B54C0
*/
#pragma pack(push, 8)
class TelemetrySDKPinEvent : public TelemetryLogEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySDKPinEvent) == 16);

}
