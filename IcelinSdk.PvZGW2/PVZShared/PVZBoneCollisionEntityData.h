#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 00000001428629E8
   RuntimeId:        20A4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09D5
   VfTable:          0000000142354270
   Address (Base):   00000001430D4750
*/
#pragma pack(push, 16)
class PVZBoneCollisionEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform RootTransform; /* 0x0020 */
  FB_STDARRAY(struct PVZBoneCollisionData) BoneCollisionData; /* 0x0060 */
  FB_BOOLEAN AutoEnable; /* 0x0068 */
  char pad_0069[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(PVZBoneCollisionEntityData) == 112);

}
