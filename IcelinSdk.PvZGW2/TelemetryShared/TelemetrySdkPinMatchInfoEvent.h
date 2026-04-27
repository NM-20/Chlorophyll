#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/RawJsonString.h>

namespace fb
{

/* TypeInfo (Array): 00000001428751F0
   RuntimeId:        2CD1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F7B
   VfTable:          000000014238C9F8
   Address (Base):   0000000143103750
*/
#pragma pack(push, 8)
class TelemetrySdkPinMatchInfoEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING mp_match_info; /* 0x0010 */
  FB_CSTRING mode; /* 0x0018 */
  FB_CSTRING mid; /* 0x0020 */
  FB_CSTRING goid; /* 0x0028 */
  FB_CSTRING status; /* 0x0030 */
  FB_CSTRING phase; /* 0x0038 */
  RawJsonString teams_stats; /* 0x0040 */
  RawJsonString player_stats; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinMatchInfoEvent) == 80);

}
