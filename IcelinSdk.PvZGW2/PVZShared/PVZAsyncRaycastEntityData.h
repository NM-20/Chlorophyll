#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865678
   RuntimeId:        22DD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09D3
   VfTable:          0000000142351188
   Address (Base):   00000001430D47B0
*/
#pragma pack(push, 16)
class PVZAsyncRaycastEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 Start; /* 0x0020 */
  Vec3 Stop; /* 0x0030 */
  FB_FLOAT32 Frequency; /* 0x0040 */
  FB_BOOLEAN Enabled; /* 0x0044 */
  FB_BOOLEAN SeeThrough; /* 0x0045 */
  FB_BOOLEAN Penetrable; /* 0x0046 */
  FB_BOOLEAN IncludeTerrain; /* 0x0047 */
  char pad_0048[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PVZAsyncRaycastEntityData) == 80);

}
