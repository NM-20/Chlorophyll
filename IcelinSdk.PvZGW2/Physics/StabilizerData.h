#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851138
   RuntimeId:        1440
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1009
   VfTable:          000000014227F680
   Address (Base):   000000014310F450
*/
#pragma pack(push, 8)
class StabilizerData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 PitchStrength; /* 0x0010 */
  FB_FLOAT32 RollStrength; /* 0x0014 */
  FB_FLOAT32 YawStrength; /* 0x0018 */
  FB_FLOAT32 VerticalVelocityStrength; /* 0x001C */
  FB_BOOLEAN Advanced; /* 0x0020 */
  FB_BOOLEAN AdvancedYaw; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(StabilizerData) == 40);

}
