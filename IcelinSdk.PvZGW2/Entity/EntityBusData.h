#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataBusData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A548
   RuntimeId:        07CF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          078A
   VfTable:          000000014220C4A0
   Address (Base):   00000001430F1080
*/
#pragma pack(push, 8)
class EntityBusData : public DataBusData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct EventConnection) EventConnections; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(EntityBusData) == 64);

}
