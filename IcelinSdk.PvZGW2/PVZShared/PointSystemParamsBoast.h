#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PointSystemParamsStat.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862480
   RuntimeId:        2056
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C5028
   Default Value:    0000000142862498
*/
#pragma pack(push, 8)
struct PointSystemParamsBoast
{
  typedef struct ValueTypeInfo TypeInfo_t;

  PointSystemParamsStat TriggerStat; /* 0x0000 */
  PointSystemParamsStat DisplayStat; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PointSystemParamsBoast) == 32);

}
