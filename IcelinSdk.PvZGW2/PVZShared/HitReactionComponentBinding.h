#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D538
   RuntimeId:        27E1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8780
   Default Value:    0000000142BFECE0
*/
#pragma pack(push, 4)
struct HitReactionComponentBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef Hit; /* 0x0000 */
  AntRef HitReactionWeight; /* 0x0014 */
  AntRef HitByAIPlayer; /* 0x0028 */
  AntRef AllowKillFromAnimation; /* 0x003C */
  AntRef Direction; /* 0x0050 */
  AntRef FiringDistance; /* 0x0064 */
  AntRef BoneType; /* 0x0078 */
  AntRef ImpactType; /* 0x008C */
  AntRef Immortal; /* 0x00A0 */
  AntRef RandomAnimationIndex; /* 0x00B4 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C8 */
#pragma pack(pop)

static_assert(sizeof(HitReactionComponentBinding) == 200);

}
