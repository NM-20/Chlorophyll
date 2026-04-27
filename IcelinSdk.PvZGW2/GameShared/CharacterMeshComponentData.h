#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E5F8
   RuntimeId:        11F9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DAF
   VfTable:          0000000142273158
   Address (Base):   00000001430EC4C0
*/
#pragma pack(push, 16)
class CharacterMeshComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MeshAsset) Mesh; /* 0x0070 */
  FB_BOOLEAN Visible; /* 0x0078 */
  char pad_0079[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(CharacterMeshComponentData) == 128);

}
