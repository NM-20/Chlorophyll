#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/ExplosionPackTrigger.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DA98
   RuntimeId:        2834
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          118E
   VfTable:          000000014236EF70
   Address (Base):   00000001430F5890
*/
#pragma pack(push, 8)
class ExplosionPackVehicleRayTrigger : public ExplosionPackTrigger
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ActivationDelay; /* 0x0010 */
  FB_FLOAT32 Distance; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ExplosionPackVehicleRayTrigger) == 24);

}
