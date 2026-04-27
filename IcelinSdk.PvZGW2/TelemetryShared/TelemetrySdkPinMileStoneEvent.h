#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 00000001428750D0
   RuntimeId:        2CBF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F79
   VfTable:          000000014238CA58
   Address (Base):   0000000143103AB0
*/
#pragma pack(push, 8)
class TelemetrySdkPinMileStoneEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING milestone; /* 0x0010 */
  FB_CSTRING type; /* 0x0018 */
  FB_CSTRING mstid; /* 0x0020 */
  FB_CSTRING moment; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinMileStoneEvent) == 48);

}
