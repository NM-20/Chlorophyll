#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863E68
   RuntimeId:        2183
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B93A0
   Default Value:    0000000142BFEAC8
*/
#pragma pack(push, 4)
struct PVZAntBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef Spikeweeded; /* 0x0000 */
  AntRef IsSuperJump; /* 0x0014 */
  AntRef Knockback; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x003C */
#pragma pack(pop)

static_assert(sizeof(PVZAntBinding) == 60);

}
