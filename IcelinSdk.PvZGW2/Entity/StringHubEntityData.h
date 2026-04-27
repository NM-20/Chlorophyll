#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AF20
   RuntimeId:        086B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09A2
   VfTable:          000000014220B900
   Address (Base):   00000001430EFFA0
*/
#pragma pack(push, 8)
class StringHubEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_INT32 InputCount; /* 0x001C */
  FB_INT32 InputSelect; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(StringHubEntityData) == 40);

}
