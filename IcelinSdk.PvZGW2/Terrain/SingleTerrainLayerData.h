#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Terrain/TerrainLayerData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854268
   RuntimeId:        170E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          110E
   VfTable:          00000001422AF368
   Address (Base):   000000014310E010
*/
#pragma pack(push, 8)
class SingleTerrainLayerData : public TerrainLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class TerrainMeshScatteringType) MeshScatteringTypes; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SingleTerrainLayerData) == 24);

}
