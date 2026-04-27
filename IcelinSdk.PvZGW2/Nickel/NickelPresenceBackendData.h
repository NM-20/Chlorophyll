#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceBackendData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857D48
   RuntimeId:        19A2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06AB
   VfTable:          00000001422D3480
   Address (Base):   00000001430FA870
*/
#pragma pack(push, 8)
class NickelPresenceBackendData : public PresenceBackendData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(NickelPresenceBackendData) == 24);

}
