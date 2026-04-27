#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/DebugMenuItemType.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BB70
   RuntimeId:        0FB4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C3E
   VfTable:          0000000142268300
   Address (Base):   00000001431131D0
*/
#pragma pack(push, 8)
class DebugMenuItemEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  DebugMenuItemType ItemType; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING Text; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(DebugMenuItemEntityData) == 40);

}
