#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 00000001428752B0
   RuntimeId:        2CDD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F8B
   VfTable:          000000014238CA48
   Address (Base):   0000000143103510
*/
#pragma pack(push, 8)
class TelemetrySdkPinConnectionEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING connection; /* 0x0010 */
  FB_CSTRING goid; /* 0x0018 */
  FB_CSTRING mode; /* 0x0020 */
  FB_FLOAT32 pkt_loss; /* 0x0028 */
  FB_FLOAT32 avg_lat; /* 0x002C */
  FB_FLOAT32 max_lat; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinConnectionEvent) == 56);

}
