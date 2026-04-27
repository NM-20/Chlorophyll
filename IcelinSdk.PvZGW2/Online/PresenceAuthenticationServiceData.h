#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858048
   RuntimeId:        19CA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06E2
   VfTable:          00000001422D5118
   Address (Base):   000000014310CF90
*/
#pragma pack(push, 8)
class PresenceAuthenticationServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PresenceAuthenticationServiceData) == 24);

}
