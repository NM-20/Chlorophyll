#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/DamageAreaTriggerEntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/DamageAreaDamageType.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D418
   RuntimeId:        27CF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B74
   VfTable:          0000000142365C48
   Address (Base):   00000001430E4780
*/
#pragma pack(push, 16)
class PVZDamageAreaTriggerEntityData : public DamageAreaTriggerEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  DamageAreaDamageType DamageType; /* 0x0090 */
  char pad_0094[0x0004];
  FB_CSTRING CustomKillLogMessage; /* 0x0098 */
  FB_BOOLEAN DamageProjectiles; /* 0x00A0 */
  FB_BOOLEAN DamageStaticModelEntities; /* 0x00A1 */
  char pad_00A2[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(PVZDamageAreaTriggerEntityData) == 176);

}
