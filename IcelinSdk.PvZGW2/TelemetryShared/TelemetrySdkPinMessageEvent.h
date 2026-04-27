#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875130
   RuntimeId:        2CC5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F91
   VfTable:          000000014238CB08
   Address (Base):   0000000143103990
*/
#pragma pack(push, 8)
class TelemetrySdkPinMessageEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING messaging; /* 0x0010 */
  FB_CSTRING type; /* 0x0018 */
  FB_CSTRING msgid; /* 0x0020 */
  FB_CSTRING status; /* 0x0028 */
  FB_CSTRING option; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinMessageEvent) == 56);

}
