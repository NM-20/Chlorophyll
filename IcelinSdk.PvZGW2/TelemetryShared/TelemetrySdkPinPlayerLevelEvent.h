#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 00000001428750B0
   RuntimeId:        2CBD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F77
   VfTable:          000000014238CA68
   Address (Base):   0000000143103B10
*/
#pragma pack(push, 8)
class TelemetrySdkPinPlayerLevelEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING player_level; /* 0x0010 */
  FB_CSTRING type; /* 0x0018 */
  FB_CSTRING level; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinPlayerLevelEvent) == 40);

}
