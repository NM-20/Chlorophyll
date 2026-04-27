#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterStateData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851760
   RuntimeId:        149A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0871
   VfTable:          000000014227F3C0
   Address (Base):   00000001430FBD70
*/
#pragma pack(push, 16)
class FlyingStateData : public CharacterStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ForwardForce; /* 0x0018 */
  char pad_001C[0x0004];
  Vec4 BleedOffCurve; /* 0x0020 */
  FB_FLOAT32 BleedOffTime; /* 0x0030 */
  FB_FLOAT32 TerminalVelocity; /* 0x0034 */
  FB_FLOAT32 MaxVelocity; /* 0x0038 */
  FB_FLOAT32 MaxLandingVelocity; /* 0x003C */
  FB_FLOAT32 GravityScale; /* 0x0040 */
  FB_FLOAT32 PitchControlMultiplier; /* 0x0044 */
  char pad_0048[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(FlyingStateData) == 80);

}
