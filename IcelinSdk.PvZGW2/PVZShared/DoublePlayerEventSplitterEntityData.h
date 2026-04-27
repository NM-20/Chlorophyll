#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865A78
   RuntimeId:        231D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C03
   VfTable:          0000000142350D20
   Address (Base):   00000001430D4450
*/
#pragma pack(push, 8)
class DoublePlayerEventSplitterEntityData : public EntityData
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

static_assert(sizeof(DoublePlayerEventSplitterEntityData) == 32);

}
