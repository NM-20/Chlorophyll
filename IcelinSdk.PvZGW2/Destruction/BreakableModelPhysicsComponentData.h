#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/GamePhysicsComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839110
   RuntimeId:        0668
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CF6
   VfTable:          00000001421FDEB0
   Address (Base):   0000000143115FF0
*/
#pragma pack(push, 16)
class BreakableModelPhysicsComponentData : public GamePhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class PhysicsBodyData) BreakableBodies; /* 0x00A0 */
  char pad_00A8[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(BreakableModelPhysicsComponentData) == 176);

}
