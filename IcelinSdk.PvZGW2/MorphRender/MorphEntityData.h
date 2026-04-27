#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FF08
   RuntimeId:        135B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B52
   VfTable:          0000000142277FC8
   Address (Base):   000000014310FF90
*/
#pragma pack(push, 16)
class MorphEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class MorphStatic) MorphAsset; /* 0x0060 */
  FB_HANDLE(class MorphTargets) MorphTargetsAsset; /* 0x0068 */
  FB_STDARRAY(struct LinearTransform) ModelPose; /* 0x0070 */
  FB_STDARRAY(FB_INT32) SkeletalHierarchy; /* 0x0078 */
  FB_STDARRAY(FB_CSTRING) BoneNames; /* 0x0080 */
  FB_HANDLE(class Asset) ActorFaceFXAsset; /* 0x0088 */
  FB_REFARRAY(class Asset) FaceFXPlaylist; /* 0x0090 */
  char pad_0098[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(MorphEntityData) == 160);

}
