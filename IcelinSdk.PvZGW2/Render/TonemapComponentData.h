#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Render/TonemapMethod.h>
#include <IcelinSdk.PvZGW2/Render/BloomMethod.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852F20
   RuntimeId:        1616
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D7A
   VfTable:          00000001422A1680
   Address (Base):   00000001430EAC00
*/
#pragma pack(push, 16)
class TonemapComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 BloomScale; /* 0x0080 */
  Vec3 Gaussian1Color; /* 0x0090 */
  Vec3 Gaussian2Color; /* 0x00A0 */
  Vec3 Gaussian3Color; /* 0x00B0 */
  Vec3 Gaussian4Color; /* 0x00C0 */
  Vec3 Gaussian5Color; /* 0x00D0 */
  Realm Realm; /* 0x00E0 */
  FB_FLOAT32 EV; /* 0x00E4 */
  FB_FLOAT32 ExposureCompensation; /* 0x00E8 */
  FB_FLOAT32 AutoExposureDarkestExclude; /* 0x00EC */
  FB_FLOAT32 AutoExposureBrightestExclude; /* 0x00F0 */
  FB_FLOAT32 DarkAdaptationTime; /* 0x00F4 */
  FB_FLOAT32 LightAdaptationTime; /* 0x00F8 */
  FB_FLOAT32 AutoExposureHigherThreshold; /* 0x00FC */
  FB_FLOAT32 AutoExposureLowerThreshold; /* 0x0100 */
  FB_FLOAT32 MinEV; /* 0x0104 */
  FB_FLOAT32 MaxEV; /* 0x0108 */
  FB_FLOAT32 SpotMeterScale; /* 0x010C */
  TonemapMethod TonemapMethod; /* 0x0110 */
  FB_FLOAT32 BloomBias; /* 0x0114 */
  BloomMethod BloomMethod; /* 0x0118 */
  FB_FLOAT32 GaussianSharpness; /* 0x011C */
  FB_FLOAT32 Gaussian1Weight; /* 0x0120 */
  FB_FLOAT32 Gaussian2Weight; /* 0x0124 */
  FB_FLOAT32 Gaussian3Weight; /* 0x0128 */
  FB_FLOAT32 Gaussian4Weight; /* 0x012C */
  FB_FLOAT32 Gaussian5Weight; /* 0x0130 */
  FB_FLOAT32 FFTThreshold; /* 0x0134 */
  FB_FLOAT32 FFTCutoff; /* 0x0138 */
  FB_FLOAT32 FFTKernelScale; /* 0x013C */
  FB_FLOAT32 FFTKernelRotation; /* 0x0140 */
  FB_FLOAT32 FFTSpikeScaleLimit; /* 0x0144 */
  FB_HANDLE(class TextureAsset) FFTKernelTexture; /* 0x0148 */
  FB_FLOAT32 ChromostereopsisScale; /* 0x0150 */
  FB_FLOAT32 ChromostereopsisOffset; /* 0x0154 */
  FB_BOOLEAN AutomaticExposure; /* 0x0158 */
  FB_BOOLEAN ClampEV; /* 0x0159 */
  FB_BOOLEAN FFTSpikeScaleLimitEnable; /* 0x015A */
  FB_BOOLEAN ChromostereopsisEnable; /* 0x015B */
  char pad_015C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0160 */
#pragma pack(pop)

static_assert(sizeof(TonemapComponentData) == 352);

}
