#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/VehicleAntMovementBinding.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862658
   RuntimeId:        2070
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D3A
   VfTable:          0000000142343D58
   Address (Base):   00000001430E8380
*/
#pragma pack(push, 16)
class VehicleAntAnimatableComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  VehicleAntMovementBinding MovementBinding; /* 0x0070 */
  char pad_00D4[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(VehicleAntAnimatableComponentData) == 224);

}
