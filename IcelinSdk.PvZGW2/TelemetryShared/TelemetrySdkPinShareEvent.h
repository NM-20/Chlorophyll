#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 00000001428751B0
   RuntimeId:        2CCD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F75
   VfTable:          000000014238CAC8
   Address (Base):   0000000143103810
*/
#pragma pack(push, 8)
class TelemetrySdkPinShareEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING share; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinShareEvent) == 24);

}
