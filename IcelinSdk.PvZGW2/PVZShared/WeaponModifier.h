#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DCD8
   RuntimeId:        2858
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C2CA8
   Default Value:    000000014286DCF0
*/
#pragma pack(push, 8)
struct WeaponModifier
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];
  FB_INT32 Dummy2ToMakeFrostEDcompile; /* 0x0048 */
  char pad_004C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(WeaponModifier) == 80);

}
