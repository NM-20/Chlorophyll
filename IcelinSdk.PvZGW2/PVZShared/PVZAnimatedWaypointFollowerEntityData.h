#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZAnimatedWaypointFollowerBinding.h>

namespace fb
{

/* TypeInfo (Array): 00000001428625D8
   RuntimeId:        2068
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AC0
   VfTable:          0000000142343C80
   Address (Base):   00000001430D5830
*/
#pragma pack(push, 8)
class PVZAnimatedWaypointFollowerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  PVZAnimatedWaypointFollowerBinding Binding; /* 0x001C */
  char pad_0094[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */
#pragma pack(pop)

static_assert(sizeof(PVZAnimatedWaypointFollowerEntityData) == 152);

}
