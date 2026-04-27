#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875070
   RuntimeId:        2CB9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F8F
   VfTable:          000000014238CA88
   Address (Base):   0000000143103BD0
*/
#pragma pack(push, 8)
class TelemetrySdkPinGameEndEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT64 sdur; /* 0x0010 */
  FB_CSTRING game_end; /* 0x0018 */
  FB_CSTRING type; /* 0x0020 */
  FB_CSTRING mode; /* 0x0028 */
  FB_CSTRING end_reason; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinGameEndEvent) == 56);

}
