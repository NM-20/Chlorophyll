#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428544A8
   RuntimeId:        1732
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07D4
   VfTable:          00000001422AF2F8
   Address (Base):   000000014310DEF0
*/
#pragma pack(push, 8)
class TerrainLayerCombinationsData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TerrainLayerCombinationsData) == 24);

}
