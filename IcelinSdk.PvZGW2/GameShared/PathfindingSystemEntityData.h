#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849060
   RuntimeId:        0D4A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C79
   VfTable:          0000000142260518
   Address (Base):   00000001430EE8C0
*/
#pragma pack(push, 8)
class PathfindingSystemEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_UINT32) PathfindingTypesOnLevel; /* 0x0018 */
  Realm Realm; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PathfindingSystemEntityData) == 40);

}
