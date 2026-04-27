#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875310
   RuntimeId:        2CE3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F81
   VfTable:          000000014238CA28
   Address (Base):   00000001431033F0
*/
#pragma pack(push, 8)
class TelemetrySdkPinRegistrationEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING registration; /* 0x0010 */
  FB_CSTRING source; /* 0x0018 */
  FB_CSTRING status; /* 0x0020 */
  FB_CSTRING domain; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinRegistrationEvent) == 48);

}
