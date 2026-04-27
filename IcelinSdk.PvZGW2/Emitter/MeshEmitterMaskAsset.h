#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839F78
   RuntimeId:        0732
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07B1
   VfTable:          00000001421FF3D8
   Address (Base):   00000001430FE0B0
*/
#pragma pack(push, 8)
class MeshEmitterMaskAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_RESOURCEREF MeshEmitterMaskResource; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MeshEmitterMaskAsset) == 32);

}
