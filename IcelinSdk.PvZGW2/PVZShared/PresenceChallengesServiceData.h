#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BAC0
   RuntimeId:        267E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06D2
   VfTable:          000000014235A940
   Address (Base):   0000000143106450
*/
#pragma pack(push, 8)
class PresenceChallengesServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PresenceChallengesServiceData) == 24);

}
