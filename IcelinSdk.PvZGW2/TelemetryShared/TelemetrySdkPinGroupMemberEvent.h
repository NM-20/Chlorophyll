#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875370
   RuntimeId:        2CE9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F80
   VfTable:          000000014238C948
   Address (Base):   00000001431032D0
*/
#pragma pack(push, 8)
class TelemetrySdkPinGroupMemberEvent : public TelemetrySDKPinEvent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING grp_member; /* 0x0010 */
  FB_CSTRING rqst_type; /* 0x0018 */
  FB_CSTRING grpid; /* 0x0020 */
  FB_CSTRING action; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySdkPinGroupMemberEvent) == 48);

}
