#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/EventTelemetryStreamFormat.h>

namespace fb
{

/* TypeInfo (Array): 00000001428754B0
   RuntimeId:        2D00
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          067D
   VfTable:          000000014238C898
   Address (Base):   00000001430F4ED0
*/
#pragma pack(push, 8)
class FixedEventStreamFormat : public EventTelemetryStreamFormat
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TelemetryLogEvent) ReferenceEvent; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(FixedEventStreamFormat) == 32);

}
