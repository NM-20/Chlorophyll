#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849BE8
   RuntimeId:        0DF8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C98
   VfTable:          000000014225F878
   Address (Base):   00000001430EE020
*/
#pragma pack(push, 16)
class TransformSnapToGroundEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform In; /* 0x0020 */
  FB_FLOAT32 DistanceToGround; /* 0x0060 */
  FB_FLOAT32 RayCastLength; /* 0x0064 */
  FB_FLOAT32 RayCastUpOffset; /* 0x0068 */
  FB_BOOLEAN AlignWithGroundNormal; /* 0x006C */
  FB_BOOLEAN IgnoreWater; /* 0x006D */
  char pad_006E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(TransformSnapToGroundEntityData) == 112);

}
