#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B510
   RuntimeId:        262A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C31E8
   Default Value:    000000014286B540
*/
#pragma pack(push, 8)
struct WeaponModifierCore
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 DummyToMakeFrostEDcompile; /* 0x0000 */
  char pad_0004[0x0044];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(WeaponModifierCore) == 72);

}
