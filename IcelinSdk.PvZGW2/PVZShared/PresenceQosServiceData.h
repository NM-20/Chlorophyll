#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FDA8
   RuntimeId:        293C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06DA
   VfTable:          000000014236DCF0
   Address (Base):   00000001430D8AB0
*/
#pragma pack(push, 8)
class PresenceQosServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PresenceQosServiceData) == 24);

}
