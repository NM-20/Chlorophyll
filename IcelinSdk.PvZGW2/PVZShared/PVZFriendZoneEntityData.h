#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865958
   RuntimeId:        230B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CA1
   VfTable:          0000000142350EE0
   Address (Base):   00000001430E7300
*/
#pragma pack(push, 8)
class PVZFriendZoneEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 FriendlyWeight; /* 0x0018 */
  FB_INT32 EnemyWeight; /* 0x001C */
  FB_INT32 CorpsWeight; /* 0x0020 */
  FB_INT32 CorpsTimeout; /* 0x0024 */
  FB_BOOLEAN Enabled; /* 0x0028 */
  FB_BOOLEAN CountCorpsesForAllTeams; /* 0x0029 */
  char pad_002A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZFriendZoneEntityData) == 48);

}
