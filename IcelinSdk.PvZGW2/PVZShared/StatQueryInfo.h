#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatEvent.h>
#include <IcelinSdk.PvZGW2/PVZShared/CriteriaType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865340
   RuntimeId:        22AD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4668
   Default Value:    0000000142865358
*/
#pragma pack(push, 8)
struct StatQueryInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  StatEvent StatEvent; /* 0x0000 */
  char pad_0004[0x0004];
  FB_HANDLE(class StatsCategoryBaseData) ParamX; /* 0x0008 */
  FB_HANDLE(class StatsCategoryBaseData) ParamY; /* 0x0010 */
  CriteriaType CriteriaType; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING StatString; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(StatQueryInfo) == 40);

}
