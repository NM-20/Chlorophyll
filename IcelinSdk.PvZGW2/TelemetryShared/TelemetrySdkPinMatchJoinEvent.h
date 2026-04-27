#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 00000001428751D0
   RuntimeId:        2CCF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F8E
   VfTable:          000000014238C9D8
   Address (Base):   00000001431037B0
*/
#pragma pack(push, 8)
class TelemetrySdkPinMatchJoinEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT64 gid; /* 0x0010 */
  FB_CSTRING mp_match_join; /* 0x0018 */
  FB_CSTRING mode; /* 0x0020 */
  FB_CSTRING mid; /* 0x0028 */
  FB_CSTRING status; /* 0x0030 */
  FB_CSTRING phase; /* 0x0038 */
  FB_CSTRING friend_id; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinMatchJoinEvent) == 72);

}
