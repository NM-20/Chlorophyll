#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850C38
   RuntimeId:        13FA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C89A8
   Default Value:    0000000142BA4D08
*/
#pragma pack(push, 4)
struct ClothStateSetupTransitionLookup
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 FirstTransitionableLodIndex; /* 0x0000 */
  FB_UINT32 TransitionableLodCount; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(ClothStateSetupTransitionLookup) == 8);

}
