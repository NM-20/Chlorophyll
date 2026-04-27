#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B770
   RuntimeId:        08EA
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CC9E8
   Default Value:    000000014283B788
*/
#pragma pack(push, 8)
struct SubSkeleton
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class SkeletonAsset) Skeleton; /* 0x0000 */
  FB_STDARRAY(FB_INT32) BoneMap; /* 0x0008 */
  FB_STDARRAY(struct LinearTransform) TransformMap; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(SubSkeleton) == 24);

}
