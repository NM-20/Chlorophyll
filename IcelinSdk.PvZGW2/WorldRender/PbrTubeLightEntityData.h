#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/PbrAnalyticLightEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855B28
   RuntimeId:        1868
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B60
   VfTable:          00000001422BB9B8
   Address (Base):   00000001430E9AC0
*/
#pragma pack(push, 16)
class PbrTubeLightEntityData : public PbrAnalyticLightEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 TubeRadius; /* 0x00E0 */
  FB_FLOAT32 TubeWidth; /* 0x00E4 */
  FB_BOOLEAN OnlyHempishere; /* 0x00E8 */
  FB_BOOLEAN IsCapsule; /* 0x00E9 */
  char pad_00EA[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F0 */
#pragma pack(pop)

static_assert(sizeof(PbrTubeLightEntityData) == 240);

}
