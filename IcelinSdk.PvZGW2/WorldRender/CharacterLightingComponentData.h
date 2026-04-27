#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/WorldRender/CharacterLightingTarget.h>
#include <IcelinSdk.PvZGW2/WorldRender/CharacterLightingMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855F88
   RuntimeId:        18AE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D6F
   VfTable:          00000001422C4EA8
   Address (Base):   00000001430E90A0
*/
#pragma pack(push, 16)
class CharacterLightingComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 TopLight; /* 0x0080 */
  Vec3 BottomLight; /* 0x0090 */
  Realm Realm; /* 0x00A0 */
  CharacterLightingTarget ApplyCharacterLightingTo; /* 0x00A4 */
  FB_FLOAT32 CameraUpRotation; /* 0x00A8 */
  CharacterLightingMode CharacterLightingMode; /* 0x00AC */
  FB_FLOAT32 BlendFactor; /* 0x00B0 */
  FB_FLOAT32 TopLightDirX; /* 0x00B4 */
  FB_FLOAT32 TopLightDirY; /* 0x00B8 */
  FB_FLOAT32 StartFadeDistance; /* 0x00BC */
  FB_FLOAT32 EndFadeDistance; /* 0x00C0 */
  FB_BOOLEAN CharacterLightEnable; /* 0x00C4 */
  FB_BOOLEAN FirstPersonEnable; /* 0x00C5 */
  FB_BOOLEAN LockToCameraDirection; /* 0x00C6 */
  char pad_00C7[0x0009];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */
#pragma pack(pop)

static_assert(sizeof(CharacterLightingComponentData) == 208);

}
