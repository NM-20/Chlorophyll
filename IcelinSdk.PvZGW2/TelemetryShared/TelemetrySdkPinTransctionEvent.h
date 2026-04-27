#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875230
   RuntimeId:        2CD5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F74
   VfTable:          000000014238C9A8
   Address (Base):   0000000143103690
*/
#pragma pack(push, 8)
class TelemetrySdkPinTransctionEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING transaction; /* 0x0010 */
  FB_CSTRING code; /* 0x0018 */
  FB_CSTRING type; /* 0x0020 */
  FB_CSTRING status; /* 0x0028 */
  FB_CSTRING party1id; /* 0x0030 */
  FB_CSTRING party2id; /* 0x0038 */
  FB_CSTRING asset_out; /* 0x0040 */
  FB_CSTRING asset_in; /* 0x0048 */
  FB_CSTRING bal1; /* 0x0050 */
  FB_CSTRING bal2; /* 0x0058 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinTransctionEvent) == 96);

}
