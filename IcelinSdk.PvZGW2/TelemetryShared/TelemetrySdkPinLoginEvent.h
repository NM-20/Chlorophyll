#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874FD0
   RuntimeId:        2CAF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F76
   VfTable:          000000014238CC48
   Address (Base):   0000000143103DB0
*/
#pragma pack(push, 8)
class TelemetrySdkPinLoginEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING login; /* 0x0010 */
  FB_CSTRING type; /* 0x0018 */
  FB_CSTRING status; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinLoginEvent) == 40);

}
