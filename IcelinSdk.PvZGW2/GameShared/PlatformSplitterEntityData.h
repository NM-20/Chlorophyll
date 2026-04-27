#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428496E0
   RuntimeId:        0DAE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09AE
   VfTable:          000000014225FDF8
   Address (Base):   00000001430EE140
*/
#pragma pack(push, 8)
class PlatformSplitterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_BOOLEAN RunOnce; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PlatformSplitterEntityData) == 32);

}
