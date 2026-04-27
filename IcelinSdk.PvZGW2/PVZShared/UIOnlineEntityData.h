#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870A08
   RuntimeId:        29D9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A14
   VfTable:          000000014236D3F0
   Address (Base):   00000001430E3CA0
*/
#pragma pack(push, 8)
class UIOnlineEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIOnlineEntityData) == 32);

}
