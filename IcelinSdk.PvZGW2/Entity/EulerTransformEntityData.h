#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Entity/ModifierEuler.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B000
   RuntimeId:        0879
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AA4
   VfTable:          000000014220B778
   Address (Base):   00000001430EFD60
*/
#pragma pack(push, 16)
class EulerTransformEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 Trans; /* 0x0020 */
  FB_FLOAT32 Rotation; /* 0x0030 */
  ModifierEuler Euler; /* 0x0034 */
  char pad_0038[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(EulerTransformEntityData) == 64);

}
