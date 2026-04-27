#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855658
   RuntimeId:        182E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1187
   VfTable:          00000001422BBF80
   Address (Base):   000000014310D830
*/
#pragma pack(push, 16)
class EnlightenState : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 BounceScale; /* 0x0010 */
  FB_FLOAT32 SunScale; /* 0x0014 */
  char pad_0018[0x0008];
  Vec3 SkyBoxSkyColor; /* 0x0020 */
  Vec3 SkyBoxGroundColor; /* 0x0030 */
  Vec3 SkyBoxSunLightColor; /* 0x0040 */
  Vec3 SkyBoxBackLightColor; /* 0x0050 */
  FB_FLOAT32 OutputScale; /* 0x0060 */
  FB_FLOAT32 SkyBoxSunLightColorSize; /* 0x0064 */
  FB_FLOAT32 SkyBoxBackLightColorSize; /* 0x0068 */
  FB_FLOAT32 SkyBoxBackLightRotationX; /* 0x006C */
  FB_FLOAT32 SkyBoxBackLightRotationY; /* 0x0070 */
  FB_BOOLEAN SkyBoxEnable; /* 0x0074 */
  char pad_0075[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(EnlightenState) == 128);

}
