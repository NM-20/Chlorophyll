#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851EA0
   RuntimeId:        1508
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A42
   VfTable:          000000014227EB48
   Address (Base):   000000014310ECD0
*/
#pragma pack(push, 16)
class AddFakeCollisionEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 Position; /* 0x0020 */
  Vec3 Normal; /* 0x0030 */
  Vec3 ImpulseDirection; /* 0x0040 */
  FB_UINT32 PartIndex; /* 0x0050 */
  FB_FLOAT32 Speed; /* 0x0054 */
  MaterialDecl Material; /* 0x0058 */
  FB_FLOAT32 ImpulseMagnitude; /* 0x005C */
  FB_FLOAT32 Damage; /* 0x0060 */
  FB_BOOLEAN ApplyToAllParts; /* 0x0064 */
  char pad_0065[0x000B];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(AddFakeCollisionEntityData) == 112);

}
