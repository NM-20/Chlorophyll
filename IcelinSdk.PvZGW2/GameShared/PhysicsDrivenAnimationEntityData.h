#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/GameShared/PhysicsDrivenAnimationEntityBinding.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A168
   RuntimeId:        0E4C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B9F
   VfTable:          000000014225F4D0
   Address (Base):   00000001430D76F0
*/
#pragma pack(push, 8)
class PhysicsDrivenAnimationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  PhysicsDrivenAnimationEntityBinding Binding; /* 0x001C */
  FB_INT32 AnimationEntitySpacePriority; /* 0x0350 */
  FB_BOOLEAN UseSpineXFor1p; /* 0x0354 */
  char pad_0355[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0358 */
#pragma pack(pop)

static_assert(sizeof(PhysicsDrivenAnimationEntityData) == 856);

}
