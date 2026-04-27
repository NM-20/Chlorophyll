#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855A88
   RuntimeId:        185E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B53
   VfTable:          00000001422BBAD0
   Address (Base):   00000001430E9BE0
*/
#pragma pack(push, 16)
class LightProbeVolumeData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 Xres; /* 0x0060 */
  FB_UINT32 Yres; /* 0x0064 */
  FB_UINT32 Zres; /* 0x0068 */
  FB_FLOAT32 BlendDistance; /* 0x006C */
  FB_INT32 Priority; /* 0x0070 */
  char pad_0074[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(LightProbeVolumeData) == 128);

}
