#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428543E8
   RuntimeId:        1726
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          070E
   VfTable:          00000001422AF338
   Address (Base):   000000014310DFB0
*/
#pragma pack(push, 8)
class TerrainData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class TerrainLayerData) TerrainLayers; /* 0x0018 */
  FB_RESOURCEREF TerrainStreamingTreeResource; /* 0x0020 */
  FB_RESOURCEREF VisualResource; /* 0x0028 */
  FB_RESOURCEREF TerrainLayerCombinationsResource; /* 0x0030 */
  FB_BOOLEAN DynamicMaskEnable; /* 0x0038 */
  char pad_0039[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(TerrainData) == 64);

}
