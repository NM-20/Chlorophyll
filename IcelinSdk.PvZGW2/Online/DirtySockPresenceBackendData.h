#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceBackendData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858B30
   RuntimeId:        1A7B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06A8
   VfTable:          00000001422D5780
   Address (Base):   00000001430E89E0
*/
#pragma pack(push, 8)
class DirtySockPresenceBackendData : public PresenceBackendData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(DirtySockPresenceBackendData) == 24);

}
