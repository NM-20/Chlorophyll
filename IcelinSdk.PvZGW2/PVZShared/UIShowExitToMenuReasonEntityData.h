#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428708F0
   RuntimeId:        29CB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AD8
   VfTable:          000000014236D3A0
   Address (Base):   00000001430E1C00
*/
#pragma pack(push, 8)
class UIShowExitToMenuReasonEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_BOOLEAN KeepPreviousGameInputState; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIShowExitToMenuReasonEntityData) == 32);

}
