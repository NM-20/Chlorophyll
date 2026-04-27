#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428554E8
   RuntimeId:        181A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9F00
   Default Value:    0000000142855500
*/
#pragma pack(push, 8)
struct VegetationEffectSlot
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class EffectBlueprint) Effect; /* 0x0000 */
  FB_FLOAT32 StrengthMin; /* 0x0008 */
  FB_FLOAT32 StrengthMax; /* 0x000C */
  FB_FLOAT32 SizeMin; /* 0x0010 */
  FB_FLOAT32 SizeMax; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(VegetationEffectSlot) == 24);

}
