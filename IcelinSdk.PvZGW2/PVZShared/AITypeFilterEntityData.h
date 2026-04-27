#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/PVZShared/AITypeFilterWrapper.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873C38
   RuntimeId:        2C2C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A8E
   VfTable:          0000000142378D08
   Address (Base):   00000001430E1660
*/
#pragma pack(push, 8)
class AITypeFilterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  AITypeFilterWrapper TypeFilter; /* 0x001C */
  FB_BOOLEAN InvertFilter; /* 0x0020 */
  char pad_0021[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(AITypeFilterEntityData) == 40);

}
