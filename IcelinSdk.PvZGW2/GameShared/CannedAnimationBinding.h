#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EF48
   RuntimeId:        1277
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BA980
   Default Value:    0000000142BF5080
*/
#pragma pack(push, 4)
struct CannedAnimationBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef LevelIndex; /* 0x0000 */
  AntRef ScenarioIndex; /* 0x0014 */
  AntRef ActorIndex; /* 0x0028 */
  AntRef PartIndex; /* 0x003C */
  AntRef TriggerCannedAnimation; /* 0x0050 */
  AntRef ExitCannedAnimation; /* 0x0064 */
  AntRef ExternalTime; /* 0x0078 */
  AntRef BlendValue; /* 0x008C */
  AntRef AdvanceScenario; /* 0x00A0 */
  AntRef EnteredLoop; /* 0x00B4 */
  AntRef AlmostFinished; /* 0x00C8 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00DC */
#pragma pack(pop)

static_assert(sizeof(CannedAnimationBinding) == 220);

}
