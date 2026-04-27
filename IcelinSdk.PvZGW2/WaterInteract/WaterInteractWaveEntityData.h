#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876E38
   RuntimeId:        2E32
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B86
   VfTable:          0000000142395BD0
   Address (Base):   00000001430E00A0
*/
#pragma pack(push, 16)
class WaterInteractWaveEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Radius; /* 0x0060 */
  FB_FLOAT32 Amplitude; /* 0x0064 */
  char pad_0068[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(WaterInteractWaveEntityData) == 112);

}
