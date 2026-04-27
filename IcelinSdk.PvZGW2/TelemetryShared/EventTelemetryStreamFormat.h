#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetryStreamFormat.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875490
   RuntimeId:        2CFE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          067B
   VfTable:          000000014238C878
   Address (Base):   00000001430E11E0
*/
#pragma pack(push, 8)
class EventTelemetryStreamFormat : public TelemetryStreamFormat
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EventTelemetryStreamFormat) == 24);

}
