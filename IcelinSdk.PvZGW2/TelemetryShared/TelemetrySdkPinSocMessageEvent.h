#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875390
   RuntimeId:        2CEB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F82
   VfTable:          000000014238C918
   Address (Base):   0000000143103270
*/
#pragma pack(push, 8)
class TelemetrySdkPinSocMessageEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING soc_message; /* 0x0010 */
  FB_CSTRING type; /* 0x0018 */
  FB_CSTRING channel; /* 0x0020 */
  FB_CSTRING status; /* 0x0028 */
  FB_CSTRING rcpid; /* 0x0030 */
  FB_CSTRING rcptype; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinSocMessageEvent) == 64);

}
