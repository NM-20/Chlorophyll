#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428645F8
   RuntimeId:        21F9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09E4
   VfTable:          0000000142352720
   Address (Base):   00000001430D4FF0
*/
#pragma pack(push, 8)
class PlayerIdTrackerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_INT32 PlayerId; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PlayerIdTrackerEntityData) == 32);

}
