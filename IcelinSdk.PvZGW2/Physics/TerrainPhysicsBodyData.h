#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsBodyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851C30
   RuntimeId:        14E6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09B8
   VfTable:          000000014227EE28
   Address (Base):   00000001430EAFC0
*/
#pragma pack(push, 8)
class TerrainPhysicsBodyData : public PhysicsBodyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN UseSDFCollision; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(TerrainPhysicsBodyData) == 56);

}
