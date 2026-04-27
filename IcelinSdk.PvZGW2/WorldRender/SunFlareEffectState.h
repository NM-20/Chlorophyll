#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 00000001428561E8
   RuntimeId:        18D0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E45
   VfTable:          00000001422C4C38
   Address (Base):   000000014310D590
*/
#pragma pack(push, 16)
class SunFlareEffectState : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 OccluderSize; /* 0x0010 */
  char pad_0014[0x0004];
  FB_HANDLE(class SurfaceShaderBaseAsset) Element1Shader; /* 0x0018 */
  Vec4 Element1SizeOccluderCurve; /* 0x0020 */
  Vec4 Element1SizeScreenPosCurve; /* 0x0030 */
  Vec4 Element1AlphaOccluderCurve; /* 0x0040 */
  Vec4 Element1AlphaScreenPosCurve; /* 0x0050 */
  Vec4 Element2SizeOccluderCurve; /* 0x0060 */
  Vec4 Element2SizeScreenPosCurve; /* 0x0070 */
  Vec4 Element2AlphaOccluderCurve; /* 0x0080 */
  Vec4 Element2AlphaScreenPosCurve; /* 0x0090 */
  Vec4 Element3SizeOccluderCurve; /* 0x00A0 */
  Vec4 Element3SizeScreenPosCurve; /* 0x00B0 */
  Vec4 Element3AlphaOccluderCurve; /* 0x00C0 */
  Vec4 Element3AlphaScreenPosCurve; /* 0x00D0 */
  Vec4 Element4SizeOccluderCurve; /* 0x00E0 */
  Vec4 Element4SizeScreenPosCurve; /* 0x00F0 */
  Vec4 Element4AlphaOccluderCurve; /* 0x0100 */
  Vec4 Element4AlphaScreenPosCurve; /* 0x0110 */
  Vec4 Element5SizeOccluderCurve; /* 0x0120 */
  Vec4 Element5SizeScreenPosCurve; /* 0x0130 */
  Vec4 Element5AlphaOccluderCurve; /* 0x0140 */
  Vec4 Element5AlphaScreenPosCurve; /* 0x0150 */
  FB_FLOAT32 Element1RayDistance; /* 0x0160 */
  Vec2 Element1Size; /* 0x0164 */
  char pad_016C[0x0004];
  FB_HANDLE(class SurfaceShaderBaseAsset) Element2Shader; /* 0x0170 */
  FB_FLOAT32 Element2RayDistance; /* 0x0178 */
  Vec2 Element2Size; /* 0x017C */
  char pad_0184[0x0004];
  FB_HANDLE(class SurfaceShaderBaseAsset) Element3Shader; /* 0x0188 */
  FB_FLOAT32 Element3RayDistance; /* 0x0190 */
  Vec2 Element3Size; /* 0x0194 */
  char pad_019C[0x0004];
  FB_HANDLE(class SurfaceShaderBaseAsset) Element4Shader; /* 0x01A0 */
  FB_FLOAT32 Element4RayDistance; /* 0x01A8 */
  Vec2 Element4Size; /* 0x01AC */
  char pad_01B4[0x0004];
  FB_HANDLE(class SurfaceShaderBaseAsset) Element5Shader; /* 0x01B8 */
  FB_FLOAT32 Element5RayDistance; /* 0x01C0 */
  Vec2 Element5Size; /* 0x01C4 */
  FB_BOOLEAN Enable; /* 0x01CC */
  FB_BOOLEAN DebugDrawOccluder; /* 0x01CD */
  FB_BOOLEAN Element1Enable; /* 0x01CE */
  FB_BOOLEAN Element2Enable; /* 0x01CF */
  FB_BOOLEAN Element3Enable; /* 0x01D0 */
  FB_BOOLEAN Element4Enable; /* 0x01D1 */
  FB_BOOLEAN Element5Enable; /* 0x01D2 */
  char pad_01D3[0x000D];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01E0 */
#pragma pack(pop)

static_assert(sizeof(SunFlareEffectState) == 480);

}
