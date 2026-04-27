#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 00000001428752F0
   RuntimeId:        2CE1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F7A
   VfTable:          000000014238CA08
   Address (Base):   0000000143103450
*/
#pragma pack(push, 8)
class TelemetrySdkPinSurveyEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING survey; /* 0x0010 */
  FB_CSTRING type; /* 0x0018 */
  FB_CSTRING status; /* 0x0020 */
  FB_CSTRING surv_id; /* 0x0028 */
  FB_INT32 wave_no; /* 0x0030 */
  char pad_0034[0x0004];
  FB_CSTRING lang; /* 0x0038 */
  FB_CSTRING json; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinSurveyEvent) == 72);

}
