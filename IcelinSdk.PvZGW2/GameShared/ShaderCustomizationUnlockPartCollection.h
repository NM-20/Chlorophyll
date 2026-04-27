#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EA78
   RuntimeId:        123B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F0B
   VfTable:          0000000142272CD8
   Address (Base):   00000001430ECB20
*/
#pragma pack(push, 8)
class ShaderCustomizationUnlockPartCollection : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class ObjectBlueprint) MeshBlueprints; /* 0x0010 */
  FB_CSTRING ShaderNodeName; /* 0x0018 */
  FB_STDARRAY(struct CustomizedMeshMaterialsData) MeshMaterials; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ShaderCustomizationUnlockPartCollection) == 40);

}
