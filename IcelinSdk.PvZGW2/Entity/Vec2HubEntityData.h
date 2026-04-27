#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AEC0
   RuntimeId:        0865
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A37
   VfTable:          000000014220B9A8
   Address (Base):   00000001430F00C0
*/
#pragma pack(push, 8)
class Vec2HubEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_INT32 InputCount; /* 0x001C */
  FB_INT32 InputSelect; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(Vec2HubEntityData) == 40);

}
