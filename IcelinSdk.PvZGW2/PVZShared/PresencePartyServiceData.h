#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FD68
   RuntimeId:        2938
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06E9
   VfTable:          000000014236DF60
   Address (Base):   0000000143105370
*/
#pragma pack(push, 8)
class PresencePartyServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PresencePartyServiceData) == 24);

}
