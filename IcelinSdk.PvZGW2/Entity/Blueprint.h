#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityBusData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A588
   RuntimeId:        07D3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          078B
   VfTable:          000000014220C460
   Address (Base):   00000001430B6F10
*/
#pragma pack(push, 8)
class Blueprint : public EntityBusData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(Blueprint) == 64);

}
