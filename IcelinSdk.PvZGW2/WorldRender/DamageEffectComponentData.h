#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855F28
   RuntimeId:        18A8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D7D
   VfTable:          00000001422C4EE8
   Address (Base):   00000001430E9100
*/
#pragma pack(push, 16)
class DamageEffectComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec4 TopDamage; /* 0x0080 */
  Vec4 LeftDamage; /* 0x0090 */
  Vec4 BottomDamage; /* 0x00A0 */
  Vec4 RightDamage; /* 0x00B0 */
  Realm Realm; /* 0x00C0 */
  char pad_00C4[0x0004];
  FB_HANDLE(class SurfaceShaderBaseAsset) Shader; /* 0x00C8 */
  FB_FLOAT32 FrameWidth; /* 0x00D0 */
  FB_FLOAT32 OuterFrameOpacity; /* 0x00D4 */
  FB_FLOAT32 InnerFrameOpacity; /* 0x00D8 */
  FB_FLOAT32 FallofTime; /* 0x00DC */
  FB_FLOAT32 MinDamagePercentageThreshold; /* 0x00E0 */
  FB_FLOAT32 MaxOpacityDamagePercentage; /* 0x00E4 */
  FB_FLOAT32 StartCriticalEffectHealthThreshold; /* 0x00E8 */
  FB_FLOAT32 EndCriticalEffectHealthThreshold; /* 0x00EC */
  FB_BOOLEAN DebugDamage; /* 0x00F0 */
  char pad_00F1[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(DamageEffectComponentData) == 256);

}
