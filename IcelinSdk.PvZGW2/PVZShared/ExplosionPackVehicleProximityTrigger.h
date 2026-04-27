#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/ExplosionPackTrigger.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DA78
   RuntimeId:        2832
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          118D
   VfTable:          000000014236EB78
   Address (Base):   00000001430F58F0
*/
#pragma pack(push, 8)
class ExplosionPackVehicleProximityTrigger : public ExplosionPackTrigger
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ActivationDelay; /* 0x0010 */
  FB_FLOAT32 Radius; /* 0x0014 */
  FB_BOOLEAN UseDetailedCollisionCheck; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ExplosionPackVehicleProximityTrigger) == 32);

}
