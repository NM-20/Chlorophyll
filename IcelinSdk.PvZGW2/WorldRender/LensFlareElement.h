#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableEnabled.h>
#include <IcelinSdk.PvZGW2/Render/SurfaceShaderInstanceDataStruct.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855890
   RuntimeId:        1850
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C7288
   Default Value:    00000001428558E0
*/
#pragma pack(push, 16)
struct LensFlareElement
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec4 SizeOccluderCurve; /* 0x0000 */
  Vec4 SizeScreenPosCurve; /* 0x0010 */
  Vec4 SizeAngleCurve; /* 0x0020 */
  Vec4 SizeCamDistCurve; /* 0x0030 */
  Vec4 AlphaOccluderCurve; /* 0x0040 */
  Vec4 AlphaScreenPosCurve; /* 0x0050 */
  Vec4 AlphaAngleCurve; /* 0x0060 */
  Vec4 AlphaCamDistCurve; /* 0x0070 */
  Vec4 RotationDistCurve; /* 0x0080 */
  QualityScalableEnabled Enable; /* 0x0090 */
  char pad_0094[0x0004];
  SurfaceShaderInstanceDataStruct Shader; /* 0x0098 */
  FB_FLOAT32 RayDistance; /* 0x00C0 */
  Vec2 Size; /* 0x00C4 */
  FB_FLOAT32 SizeCamDistMax; /* 0x00CC */
  FB_FLOAT32 AlphaCamDistMax; /* 0x00D0 */
  FB_FLOAT32 RotationLocal; /* 0x00D4 */
  FB_FLOAT32 RotationDistMultiplier; /* 0x00D8 */
  FB_BOOLEAN EnableElement; /* 0x00DC */
  FB_BOOLEAN RotationAlignedToRay; /* 0x00DD */
  char pad_00DE[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(LensFlareElement) == 224);

}
