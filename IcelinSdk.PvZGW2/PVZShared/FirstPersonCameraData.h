#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D6A8
   RuntimeId:        280A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          088C
   VfTable:          000000014236FB28
   Address (Base):   0000000143105A30
*/
#pragma pack(push, 16)
class FirstPersonCameraData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class WeaponLagSpringEffectData) WeaponSpringEffect; /* 0x0010 */
  FB_HANDLE(class WeaponLagSpringEffectData) CameraSpringEffect; /* 0x0018 */
  Vec3 Offset; /* 0x0020 */
  Vec3 WeaponBaseOffset; /* 0x0030 */
  Vec3 WeaponLagRotationOffset; /* 0x0040 */
  Vec3 Rotation; /* 0x0050 */
  FB_FLOAT32 MoveStrafeModifier; /* 0x0060 */
  FB_FLOAT32 MoveForwardModifier; /* 0x0064 */
  FB_FLOAT32 RotateYawModifier; /* 0x0068 */
  FB_FLOAT32 RotatePitchModifier; /* 0x006C */
  FB_FLOAT32 RotateRollModifier; /* 0x0070 */
  FB_FLOAT32 ZoomMoveStrafeModifier; /* 0x0074 */
  FB_FLOAT32 ZoomMoveForwardModifier; /* 0x0078 */
  FB_FLOAT32 ZoomRotateYawModifier; /* 0x007C */
  FB_FLOAT32 ZoomRotatePitchModifier; /* 0x0080 */
  FB_FLOAT32 ZoomRotateRollModifier; /* 0x0084 */
  FB_FLOAT32 ReleaseModifier; /* 0x0088 */
  FB_FLOAT32 ReleaseModifierPitch; /* 0x008C */
  FB_FLOAT32 ReleaseModifierYaw; /* 0x0090 */
  FB_FLOAT32 ReleaseModifierRoll; /* 0x0094 */
  FB_FLOAT32 OffsetReleaseModifier; /* 0x0098 */
  FB_FLOAT32 ZoomReleaseModifierPitch; /* 0x009C */
  FB_FLOAT32 ZoomReleaseModifierYaw; /* 0x00A0 */
  FB_FLOAT32 ZoomReleaseModifierRoll; /* 0x00A4 */
  FB_FLOAT32 ZoomOffsetReleaseModifier; /* 0x00A8 */
  FB_FLOAT32 RotationAdditionToOffset; /* 0x00AC */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(FirstPersonCameraData) == 176);

}
