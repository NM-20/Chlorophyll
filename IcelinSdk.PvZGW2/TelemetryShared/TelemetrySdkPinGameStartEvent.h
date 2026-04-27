#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875050
   RuntimeId:        2CB7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F87
   VfTable:          000000014238CA98
   Address (Base):   0000000143103C30
*/
#pragma pack(push, 8)
class TelemetrySdkPinGameStartEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING game_start; /* 0x0010 */
  FB_CSTRING type; /* 0x0018 */
  FB_CSTRING mode; /* 0x0020 */
  FB_CSTRING status; /* 0x0028 */
  FB_INT32 ldur; /* 0x0030 */
  char pad_0034[0x0004];
  FB_CSTRING diff; /* 0x0038 */
  FB_CSTRING goid; /* 0x0040 */
  FB_CSTRING map; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinGameStartEvent) == 80);

}
