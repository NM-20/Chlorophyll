#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/BaseSkeletonAsset.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B750
   RuntimeId:        08E8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06FD
   VfTable:          000000014220AD80
   Address (Base):   00000001431152D0
*/
#pragma pack(push, 8)
class SkeletonAsset : public BaseSkeletonAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) BoneNames; /* 0x0018 */
  FB_STDARRAY(FB_UINT32) BoneNameHashes; /* 0x0020 */
  FB_STDARRAY(FB_INT32) Hierarchy; /* 0x0028 */
  FB_STDARRAY(struct LinearTransform) LocalPose; /* 0x0030 */
  FB_STDARRAY(struct LinearTransform) ModelPose; /* 0x0038 */
  FB_STDARRAY(FB_INT32) ServerSkeletonToSkeletonMap; /* 0x0040 */
  FB_STDARRAY(FB_INT32) SkeletonToServerSkeletonMap; /* 0x0048 */
  FB_STDARRAY(FB_INT32) ServerHierarchy; /* 0x0050 */
  FB_STDARRAY(FB_INT32) GameplayBonesToSkeleton; /* 0x0058 */
  FB_STDARRAY(FB_INT32) GameplayBonesToServerSkeleton; /* 0x0060 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(SkeletonAsset) == 104);

}
