#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871628
   RuntimeId:        2A69
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C3B
   VfTable:          000000014236CA28
   Address (Base):   00000001430E1D80
*/
#pragma pack(push, 8)
class ClientRegionSelectEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING NewRegionString; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ClientRegionSelectEntityData) == 32);

}
