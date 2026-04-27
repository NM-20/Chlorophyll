#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428744E8
   RuntimeId:        2C58
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E3C
   VfTable:          0000000142378908
   Address (Base):   0000000143104290
*/
#pragma pack(push, 8)
class SprayPattern : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 AreaHeight; /* 0x0010 */
  FB_FLOAT32 SweepTimePitch; /* 0x0014 */
  FB_FLOAT32 AreaWidth; /* 0x0018 */
  FB_FLOAT32 SweepTimeYaw; /* 0x001C */
  FB_FLOAT32 RandomizeTimeYaw; /* 0x0020 */
  FB_FLOAT32 RandomizeTimePitch; /* 0x0024 */
  FB_FLOAT32 AccuracyReductionFactor; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SprayPattern) == 48);

}
