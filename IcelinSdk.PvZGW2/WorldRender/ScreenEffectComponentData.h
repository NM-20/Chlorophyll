#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/WorldRender/ScreenEffectFrameType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855F08
   RuntimeId:        18A6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D89
   VfTable:          00000001422C4F28
   Address (Base):   00000001430E9160
*/
#pragma pack(push, 16)
class ScreenEffectComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec4 ScreenEffectParams; /* 0x0080 */
  Realm Realm; /* 0x0090 */
  ScreenEffectFrameType FrameType; /* 0x0094 */
  FB_HANDLE(class SurfaceShaderBaseAsset) Shader; /* 0x0098 */
  FB_FLOAT32 FrameWidth; /* 0x00A0 */
  FB_FLOAT32 OuterFrameOpacity; /* 0x00A4 */
  FB_FLOAT32 InnerFrameOpacity; /* 0x00A8 */
  FB_FLOAT32 Angle; /* 0x00AC */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(ScreenEffectComponentData) == 176);

}
