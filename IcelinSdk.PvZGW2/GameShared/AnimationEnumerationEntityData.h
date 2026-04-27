#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B5C8
   RuntimeId:        0F61
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B96
   VfTable:          0000000142268978
   Address (Base):   00000001430C0010
*/
#pragma pack(push, 8)
class AnimationEnumerationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class AntEnumeration) AntEnum; /* 0x0020 */
  FB_BOOLEAN DetectChangesFromStart; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(AnimationEnumerationEntityData) == 48);

}
