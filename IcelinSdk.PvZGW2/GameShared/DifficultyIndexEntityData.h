#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A5F8
   RuntimeId:        0E90
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A53
   VfTable:          00000001422666B8
   Address (Base):   00000001430ED840
*/
#pragma pack(push, 8)
class DifficultyIndexEntityData : public EntityData
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

static_assert(sizeof(DifficultyIndexEntityData) == 32);

}
