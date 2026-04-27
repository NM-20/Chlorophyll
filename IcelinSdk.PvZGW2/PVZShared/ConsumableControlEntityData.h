#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865CB8
   RuntimeId:        2341
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CA4
   VfTable:          0000000142350BF0
   Address (Base):   00000001430D0200
*/
#pragma pack(push, 8)
class ConsumableControlEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class SelectionSet) SelectionSet; /* 0x0020 */
  FB_UINT32 SpawnableSelectedIndex; /* 0x0028 */
  FB_UINT32 SpawnableSelectedPageIndex; /* 0x002C */
  FB_HANDLE(class ConsumableData) ConsumableData; /* 0x0030 */
  FB_UINT32 Quantity; /* 0x0038 */
  char pad_003C[0x0004];
  FB_CSTRING ContextKey; /* 0x0040 */
  FB_CSTRING PackId; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ConsumableControlEntityData) == 80);

}
