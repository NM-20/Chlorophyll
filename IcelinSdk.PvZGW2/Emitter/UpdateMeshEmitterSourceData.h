#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839E98
   RuntimeId:        0724
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08C6
   VfTable:          00000001421FF478
   Address (Base):   00000001431158D0
*/
#pragma pack(push, 8)
class UpdateMeshEmitterSourceData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MeshEmitterAsset) MeshEmitter; /* 0x0030 */
  FB_BOOLEAN GeneratePosition; /* 0x0038 */
  FB_BOOLEAN GenerateNormal; /* 0x0039 */
  FB_BOOLEAN GenerateUVs; /* 0x003A */
  FB_BOOLEAN SendMeshUvsToShaderGraph; /* 0x003B */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UpdateMeshEmitterSourceData) == 64);

}
