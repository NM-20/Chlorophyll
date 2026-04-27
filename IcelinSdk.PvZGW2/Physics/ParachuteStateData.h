#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/CharacterStateData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851800
   RuntimeId:        14A4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0877
   VfTable:          000000014227F348
   Address (Base):   000000014310F090
*/
#pragma pack(push, 8)
class ParachuteStateData : public CharacterStateData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DeployTime; /* 0x0018 */
  FB_FLOAT32 TerminalVelocity; /* 0x001C */
  FB_FLOAT32 ForwardDragCoefficient; /* 0x0020 */
  FB_FLOAT32 AngleOfAttack; /* 0x0024 */
  FB_FLOAT32 BankOffset; /* 0x0028 */
  FB_FLOAT32 ThrottleOffset; /* 0x002C */
  FB_FLOAT32 BrakeOffset; /* 0x0030 */
  FB_FLOAT32 MaxRollVelocity; /* 0x0034 */
  FB_FLOAT32 MaxPitchVelocity; /* 0x0038 */
  FB_FLOAT32 MaxYawVelocity; /* 0x003C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ParachuteStateData) == 64);

}
