#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B5E8
   RuntimeId:        0F63
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BE8
   VfTable:          0000000142268940
   Address (Base):   00000001430D69D0
*/
#pragma pack(push, 8)
class AnimationEnumerationChoiceEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_INT32 Value; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AnimationEnumerationChoiceEntityData) == 32);

}
