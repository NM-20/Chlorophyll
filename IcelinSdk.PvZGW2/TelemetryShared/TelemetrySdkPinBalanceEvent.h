#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875270
   RuntimeId:        2CD9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F8D
   VfTable:          000000014238C9B8
   Address (Base):   00000001431035D0
*/
#pragma pack(push, 8)
class TelemetrySdkPinBalanceEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING balance; /* 0x0010 */
  FB_CSTRING bal; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinBalanceEvent) == 32);

}
