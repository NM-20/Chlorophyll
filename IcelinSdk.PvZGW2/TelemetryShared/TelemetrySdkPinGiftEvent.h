#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 00000001428753B0
   RuntimeId:        2CED
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F83
   VfTable:          000000014238C908
   Address (Base):   0000000143103210
*/
#pragma pack(push, 8)
class TelemetrySdkPinGiftEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING gift; /* 0x0010 */
  FB_CSTRING asset; /* 0x0018 */
  FB_CSTRING channel; /* 0x0020 */
  FB_CSTRING action; /* 0x0028 */
  FB_INT32 cnt; /* 0x0030 */
  char pad_0034[0x0004];
  FB_CSTRING rcpid; /* 0x0038 */
  FB_CSTRING rcptype; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinGiftEvent) == 72);

}
