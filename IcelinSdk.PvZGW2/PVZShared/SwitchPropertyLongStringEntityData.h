#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865FB8
   RuntimeId:        236D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BF8
   VfTable:          00000001423505E8
   Address (Base):   00000001430E7AE0
*/
#pragma pack(push, 8)
class SwitchPropertyLongStringEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct LongString) StringProperties; /* 0x0018 */
  Realm Realm; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SwitchPropertyLongStringEntityData) == 40);

}
