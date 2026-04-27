#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875150
   RuntimeId:        2CC7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F7F
   VfTable:          000000014238CAF8
   Address (Base):   0000000143103930
*/
#pragma pack(push, 8)
class TelemetrySdkPinFriendsEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING friends; /* 0x0010 */
  FB_CSTRING frid; /* 0x0018 */
  FB_CSTRING action; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinFriendsEvent) == 40);

}
