#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/LocalWindForceComponentBaseData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 00000001428404F8
   RuntimeId:        0ADD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D50
   VfTable:          00000001422327C8
   Address (Base):   00000001430EE9E0
*/
#pragma pack(push, 16)
class LocalWindForceBaked3DAs2x2DTexComponentData : public LocalWindForceComponentBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 VolumeSliceZXScale; /* 0x0090 */
  Vec3 VolumeSliceZYScale; /* 0x00A0 */
  FB_FLOAT32 SizeX; /* 0x00B0 */
  FB_FLOAT32 SizeY; /* 0x00B4 */
  FB_FLOAT32 SizeZ; /* 0x00B8 */
  FB_FLOAT32 Attenuation; /* 0x00BC */
  FB_HANDLE(class TextureAsset) VolumeSliceZX; /* 0x00C0 */
  FB_HANDLE(class TextureAsset) VolumeSliceZY; /* 0x00C8 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */
#pragma pack(pop)

static_assert(sizeof(LocalWindForceBaked3DAs2x2DTexComponentData) == 208);

}
