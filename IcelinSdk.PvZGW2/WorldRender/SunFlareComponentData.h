#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855DE8
   RuntimeId:        1894
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D73
   VfTable:          00000001422C50E8
   Address (Base):   00000001430E9400
*/
#pragma pack(push, 16)
class SunFlareComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec4 Element1SizeOccluderCurve; /* 0x0080 */
  Vec4 Element1SizeScreenPosCurve; /* 0x0090 */
  Vec4 Element1AlphaOccluderCurve; /* 0x00A0 */
  Vec4 Element1AlphaScreenPosCurve; /* 0x00B0 */
  Vec4 Element1RotationDistCurve; /* 0x00C0 */
  Vec4 Element2SizeOccluderCurve; /* 0x00D0 */
  Vec4 Element2SizeScreenPosCurve; /* 0x00E0 */
  Vec4 Element2AlphaOccluderCurve; /* 0x00F0 */
  Vec4 Element2AlphaScreenPosCurve; /* 0x0100 */
  Vec4 Element2RotationDistCurve; /* 0x0110 */
  Vec4 Element3SizeOccluderCurve; /* 0x0120 */
  Vec4 Element3SizeScreenPosCurve; /* 0x0130 */
  Vec4 Element3AlphaOccluderCurve; /* 0x0140 */
  Vec4 Element3AlphaScreenPosCurve; /* 0x0150 */
  Vec4 Element3RotationDistCurve; /* 0x0160 */
  Vec4 Element4SizeOccluderCurve; /* 0x0170 */
  Vec4 Element4SizeScreenPosCurve; /* 0x0180 */
  Vec4 Element4AlphaOccluderCurve; /* 0x0190 */
  Vec4 Element4AlphaScreenPosCurve; /* 0x01A0 */
  Vec4 Element4RotationDistCurve; /* 0x01B0 */
  Vec4 Element5SizeOccluderCurve; /* 0x01C0 */
  Vec4 Element5SizeScreenPosCurve; /* 0x01D0 */
  Vec4 Element5AlphaOccluderCurve; /* 0x01E0 */
  Vec4 Element5AlphaScreenPosCurve; /* 0x01F0 */
  Vec4 Element5RotationDistCurve; /* 0x0200 */
  Realm Realm; /* 0x0210 */
  FB_FLOAT32 OccluderSize; /* 0x0214 */
  FB_HANDLE(class SurfaceShaderBaseAsset) Element1Shader; /* 0x0218 */
  FB_FLOAT32 Element1RayDistance; /* 0x0220 */
  Vec2 Element1Size; /* 0x0224 */
  FB_FLOAT32 Element1RotationLocal; /* 0x022C */
  FB_FLOAT32 Element1RotationDistMultiplier; /* 0x0230 */
  char pad_0234[0x0004];
  FB_HANDLE(class SurfaceShaderBaseAsset) Element2Shader; /* 0x0238 */
  FB_FLOAT32 Element2RayDistance; /* 0x0240 */
  Vec2 Element2Size; /* 0x0244 */
  FB_FLOAT32 Element2RotationLocal; /* 0x024C */
  FB_FLOAT32 Element2RotationDistMultiplier; /* 0x0250 */
  char pad_0254[0x0004];
  FB_HANDLE(class SurfaceShaderBaseAsset) Element3Shader; /* 0x0258 */
  FB_FLOAT32 Element3RayDistance; /* 0x0260 */
  Vec2 Element3Size; /* 0x0264 */
  FB_FLOAT32 Element3RotationLocal; /* 0x026C */
  FB_FLOAT32 Element3RotationDistMultiplier; /* 0x0270 */
  char pad_0274[0x0004];
  FB_HANDLE(class SurfaceShaderBaseAsset) Element4Shader; /* 0x0278 */
  FB_FLOAT32 Element4RayDistance; /* 0x0280 */
  Vec2 Element4Size; /* 0x0284 */
  FB_FLOAT32 Element4RotationLocal; /* 0x028C */
  FB_FLOAT32 Element4RotationDistMultiplier; /* 0x0290 */
  char pad_0294[0x0004];
  FB_HANDLE(class SurfaceShaderBaseAsset) Element5Shader; /* 0x0298 */
  FB_FLOAT32 Element5RayDistance; /* 0x02A0 */
  Vec2 Element5Size; /* 0x02A4 */
  FB_FLOAT32 Element5RotationLocal; /* 0x02AC */
  FB_FLOAT32 Element5RotationDistMultiplier; /* 0x02B0 */
  FB_BOOLEAN Enable; /* 0x02B4 */
  FB_BOOLEAN DebugDrawOccluder; /* 0x02B5 */
  FB_BOOLEAN Element1Enable; /* 0x02B6 */
  FB_BOOLEAN Element1RotationAlignedToRay; /* 0x02B7 */
  FB_BOOLEAN Element2Enable; /* 0x02B8 */
  FB_BOOLEAN Element2RotationAlignedToRay; /* 0x02B9 */
  FB_BOOLEAN Element3Enable; /* 0x02BA */
  FB_BOOLEAN Element3RotationAlignedToRay; /* 0x02BB */
  FB_BOOLEAN Element4Enable; /* 0x02BC */
  FB_BOOLEAN Element4RotationAlignedToRay; /* 0x02BD */
  FB_BOOLEAN Element5Enable; /* 0x02BE */
  FB_BOOLEAN Element5RotationAlignedToRay; /* 0x02BF */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x02C0 */
#pragma pack(pop)

static_assert(sizeof(SunFlareComponentData) == 704);

}
