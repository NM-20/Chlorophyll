#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceBackendData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858B50
   RuntimeId:        1A7D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06A9
   VfTable:          00000001422D5770
   Address (Base):   000000014310CB70
*/
#pragma pack(push, 8)
class LanPresenceBackendData : public PresenceBackendData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(LanPresenceBackendData) == 24);

}
