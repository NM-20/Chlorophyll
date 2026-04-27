#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/AntAnimatableComponentMeshRenderType.h>
#include <IcelinSdk.PvZGW2/GameShared/AntAnimatableComponentMeshRenderContext.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F6C8
   RuntimeId:        12E5
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8CC8
   Default Value:    000000014284F6E0
*/
#pragma pack(push, 8)
struct AntAnimatableComponentMeshData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntAnimatableComponentMeshRenderType MeshRenderType; /* 0x0000 */
  AntAnimatableComponentMeshRenderContext MeshRenderContext; /* 0x0004 */
  FB_HANDLE(class MeshAsset) Mesh; /* 0x0008 */
  FB_FLOAT32 CameraRelativeScaleX; /* 0x0010 */
  FB_FLOAT32 CameraRelativeScaleY; /* 0x0014 */
  FB_FLOAT32 CameraRelativeScaleZ; /* 0x0018 */
  FB_FLOAT32 CameraRelativeOffsetX; /* 0x001C */
  FB_FLOAT32 CameraRelativeOffsetY; /* 0x0020 */
  FB_FLOAT32 CameraRelativeOffsetZ; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(AntAnimatableComponentMeshData) == 40);

}
