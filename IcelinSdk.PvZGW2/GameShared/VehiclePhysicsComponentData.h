#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ControllablePhysicsComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CE18
   RuntimeId:        10BC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CFF
   VfTable:          00000001422672B0
   Address (Base):   00000001430D6E50
*/
#pragma pack(push, 16)
class VehiclePhysicsComponentData : public ControllablePhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VehiclePhysicsActionData) VehiclePhysicsAction; /* 0x00A0 */
  FB_BOOLEAN AllowToRemainKeyframed; /* 0x00A8 */
  char pad_00A9[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(VehiclePhysicsComponentData) == 176);

}
