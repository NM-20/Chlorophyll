#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855C28
   RuntimeId:        1878
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B01
   VfTable:          00000001422BB7B0
   Address (Base):   00000001430E97C0
*/
#pragma pack(push, 16)
class OccluderMeshEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class RigidMeshAsset) Mesh; /* 0x0060 */
  char pad_0068[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(OccluderMeshEntityData) == 112);

}
