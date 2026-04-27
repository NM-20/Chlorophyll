#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Terrain/RibbonData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428545D8
   RuntimeId:        1742
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0978
   VfTable:          00000001422AF150
   Address (Base):   000000014310DDD0
*/
#pragma pack(push, 8)
class RiverData : public RibbonData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(RiverData) == 72);

}
