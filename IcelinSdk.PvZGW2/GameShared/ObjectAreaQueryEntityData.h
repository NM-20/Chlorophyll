#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 00000001428497A0
   RuntimeId:        0DBA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09D1
   VfTable:          000000014225FCE0
   Address (Base):   00000001430D7870
*/
#pragma pack(push, 16)
class ObjectAreaQueryEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform GeometryTransform; /* 0x0020 */
  FB_FLOAT32 Radius; /* 0x0060 */
  char pad_0064[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(ObjectAreaQueryEntityData) == 112);

}
