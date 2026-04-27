#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceBackendData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858B10
   RuntimeId:        1A79
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06AD
   VfTable:          00000001422D57C8
   Address (Base):   00000001430E8A40
*/
#pragma pack(push, 8)
class BlazePresenceBackendData : public PresenceBackendData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING DefaultRoleName; /* 0x0018 */
  FB_REFARRAY(class MatchmakingSession) MatchmakingSessions; /* 0x0020 */
  FB_BOOLEAN UseDemanglerService; /* 0x0028 */
  FB_BOOLEAN UseDirtySockVoip; /* 0x0029 */
  char pad_002A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(BlazePresenceBackendData) == 48);

}
