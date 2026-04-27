#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428502F8
   RuntimeId:        1381
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          110B
   VfTable:          000000014227C0A0
   Address (Base):   00000001430DB8D0
*/
#pragma pack(push, 8)
class InterpolationManagerSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 TimeNudgePIDConstKPos; /* 0x0010 */
  FB_FLOAT32 TimeNudgePIDConstKNeg; /* 0x0014 */
  FB_FLOAT32 TimeNudgePIDConstTIPos; /* 0x0018 */
  FB_FLOAT32 TimeNudgePIDConstTINeg; /* 0x001C */
  FB_FLOAT32 TimeNudgePIDConstTDPos; /* 0x0020 */
  FB_FLOAT32 TimeNudgePIDConstTDNeg; /* 0x0024 */
  FB_FLOAT32 TimeNudgePIDLatencyTol; /* 0x0028 */
  FB_FLOAT32 TimeNudgePIDPacketDeltaTimeTol; /* 0x002C */
  FB_FLOAT32 TimeNudgePIDIncreaseDueToMissingPacket; /* 0x0030 */
  FB_FLOAT32 TimeNudgePIDMaxChangePerSec; /* 0x0034 */
  FB_BOOLEAN EnableTimeNudgePIDRegulator; /* 0x0038 */
  char pad_0039[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(InterpolationManagerSettings) == 64);

}
