#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B120
   RuntimeId:        088B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C23
   VfTable:          000000014220B5B8
   Address (Base):   00000001430EFA00
*/
#pragma pack(push, 16)
class TransformBuilderEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 Left; /* 0x0020 */
  Vec3 Up; /* 0x0030 */
  Vec3 Forward; /* 0x0040 */
  Vec3 Trans; /* 0x0050 */
  FB_BOOLEAN IsWorldSpace; /* 0x0060 */
  char pad_0061[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(TransformBuilderEntityData) == 112);

}
