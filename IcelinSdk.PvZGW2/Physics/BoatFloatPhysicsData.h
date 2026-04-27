#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/HullFloatPhysicsData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851078
   RuntimeId:        1434
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11FB
   VfTable:          000000014227F6D0
   Address (Base):   00000001430FC190
*/
#pragma pack(push, 16)
class BoatFloatPhysicsData : public HullFloatPhysicsData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 FrontRatio; /* 0x0090 */
  char pad_0094[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(BoatFloatPhysicsData) == 160);

}
