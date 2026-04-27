#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/BlueprintBundleReference.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869070
   RuntimeId:        2459
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3808
   Default Value:    0000000142869090
*/
#pragma pack(push, 8)
struct UnlockToBlueprintBundle
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_GUID UnlockAssetGuid; /* 0x0000 */
  BlueprintBundleReference BlueprintBundleReference; /* 0x0010 */
  FB_BOOLEAN IsFirstPersonOnly; /* 0x0048 */
  char pad_0049[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(UnlockToBlueprintBundle) == 80);

}
