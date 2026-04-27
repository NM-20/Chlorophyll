#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/QualityLevel.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852DB0
   RuntimeId:        1602
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FC2
   VfTable:          00000001422A16D8
   Address (Base):   00000001430B73B0
*/
#pragma pack(push, 8)
class MeshSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING OverrideShadersShaderName; /* 0x0010 */
  FB_CSTRING OverrideShadersMeshName; /* 0x0018 */
  FB_INT32 ForceLod; /* 0x0020 */
  FB_FLOAT32 GlobalLodScale; /* 0x0024 */
  FB_FLOAT32 ShadowDistanceScale; /* 0x0028 */
  FB_FLOAT32 TessellationMaxFactor; /* 0x002C */
  FB_FLOAT32 TessellationForceTessellationFactor; /* 0x0030 */
  FB_FLOAT32 TessellationMaxDistance; /* 0x0034 */
  FB_FLOAT32 TessellationMaxDistanceFade; /* 0x0038 */
  FB_FLOAT32 TessellationMaxDistanceScale; /* 0x003C */
  FB_FLOAT32 TessellationMaxDistanceCullScale; /* 0x0040 */
  QualityLevel CastShadowQualityLevel; /* 0x0044 */
  QualityLevel CastPlanarReflectionQualityLevel; /* 0x0048 */
  QualityLevel CastDynamicReflectionQualityLevel; /* 0x004C */
  QualityLevel CastStaticReflectionQualityLevel; /* 0x0050 */
  FB_BOOLEAN LoadingEnabled; /* 0x0054 */
  FB_BOOLEAN ForceLowestLodInPlanarReflectionsEnable; /* 0x0055 */
  FB_BOOLEAN TessellationEnable; /* 0x0056 */
  FB_BOOLEAN TessellationBackFaceCullingEnable; /* 0x0057 */
  FB_BOOLEAN TessellationScreenSpaceAdativeEnable; /* 0x0058 */
  FB_BOOLEAN PlanarReflectionTessellationEnable; /* 0x0059 */
  FB_BOOLEAN DynamicEnvmapTessellationEnable; /* 0x005A */
  char pad_005B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(MeshSettings) == 96);

}
