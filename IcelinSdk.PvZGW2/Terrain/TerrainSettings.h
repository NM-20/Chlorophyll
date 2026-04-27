#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854508
   RuntimeId:        1738
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1110
   VfTable:          00000001422AF2A8
   Address (Base):   00000001430BFB30
*/
#pragma pack(push, 8)
class TerrainSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 HeightQueryCacheSize; /* 0x0010 */
  FB_UINT32 ModifiersCapacity; /* 0x0014 */
  FB_UINT32 IntersectingModifiersMax; /* 0x0018 */
  FB_FLOAT32 ModifierSlopeMax; /* 0x001C */
  FB_FLOAT32 ModifierDepthFactor; /* 0x0020 */
  FB_UINT32 ModifiersAppliedPerFrameMax; /* 0x0024 */
  FB_BOOLEAN ModifiersEnable; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(TerrainSettings) == 48);

}
