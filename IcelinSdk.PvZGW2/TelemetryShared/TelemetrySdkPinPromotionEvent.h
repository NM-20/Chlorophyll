#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875110
   RuntimeId:        2CC3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F78
   VfTable:          000000014238CAE8
   Address (Base):   00000001431039F0
*/
#pragma pack(push, 8)
class TelemetrySdkPinPromotionEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING promotion; /* 0x0010 */
  FB_CSTRING type; /* 0x0018 */
  FB_CSTRING status; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinPromotionEvent) == 40);

}
