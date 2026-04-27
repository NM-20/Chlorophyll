#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatEvent.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862450
   RuntimeId:        2054
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9700
   Default Value:    0000000142862468
*/
#pragma pack(push, 8)
struct PointSystemParamsStat
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING StatName; /* 0x0000 */
  StatEvent StatEvent; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PointSystemParamsStat) == 16);

}
