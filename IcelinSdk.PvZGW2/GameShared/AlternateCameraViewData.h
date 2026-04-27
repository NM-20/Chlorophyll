#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/GameShared/HudData.h>
#include <IcelinSdk.PvZGW2/GameShared/InputSuppressionData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E6D8
   RuntimeId:        1204
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1107
   VfTable:          0000000142273050
   Address (Base):   00000001431114F0
*/
#pragma pack(push, 16)
class AlternateCameraViewData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 FieldOfView; /* 0x0010 */
  FB_FLOAT32 FovTransitionTime; /* 0x0014 */
  char pad_0018[0x0008];
  Vec3 MeshOffset; /* 0x0020 */
  FB_FLOAT32 WorldSpaceLockEfficiency; /* 0x0030 */
  char pad_0034[0x0004];
  FB_HANDLE(class RigidMeshAsset) Mesh; /* 0x0038 */
  FB_HANDLE(class ObjectBlueprint) MaskMeshBlueprint; /* 0x0040 */
  HudData Hud; /* 0x0048 */
  FB_FLOAT32 FadeInDuration; /* 0x00B8 */
  FB_FLOAT32 FadeOutDuration; /* 0x00BC */
  FB_FLOAT32 BlackDuration; /* 0x00C0 */
  char pad_00C4[0x0004];
  InputSuppressionData InputSuppression; /* 0x00C8 */
  FB_FLOAT32 ScreenExposureAreaScale; /* 0x00D0 */
  FB_BOOLEAN AllowFieldOfViewScaling; /* 0x00D4 */
  FB_BOOLEAN LockMeshToRenderView; /* 0x00D5 */
  FB_BOOLEAN FadeToBlack; /* 0x00D6 */
  FB_BOOLEAN ToggleViewChange; /* 0x00D7 */
  FB_BOOLEAN UseProfileOptionForToggleViewChange; /* 0x00D8 */
  FB_BOOLEAN FLIREnabled; /* 0x00D9 */
  char pad_00DA[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(AlternateCameraViewData) == 224);

}
