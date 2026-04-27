#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142874FF0
   RuntimeId:        2CB1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F92
   VfTable:          000000014238CBE0
   Address (Base):   0000000143103D50
*/
#pragma pack(push, 8)
class TelemetrySdkPinLogoutEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING logout; /* 0x0010 */
  FB_CSTRING type; /* 0x0018 */
  FB_CSTRING end_reason; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinLogoutEvent) == 40);

}
