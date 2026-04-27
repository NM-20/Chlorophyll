#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AA40
   RuntimeId:        0EC5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AD7
   VfTable:          0000000142263A08
   Address (Base):   00000001430D73F0
*/
#pragma pack(push, 16)
class PlayAnimationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform EntitySpace0; /* 0x0020 */
  LinearTransform EntitySpace1; /* 0x0060 */
  LinearTransform EntitySpace2; /* 0x00A0 */
  LinearTransform EntitySpace3; /* 0x00E0 */
  LinearTransform EntitySpace4; /* 0x0120 */
  FB_HANDLE(class PlayAnimationData) Animation; /* 0x0160 */
  FB_FLOAT32 ExternalTime; /* 0x0168 */
  FB_FLOAT32 LifeTime; /* 0x016C */
  FB_FLOAT32 AlignValue; /* 0x0170 */
  FB_BOOLEAN Replicated; /* 0x0174 */
  char pad_0175[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0180 */
#pragma pack(pop)

static_assert(sizeof(PlayAnimationEntityData) == 384);

}
