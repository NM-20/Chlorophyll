#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CharacterCameraComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZCameraBinding.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864038
   RuntimeId:        219F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D36
   VfTable:          0000000142352C68
   Address (Base):   00000001430D02C0
*/
#pragma pack(push, 16)
class PVZCharacterCameraComponentData : public CharacterCameraComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ExplosionImpulseMultiplier; /* 0x0080 */
  FB_FLOAT32 ForceFieldOfView; /* 0x0084 */
  FB_FLOAT32 Roll; /* 0x0088 */
  PVZCameraBinding PVZBinding; /* 0x008C */
  FB_BOOLEAN AllowAnimatableAnchor; /* 0x00A0 */
  char pad_00A1[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterCameraComponentData) == 176);

}
