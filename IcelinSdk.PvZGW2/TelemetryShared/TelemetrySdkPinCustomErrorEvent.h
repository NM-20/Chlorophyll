#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 00000001428752D0
   RuntimeId:        2CDF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F8A
   VfTable:          000000014238CA18
   Address (Base):   00000001431034B0
*/
#pragma pack(push, 8)
class TelemetrySdkPinCustomErrorEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING custom_error; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinCustomErrorEvent) == 24);

}
