#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B160
   RuntimeId:        088F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C37
   VfTable:          000000014220B580
   Address (Base):   00000001430EF940
*/
#pragma pack(push, 16)
class RotationTransformBuilderEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 Rotation; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(RotationTransformBuilderEntityData) == 48);

}
