#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Render/EnlightenType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852C00
   RuntimeId:        15E8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0622
   VfTable:          00000001422A17D0
   Address (Base):   00000001430BC800
*/
#pragma pack(push, 8)
class MeshAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MeshLodGroup) LodGroup; /* 0x0018 */
  FB_RESOURCEREF MeshSetResource; /* 0x0020 */
  FB_RESOURCEREF OccluderMeshResource; /* 0x0028 */
  FB_FLOAT32 LodScale; /* 0x0030 */
  FB_FLOAT32 CullScale; /* 0x0034 */
  FB_FLOAT32 CoverageValue; /* 0x0038 */
  EnlightenType EnlightenType; /* 0x003C */
  FB_INT32 EnlightenMeshLod; /* 0x0040 */
  FB_FLOAT32 AutoLightmapUVsMaxDistance; /* 0x0044 */
  FB_FLOAT32 AutoLightmapUVsExpansionFactor; /* 0x0048 */
  FB_FLOAT32 AutoLightmapUVsMaxNormalDeviation; /* 0x004C */
  FB_HANDLE(class ProceduralAnimationTypeSimple) ProceduralAnimation; /* 0x0050 */
  FB_REFARRAY(class MeshMaterial) Materials; /* 0x0058 */
  FB_UINT32 NameHash; /* 0x0060 */
  FB_BOOLEAN CanReceiveDecals; /* 0x0064 */
  FB_BOOLEAN CanReceiveMultiProjectDecals; /* 0x0065 */
  FB_BOOLEAN StreamingEnable; /* 0x0066 */
  FB_BOOLEAN OccluderMeshEnable; /* 0x0067 */
  FB_BOOLEAN OccluderHighPriority; /* 0x0068 */
  FB_BOOLEAN OccluderIsConservative; /* 0x0069 */
  FB_BOOLEAN DestructionMaterialEnable; /* 0x006A */
  FB_BOOLEAN LightmapUVsScaleCharts; /* 0x006B */
  FB_BOOLEAN AutoLightmapUVs; /* 0x006C */
  char pad_006D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(MeshAsset) == 112);

}
