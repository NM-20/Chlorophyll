#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865588
   RuntimeId:        22CF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4648
   Default Value:    00000001428655A0
*/
#pragma pack(push, 8)
struct GlobalEffectsMap
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING NameKey; /* 0x0000 */
  FB_HANDLE(class EffectBlueprint) Effect; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(GlobalEffectsMap) == 16);

}
