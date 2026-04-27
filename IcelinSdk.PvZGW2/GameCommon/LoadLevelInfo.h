#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/LevelSetup.h>

namespace fb
{

/* TypeInfo (Array): 00000001428425C0
   RuntimeId:        0B6F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CB5E8
   Default Value:    00000001428425E0
*/
#pragma pack(push, 8)
struct LoadLevelInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  LevelSetup Setup; /* 0x0000 */
  FB_STDARRAY(struct BlueprintBundlePreloadInfo) BlueprintBundlePreloads; /* 0x0050 */
  FB_UINT32 LevelSequenceNumber; /* 0x0058 */
  char pad_005C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(LoadLevelInfo) == 96);

}
