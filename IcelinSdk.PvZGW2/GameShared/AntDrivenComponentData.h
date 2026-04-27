#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DD80
   RuntimeId:        1189
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DB0
   VfTable:          00000001422737A0
   Address (Base):   00000001430D6310
*/
#pragma pack(push, 16)
class AntDrivenComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN ResetControllerTreeOnTeleport; /* 0x0070 */
  FB_BOOLEAN ZeroTrajectoryVelocityOnTeleport; /* 0x0071 */
  char pad_0072[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(AntDrivenComponentData) == 128);

}
