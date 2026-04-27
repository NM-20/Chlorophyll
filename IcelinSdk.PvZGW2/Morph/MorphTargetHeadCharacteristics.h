#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/BlueprintBundleReference.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FD78
   RuntimeId:        134B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8B88
   Default Value:    000000014284FD90
*/
#pragma pack(push, 8)
struct MorphTargetHeadCharacteristics
{
  typedef struct ValueTypeInfo TypeInfo_t;

  BlueprintBundleReference HeadBundle; /* 0x0000 */
  FB_STDARRAY(struct BlueprintBundleReference) HairMeshBundles; /* 0x0038 */
  FB_STDARRAY(struct BlueprintBundleReference) BeardMeshBundles; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(MorphTargetHeadCharacteristics) == 72);

}
