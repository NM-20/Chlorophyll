#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIDisplayStatType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428700D8
   RuntimeId:        2965
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1B08
   Default Value:    00000001428700F0
*/
#pragma pack(push, 8)
struct PVZUIDisplayStat
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Label; /* 0x0000 */
  FB_CSTRING Format; /* 0x0008 */
  PVZUIDisplayStatType StatType; /* 0x0010 */
  FB_FLOAT32 StatMultiplier; /* 0x0014 */
  FB_CSTRING StatName; /* 0x0018 */
  FB_UINT32 StatIndex; /* 0x0020 */
  FB_FLOAT32 DivideByStatMultiplier; /* 0x0024 */
  FB_CSTRING DivideByStatName; /* 0x0028 */
  FB_UINT32 DivideByStatIndex; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZUIDisplayStat) == 56);

}
