#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863F28
   RuntimeId:        218F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9380
   Default Value:    0000000142BFEB08
*/
#pragma pack(push, 4)
struct CharacterEntityRenderAnimationBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef Hide; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(CharacterEntityRenderAnimationBinding) == 20);

}
