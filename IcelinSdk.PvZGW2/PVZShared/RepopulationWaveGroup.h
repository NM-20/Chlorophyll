#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BasicWaveGroup.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873628
   RuntimeId:        2BD2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E9E
   VfTable:          00000001423792E8
   Address (Base):   00000001430F5110
*/
#pragma pack(push, 8)
class RepopulationWaveGroup : public BasicWaveGroup
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 StartDelayTime; /* 0x0028 */
  FB_FLOAT32 AdditionalRangeAllowance; /* 0x002C */
  FB_BOOLEAN AllowOutOfRangeSpawnPoints; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(RepopulationWaveGroup) == 56);

}
