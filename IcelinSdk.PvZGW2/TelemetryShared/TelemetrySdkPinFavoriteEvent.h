#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875090
   RuntimeId:        2CBB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F8C
   VfTable:          000000014238CAA8
   Address (Base):   0000000143103B70
*/
#pragma pack(push, 8)
class TelemetrySdkPinFavoriteEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING favorite; /* 0x0010 */
  FB_CSTRING type1; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinFavoriteEvent) == 32);

}
