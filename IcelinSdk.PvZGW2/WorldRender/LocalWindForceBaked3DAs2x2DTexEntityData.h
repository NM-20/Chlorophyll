#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/LocalWindForceEntityBaseData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855678
   RuntimeId:        1830
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AFD
   VfTable:          00000001422BBEF0
   Address (Base):   00000001430EA240
*/
#pragma pack(push, 16)
class LocalWindForceBaked3DAs2x2DTexEntityData : public LocalWindForceEntityBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 VolumeSliceZXScale; /* 0x0080 */
  Vec3 VolumeSliceZYScale; /* 0x0090 */
  FB_FLOAT32 SizeX; /* 0x00A0 */
  FB_FLOAT32 SizeY; /* 0x00A4 */
  FB_FLOAT32 SizeZ; /* 0x00A8 */
  FB_FLOAT32 Attenuation; /* 0x00AC */
  FB_HANDLE(class TextureAsset) VolumeSliceZX; /* 0x00B0 */
  FB_HANDLE(class TextureAsset) VolumeSliceZY; /* 0x00B8 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(LocalWindForceBaked3DAs2x2DTexEntityData) == 192);

}
