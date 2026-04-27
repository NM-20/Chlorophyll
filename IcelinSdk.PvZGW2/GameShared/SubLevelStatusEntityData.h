#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B9F0
   RuntimeId:        0F9C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C65
   VfTable:          00000001422684E0
   Address (Base):   00000001430ED000
*/
#pragma pack(push, 8)
class SubLevelStatusEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING SubLevelName; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(SubLevelStatusEntityData) == 40);

}
