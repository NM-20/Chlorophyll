#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B0E0
   RuntimeId:        0887
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09F8
   VfTable:          000000014220B660
   Address (Base):   00000001430EFAC0
*/
#pragma pack(push, 8)
class Vec4BuilderEntityData : public EntityData
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

static_assert(sizeof(Vec4BuilderEntityData) == 32);

}
