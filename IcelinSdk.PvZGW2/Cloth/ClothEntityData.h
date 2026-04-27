#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ComponentEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838DD0
   RuntimeId:        0638
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B33
   VfTable:          00000001421FC6C8
   Address (Base):   00000001430FE5F0
*/
#pragma pack(push, 16)
class ClothEntityData : public ComponentEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MeshAsset) Mesh; /* 0x0070 */
  FB_HANDLE(class ClothAsset) Cloth; /* 0x0078 */
  FB_FLOAT32 WindScale; /* 0x0080 */
  FB_BOOLEAN CharacterLightingEnable; /* 0x0084 */
  FB_BOOLEAN Enabled; /* 0x0085 */
  FB_BOOLEAN WrapOnGPU; /* 0x0086 */
  char pad_0087[0x0009];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(ClothEntityData) == 144);

}
