#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875210
   RuntimeId:        2CD3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F84
   VfTable:          000000014238C9E8
   Address (Base):   00000001431036F0
*/
#pragma pack(push, 8)
class TelemetrySdkPinInventoryEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING inventory; /* 0x0010 */
  FB_CSTRING playerid; /* 0x0018 */
  FB_CSTRING assets; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinInventoryEvent) == 40);

}
