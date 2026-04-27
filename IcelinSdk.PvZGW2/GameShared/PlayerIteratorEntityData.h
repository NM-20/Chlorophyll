#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 00000001428498E0
   RuntimeId:        0DCE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C14
   VfTable:          000000014225FA28
   Address (Base):   00000001430D77B0
*/
#pragma pack(push, 8)
class PlayerIteratorEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  TeamId Team; /* 0x001C */
  FB_BOOLEAN Alive; /* 0x0020 */
  FB_BOOLEAN RandomizeFromStart; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PlayerIteratorEntityData) == 40);

}
