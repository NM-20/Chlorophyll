#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/DestructionPartComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838FD0
   RuntimeId:        0658
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DAE
   VfTable:          00000001421FDFE8
   Address (Base):   00000001430FE470
*/
#pragma pack(push, 16)
class BreakablePartComponentData : public DestructionPartComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 HealthPercentage; /* 0x0080 */
  FB_BOOLEAN Collapsable; /* 0x0084 */
  FB_BOOLEAN DestroyNearbyStaticEntities; /* 0x0085 */
  char pad_0086[0x000A];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(BreakablePartComponentData) == 144);

}
