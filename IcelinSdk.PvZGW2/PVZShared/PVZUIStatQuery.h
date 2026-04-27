#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIStatFormatType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871000
   RuntimeId:        2A25
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1868
   Default Value:    0000000142871018
*/
#pragma pack(push, 8)
struct PVZUIStatQuery
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING StatName; /* 0x0000 */
  FB_CSTRING StatNameSid; /* 0x0008 */
  UIStatFormatType StatFormat; /* 0x0010 */
  char pad_0014[0x0004];
  FB_HANDLE(class CriteriaData) StatReference; /* 0x0018 */
  FB_HANDLE(class CriteriaData) StatGenerated; /* 0x0020 */
  FB_BOOLEAN OverrideParamX; /* 0x0028 */
  FB_BOOLEAN OverrideParamY; /* 0x0029 */
  char pad_002A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZUIStatQuery) == 48);

}
