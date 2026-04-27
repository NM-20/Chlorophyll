#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875170
   RuntimeId:        2CC9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F7D
   VfTable:          000000014238CAB8
   Address (Base):   00000001431038D0
*/
#pragma pack(push, 8)
class TelemetrySdkPinLikeEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING like; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinLikeEvent) == 24);

}
