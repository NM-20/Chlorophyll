#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849680
   RuntimeId:        0DA8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09A0
   VfTable:          000000014225FEA0
   Address (Base):   00000001430EE560
*/
#pragma pack(push, 8)
class SpeedEventGateEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinSpeed; /* 0x0018 */
  FB_FLOAT32 MaxSpeed; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SpeedEventGateEntityData) == 32);

}
