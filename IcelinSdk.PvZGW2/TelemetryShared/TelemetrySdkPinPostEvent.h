#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875190
   RuntimeId:        2CCB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F88
   VfTable:          000000014238CAD8
   Address (Base):   0000000143103870
*/
#pragma pack(push, 8)
class TelemetrySdkPinPostEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING post; /* 0x0010 */
  FB_CSTRING post_type; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinPostEvent) == 32);

}
