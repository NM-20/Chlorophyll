#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/Physics/ClothStatesSetup.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850CC0
   RuntimeId:        1400
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          063D
   VfTable:          000000014227F920
   Address (Base):   000000014310F8D0
*/
#pragma pack(push, 8)
class ClothAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct ClothSectionMapping) MeshSectionMappings; /* 0x0018 */
  FB_RESOURCEREF HavokClothResource; /* 0x0020 */
  ClothStatesSetup StatesSetup; /* 0x0028 */
  FB_STDARRAY(FB_UINT32) DisplayBufferIndices; /* 0x0050 */
  FB_STDARRAY(FB_UINT32) BoneIndexLookup; /* 0x0058 */
  FB_STDARRAY(FB_UINT32) SimulatedAndParentBonesLookup; /* 0x0060 */
  FB_STDARRAY(FB_BOOLEAN) UsedBySimulation; /* 0x0068 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(ClothAsset) == 112);

}
