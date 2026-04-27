#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/GameShared/InputSuppressionData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E4A8
   RuntimeId:        11EB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAA80
   Default Value:    000000014284E4C0
*/
#pragma pack(push, 16)
struct RegularCameraViewData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 MeshOffset; /* 0x0000 */
  InputSuppressionData InputSuppression; /* 0x0010 */
  FB_FLOAT32 FieldOfView; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class RigidMeshAsset) Mesh; /* 0x0020 */
  FB_HANDLE(class ObjectBlueprint) MaskMeshBlueprint; /* 0x0028 */
  FB_FLOAT32 ScreenExposureAreaScale; /* 0x0030 */
  FB_BOOLEAN FLIREnabled; /* 0x0034 */
  FB_BOOLEAN AllowFieldOfViewScaling; /* 0x0035 */
  FB_BOOLEAN LockMeshToRenderView; /* 0x0036 */
  char pad_0037[0x0009];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(RegularCameraViewData) == 64);

}
