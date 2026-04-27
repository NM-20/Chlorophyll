#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838E10
   RuntimeId:        063C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0787
   VfTable:          00000001421FC6A0
   Address (Base):   00000001431161D0
*/
#pragma pack(push, 8)
class ClothAssetInstance : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ClothObjectBlueprint) Cloth; /* 0x0018 */
  FB_BOOLEAN WorldCollision; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ClothAssetInstance) == 40);

}
