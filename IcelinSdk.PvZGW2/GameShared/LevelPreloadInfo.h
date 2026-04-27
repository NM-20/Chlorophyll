#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849130
   RuntimeId:        0D54
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB640
   Default Value:    0000000142849148
*/
#pragma pack(push, 8)
struct LevelPreloadInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) PreloadedBlueprintBundles; /* 0x0000 */
  FB_STDARRAY(struct SubLevelPreloadInfo) SubLevelPreloadInfoMap; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(LevelPreloadInfo) == 16);

}
