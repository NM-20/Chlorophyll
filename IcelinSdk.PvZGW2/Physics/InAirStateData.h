#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterStateData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851700
   RuntimeId:        1494
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0874
   VfTable:          000000014227F3F0
   Address (Base):   00000001430FBE90
*/
#pragma pack(push, 8)
class InAirStateData : public CharacterStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 FreeFallVelocity; /* 0x0018 */
  FB_INT32 MaxInAirJumps; /* 0x001C */
  FB_FLOAT32 DecreaseGravityWhenFallingAndHoldingJumpMultiplier; /* 0x0020 */
  FB_BOOLEAN DecreaseGravityWhenFallingAndHoldingJumpEnabled; /* 0x0024 */
  char pad_0025[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(InAirStateData) == 40);

}
