#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AAC8
   RuntimeId:        0827
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A4F
   VfTable:          000000014220BF70
   Address (Base):   00000001430F0A20
*/
#pragma pack(push, 8)
class NotEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_BOOLEAN In; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(NotEntityData) == 32);

}
