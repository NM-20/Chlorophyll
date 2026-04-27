#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875010
   RuntimeId:        2CB3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F85
   VfTable:          000000014238CBD0
   Address (Base):   0000000143103CF0
*/
#pragma pack(push, 8)
class TelemetrySdkPinBootStartEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING boot_start; /* 0x0010 */
  FB_CSTRING status; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinBootStartEvent) == 32);

}
