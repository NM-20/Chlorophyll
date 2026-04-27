#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428580E8
   RuntimeId:        19D4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06E3
   VfTable:          00000001422D5068
   Address (Base):   00000001430FA630
*/
#pragma pack(push, 8)
class PresenceGamegroupServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 MaxParticipants; /* 0x0018 */
  FB_BOOLEAN JoinGameSessionAfterGamegroup; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PresenceGamegroupServiceData) == 32);

}
