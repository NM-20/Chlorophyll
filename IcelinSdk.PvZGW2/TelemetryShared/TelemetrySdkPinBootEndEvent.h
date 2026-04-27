#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875030
   RuntimeId:        2CB5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F86
   VfTable:          000000014238CBF0
   Address (Base):   0000000143103C90
*/
#pragma pack(push, 8)
class TelemetrySdkPinBootEndEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT64 sdur; /* 0x0010 */
  FB_CSTRING boot_end; /* 0x0018 */
  FB_CSTRING end_reason; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinBootEndEvent) == 40);

}
