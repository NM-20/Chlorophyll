#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B040
   RuntimeId:        087D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AD2
   VfTable:          000000014220B740
   Address (Base):   00000001430EFCA0
*/
#pragma pack(push, 8)
class Vec3SplitterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(Vec3SplitterEntityData) == 32);

}
