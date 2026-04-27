#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862518
   RuntimeId:        205C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0ACB
   VfTable:          0000000142343E18
   Address (Base):   00000001430E84A0
*/
#pragma pack(push, 8)
class PVZAnimatedTargetZoneEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(enum TeamId) TargetedTeams; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PVZAnimatedTargetZoneEntityData) == 40);

}
