#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863B28
   RuntimeId:        214F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D63
   VfTable:          0000000142353298
   Address (Base):   00000001430D4570
*/
#pragma pack(push, 16)
class TrapezoidDamageReceiverComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN DisableTrapezoidOcclusionCheck; /* 0x0070 */
  FB_BOOLEAN UseAABBCenterForTrapezoidCheck; /* 0x0071 */
  char pad_0072[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(TrapezoidDamageReceiverComponentData) == 128);

}
