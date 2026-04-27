#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832D68
   RuntimeId:        00CA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BE6
   VfTable:          00000001421E2CC8
   Address (Base):   00000001430F3480
*/
#pragma pack(push, 8)
class SchematicTreeEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class SchematicTreeData) SchematicTree; /* 0x0020 */
  FB_BOOLEAN AutoStart; /* 0x0028 */
  FB_BOOLEAN DebugDraw; /* 0x0029 */
  char pad_002A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SchematicTreeEntityData) == 48);

}
