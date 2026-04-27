#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875290
   RuntimeId:        2CDB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F90
   VfTable:          000000014238CA38
   Address (Base):   0000000143103570
*/
#pragma pack(push, 8)
class TelemetrySdkPinErrorEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING error; /* 0x0010 */
  FB_CSTRING type; /* 0x0018 */
  FB_CSTRING errid; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinErrorEvent) == 40);

}
