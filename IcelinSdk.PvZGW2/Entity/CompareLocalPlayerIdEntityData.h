#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/LocalPlayerId.h>

namespace fb
{

/* TypeInfo (Array): 000000014283C250
   RuntimeId:        0998
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C57
   VfTable:          0000000142211FF8
   Address (Base):   00000001430EEDA0
*/
#pragma pack(push, 8)
class CompareLocalPlayerIdEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  LocalPlayerId A; /* 0x001C */
  LocalPlayerId B; /* 0x0020 */
  FB_BOOLEAN TriggerOnPropertyChange; /* 0x0024 */
  FB_BOOLEAN TriggerOnStart; /* 0x0025 */
  char pad_0026[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(CompareLocalPlayerIdEntityData) == 40);

}
