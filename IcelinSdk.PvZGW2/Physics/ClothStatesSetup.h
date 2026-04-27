#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850C78
   RuntimeId:        13FE
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BA680
   Default Value:    0000000142850C90
*/
#pragma pack(push, 8)
struct ClothStatesSetup
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(FB_UINT32) States; /* 0x0000 */
  FB_STDARRAY(struct ClothStateSetupTransitionLookup) StatesTransitionLookups; /* 0x0008 */
  FB_STDARRAY(struct ClothStateSetupTransition) StatesTransitions; /* 0x0010 */
  FB_UINT32 EmptyState; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(FB_UINT32) FullSkinStates; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ClothStatesSetup) == 40);

}
