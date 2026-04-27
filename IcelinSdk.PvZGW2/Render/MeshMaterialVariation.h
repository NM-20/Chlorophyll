#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Render/SurfaceShaderInstanceDataStruct.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852CA0
   RuntimeId:        15F2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EE9
   VfTable:          00000001422A1768
   Address (Base):   000000014310E670
*/
#pragma pack(push, 8)
class MeshMaterialVariation : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  SurfaceShaderInstanceDataStruct Shader; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(MeshMaterialVariation) == 56);

}
