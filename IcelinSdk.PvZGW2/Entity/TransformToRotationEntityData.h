#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B1C0
   RuntimeId:        0895
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C50
   VfTable:          000000014220B4D8
   Address (Base):   00000001430EF880
*/
#pragma pack(push, 16)
class TransformToRotationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform In; /* 0x0020 */
  FB_BOOLEAN Degrees; /* 0x0060 */
  char pad_0061[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(TransformToRotationEntityData) == 112);

}
