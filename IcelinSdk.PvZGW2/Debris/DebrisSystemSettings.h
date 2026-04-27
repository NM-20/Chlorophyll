#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/QualityLevel.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838F68
   RuntimeId:        0652
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E41
   VfTable:          00000001421FD578
   Address (Base):   00000001430D0FE0
*/
#pragma pack(push, 8)
class DebrisSystemSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 TimeScale; /* 0x0010 */
  FB_UINT32 DrawStats; /* 0x0014 */
  FB_FLOAT32 MeshCullingDistance; /* 0x0018 */
  FB_UINT32 MeshBatchCountLimit; /* 0x001C */
  FB_UINT32 DebrisPoolSize; /* 0x0020 */
  FB_UINT32 MeshDrawCountLimit; /* 0x0024 */
  FB_FLOAT32 MeshStreamingPriorityMultiplier; /* 0x0028 */
  QualityLevel DebrisQualityLevel; /* 0x002C */
  FB_BOOLEAN Enable; /* 0x0030 */
  FB_BOOLEAN EnableJobs; /* 0x0031 */
  FB_BOOLEAN DrawEnable; /* 0x0032 */
  FB_BOOLEAN MeshHavokRenderingEnable; /* 0x0033 */
  FB_BOOLEAN MeshDrawTransforms; /* 0x0034 */
  FB_BOOLEAN MeshDrawBoundingBoxes; /* 0x0035 */
  FB_BOOLEAN MeshShadowEnable; /* 0x0036 */
  FB_BOOLEAN MeshViewCullingEnable; /* 0x0037 */
  FB_BOOLEAN MeshDrawCullStats; /* 0x0038 */
  char pad_0039[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(DebrisSystemSettings) == 64);

}
