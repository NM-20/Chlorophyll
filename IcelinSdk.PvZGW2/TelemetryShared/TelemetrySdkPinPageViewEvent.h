#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 00000001428750F0
   RuntimeId:        2CC1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F73
   VfTable:          000000014238CA78
   Address (Base):   0000000143103A50
*/
#pragma pack(push, 8)
class TelemetrySdkPinPageViewEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING page_view; /* 0x0010 */
  FB_CSTRING type; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinPageViewEvent) == 32);

}
