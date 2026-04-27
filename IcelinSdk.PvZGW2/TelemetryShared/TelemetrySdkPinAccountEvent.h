#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875250
   RuntimeId:        2CD7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F7C
   VfTable:          000000014238C9C8
   Address (Base):   0000000143103630
*/
#pragma pack(push, 8)
class TelemetrySdkPinAccountEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING account; /* 0x0010 */
  FB_CSTRING type; /* 0x0018 */
  FB_CSTRING acntid; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinAccountEvent) == 40);

}
