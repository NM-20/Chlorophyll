#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Render/BlurFilter.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852F60
   RuntimeId:        161A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D71
   VfTable:          00000001422A1600
   Address (Base):   00000001430EAB40
*/
#pragma pack(push, 16)
class DofComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0080 */
  FB_FLOAT32 FocusDistance; /* 0x0084 */
  FB_FLOAT32 BlurFactor; /* 0x0088 */
  FB_FLOAT32 BlurAdd; /* 0x008C */
  BlurFilter SimpleDofBlurFilter; /* 0x0090 */
  FB_FLOAT32 SimpleDofMaxBlur; /* 0x0094 */
  FB_FLOAT32 SimpleDofNearStart; /* 0x0098 */
  FB_FLOAT32 SimpleDofNearEnd; /* 0x009C */
  FB_FLOAT32 SimpleDofFarStart; /* 0x00A0 */
  FB_FLOAT32 SimpleDofFarEnd; /* 0x00A4 */
  FB_FLOAT32 HipToIronsightsFade; /* 0x00A8 */
  FB_FLOAT32 IronsightsDofStartFade; /* 0x00AC */
  FB_FLOAT32 IronsightsFocalDistance; /* 0x00B0 */
  FB_FLOAT32 IronsightsDofCircleDistance; /* 0x00B4 */
  FB_FLOAT32 SpriteDofNearStart; /* 0x00B8 */
  FB_FLOAT32 SpriteDofNearEnd; /* 0x00BC */
  FB_FLOAT32 SpriteDofFarStart; /* 0x00C0 */
  FB_FLOAT32 SpriteDofFarEnd; /* 0x00C4 */
  FB_FLOAT32 SpriteDofMaxBlur; /* 0x00C8 */
  char pad_00CC[0x0004];
  FB_HANDLE(class TextureAsset) SpriteDofBokehTexture; /* 0x00D0 */
  FB_BOOLEAN Enable; /* 0x00D8 */
  FB_BOOLEAN ForceSimpleDof; /* 0x00D9 */
  FB_BOOLEAN UseCameraSettings; /* 0x00DA */
  FB_BOOLEAN DebugDrawFocusPlane; /* 0x00DB */
  FB_BOOLEAN IronsightsDofActive; /* 0x00DC */
  FB_BOOLEAN IronsightsDofCircleBlur; /* 0x00DD */
  char pad_00DE[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(DofComponentData) == 224);

}
