#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839EB8
   RuntimeId:        0726
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08BA
   VfTable:          00000001421FF458
   Address (Base):   0000000143115870
*/
#pragma pack(push, 8)
class UpdateMeshEmitterMaskData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MeshEmitterMaskAsset) MeshEmitterMask; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UpdateMeshEmitterMaskData) == 56);

}
