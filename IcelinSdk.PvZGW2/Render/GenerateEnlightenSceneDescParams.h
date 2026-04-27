#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428528E0
   RuntimeId:        15B6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1283
   VfTable:          0000000142297790
   Address (Base):   000000014310E8B0
*/
#pragma pack(push, 8)
class GenerateEnlightenSceneDescParams : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_GUID) InstanceFilter; /* 0x0010 */
  FB_STDARRAY(FB_GUID) EnlightenAssetFilter; /* 0x0018 */
  FB_BOOLEAN ApproximateSystemInfluences; /* 0x0020 */
  FB_BOOLEAN DistributedBuild; /* 0x0021 */
  FB_BOOLEAN CacheEnable; /* 0x0022 */
  FB_BOOLEAN VerboseLogging; /* 0x0023 */
  FB_BOOLEAN SaveGeomericsDebugData; /* 0x0024 */
  FB_BOOLEAN PreVisualizationOnly; /* 0x0025 */
  FB_BOOLEAN GlobalSolutionEnable; /* 0x0026 */
  FB_BOOLEAN DisableTerrain; /* 0x0027 */
  FB_BOOLEAN DebugDataOnly; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(GenerateEnlightenSceneDescParams) == 48);

}
