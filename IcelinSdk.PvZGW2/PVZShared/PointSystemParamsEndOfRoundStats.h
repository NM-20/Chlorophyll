#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428624C0
   RuntimeId:        2058
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B96E0
   Default Value:    00000001428624D8
*/
#pragma pack(push, 8)
struct PointSystemParamsEndOfRoundStats
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(struct PointSystemParamsStat) Stats; /* 0x0000 */
  FB_STDARRAY(struct PointSystemParamsBoast) Boasts; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PointSystemParamsEndOfRoundStats) == 16);

}
