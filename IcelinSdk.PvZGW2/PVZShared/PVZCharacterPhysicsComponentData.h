#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CharacterMasterPhysicsComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862E60
   RuntimeId:        20CE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CFE
   VfTable:          0000000142354008
   Address (Base):   00000001430D42D0
*/
#pragma pack(push, 16)
class PVZCharacterPhysicsComponentData : public CharacterMasterPhysicsComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 RadiusToPredictCollisionOnCharacters; /* 0x00A0 */
  char pad_00A4[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterPhysicsComponentData) == 176);

}
